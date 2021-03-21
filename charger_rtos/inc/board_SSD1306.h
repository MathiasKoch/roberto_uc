/*
 * This file is subject to the terms of the GFX License. If a copy of
 * the license was not distributed with this file, you can obtain one at:
 *
 *              http://ugfx.org/license.html
 */

#ifndef _GDISP_LLD_BOARD_H
#define _GDISP_LLD_BOARD_H

//#define SSD1306_PAGE_PREFIX		0x40

//#define SSD1306_RESET_PORT		GPIOB
//#define SSD1306_RESET_PIN		5

#include <string.h>

/**
 * The default slave address is 0x3D, (talking about
 * only the real address part here) and the slave
 * address can be changed to 0x3C by soldering the
 * SA0 pads on the bottom side of the module.
 *
 * b7 | b6 | b5 | b4 | b3 | b2 | b1 | b0
 * --------------------------------------
 * 0  | 1  | 1  | 1  | 1  | 0  |SA0 | R/W
 */
#define SSD1306_I2C_ADDRESS_LEFT   	0x3D
#define SSD1306_I2C_ADDRESS_RIGHT   	0x3C
#define SSD1306_SDA_PORT		GPIOB
#define SSD1306_SDA_PIN			11
#define SSD1306_SCL_PORT		GPIOB
#define SSD1306_SCL_PIN			10
//int8_t vccstate;
int32_t row_offset = 0;

// I2C configuration structure.
static I2CConfig i2cconfig;

static GFXINLINE void init_board(GDisplay *g) {
	switch(g->controllerdisplay) {
		case 0:											// Set up for Display 0
			// RESET pin. (NOT connected)
			//palSetPadMode(SSD1306_RESET_PORT, SSD1306_RESET_PIN, PAL_MODE_OUTPUT_PUSHPULL);

			/*
			 * Initializes the I2C driver 1. The I2C1 signals are routed as follows:
			 * PB6 - SCL.
			 * PB7 - SDA.
			 * Timing value comes from ST I2C config tool (xls):
			 * 0x00901D2B;		// 100kHz Standard Mode
			 * 0x00300444;		// 100kHz Fast Mode
			 * 0x0030020A;		// 400kHz Fast Mode
			 * 0x00100002;		// 800kHz Fast Mode +
			 */
			i2cconfig.timingr = 0x00100002;		// 800kHz Fast Mode+
			i2cInit();
			palSetPadMode(SSD1306_SCL_PORT, SSD1306_SCL_PIN, PAL_MODE_ALTERNATE(1));
			palSetPadMode(SSD1306_SDA_PORT, SSD1306_SDA_PIN, PAL_MODE_ALTERNATE(1));
			//vccstate = SSD1306_SWITCHCAPVCC;
			g->board = (void *)SSD1306_I2C_ADDRESS_LEFT;
			break;
		case 1:
			g->board = (void *)SSD1306_I2C_ADDRESS_RIGHT;
			break;
	}
}

static GFXINLINE void post_init_board(GDisplay *g) {
	(void) g;
}

static GFXINLINE void setpin_reset(GDisplay *g, bool_t state) {
	(void) g;
	(void) state;
	// Reset pin not connected
	/*if(state){
		palSetPad(SSD1306_RESET_PORT, SSD1306_RESET_PIN);
	}else{
		palClearPad(SSD1306_RESET_PORT, SSD1306_RESET_PIN);
	}*/
}

static GFXINLINE void acquire_bus(GDisplay *g) {
	(void) g;
	i2cAcquireBus(&I2CD1);
}

static GFXINLINE void release_bus(GDisplay *g) {
	(void) g;
	i2cReleaseBus(&I2CD1);
}

static GFXINLINE void write_cmd(GDisplay *g, uint8_t cmd) {
	(void) g;
	uint8_t command[] = { 0x00, 		// Co = 0, D/C = 0
						  cmd 		},
						  txLength = sizeof(command)/sizeof(command[0]),
						  rxLength = 0;
	i2cStart(&I2CD1, &i2cconfig);
	i2cMasterTransmitTimeout(&I2CD1, (unsigned int)g->board, command, txLength, NULL, rxLength, MS2ST(10));
	i2cStop(&I2CD1);
}

static GFXINLINE void write_data(GDisplay *g, uint8_t* data, uint16_t length) {
	(void) g;
	uint8_t command[length+1],
			txLength = length+1,
			rxLength = 0;
	command[0] = 0x40; 		// Co = 0, D/C = 1
	memmove(&command[1], data, length);

	i2cStart(&I2CD1, &i2cconfig);
	i2cMasterTransmitTimeout(&I2CD1, (unsigned int)g->board, command, txLength, NULL, rxLength, MS2ST(10));
	i2cStop(&I2CD1);
}

#endif /* _GDISP_LLD_BOARD_H */
