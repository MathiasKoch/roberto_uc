#include "mpu_functions.h"
#include <string.h>

void mpu_get_ms(unsigned long *cnt) {
  *cnt = ST2MS(chVTGetSystemTime());
}

void mpu_log_e(const char* fmt, ...){
  (void) fmt;
}

void mpu_log_i(const char* fmt, ...){
  (void) fmt;
}

#if defined MPU_USE_SPI

void MPU_SPI_INIT(void) {

  // Initialize pins for SPI

  spiInit();
  palSetPadMode(MPU9250_SPI_SCK_PORT,  MPU9250_SPI_SCK_PIN,  PAL_MODE_ALTERNATE(1));      /* SCK. */
  palSetPadMode(MPU9250_SPI_MISO_PORT, MPU9250_SPI_MISO_PIN, PAL_MODE_ALTERNATE(1));      /* MISO.*/
  palSetPadMode(MPU9250_SPI_MOSI_PORT, MPU9250_SPI_MOSI_PIN, PAL_MODE_ALTERNATE(1));      /* MOSI.*/
  palSetPadMode(MPU9250_SPI_SS_PORT,   MPU9250_SPI_SS_PIN,   PAL_MODE_OUTPUT_PUSHPULL);
  palSetPad(MPU9250_SPI_SS_PORT,       MPU9250_SPI_SS_PIN);

}


int MPU_SPI_WRITE(unsigned char slave_addr, unsigned char reg_addr,
                    unsigned short len, const unsigned char *data_ptr)
{
  (void)slave_addr;
  spiAcquireBus(MPU9250_SPI_BUS);              /* Acquire ownership of the bus.    */
  spiStart(MPU9250_SPI_BUS, &hs_spicfg);       /* Setup transfer parameters.       */
  spiSelect(MPU9250_SPI_BUS);                  /* Slave Select assertion.          */
  spiSend(MPU9250_SPI_BUS, 1, &reg_addr);
  spiSend(MPU9250_SPI_BUS, len, data_ptr);
  spiUnselect(MPU9250_SPI_BUS);                /* Slave Select de-assertion.       */
  spiReleaseBus(MPU9250_SPI_BUS);              /* Ownership release.               */
  return 1;

}

int MPU_SPI_READ(unsigned char slave_addr, unsigned char reg_addr,
                              unsigned short len, unsigned char *data_ptr)
{
  (void)slave_addr;
  spiAcquireBus(MPU9250_SPI_BUS);              /* Acquire ownership of the bus.    */
  spiStart(MPU9250_SPI_BUS, &hs_spicfg);       /* Setup transfer parameters.       */
  spiSelect(MPU9250_SPI_BUS);                  /* Slave Select assertion.          */
  spiSend(MPU9250_SPI_BUS, 1, &reg_addr);
  spiReceive(MPU9250_SPI_BUS, len, data_ptr);
  spiUnselect(MPU9250_SPI_BUS);                /* Slave Select de-assertion.       */
  spiReleaseBus(MPU9250_SPI_BUS);              /* Ownership release.               */
  return 1;
}

#elif defined MPU_USE_I2C

static I2CConfig i2cconfig;

void MPU_I2C_INIT(void) {

  // Initialize pins for I2C

  i2cconfig.timingr = 0x00100002;		// 800kHz Fast Mode+
  i2cInit();
  palSetPadMode(MPU9250_I2C_SCL_PORT, MPU9250_I2C_SCL_PIN, PAL_MODE_ALTERNATE(1));
  palSetPadMode(MPU9250_I2C_SDA_PORT, MPU9250_I2C_SDA_PIN, PAL_MODE_ALTERNATE(1));

}


int MPU_I2C_WRITE(unsigned char slave_addr, unsigned char reg_addr,
                    unsigned short len, const unsigned char *data_ptr)
{
  uint8_t command[] = { reg_addr, *data_ptr };

  i2cAcquireBus(MPU9250_I2C_BUS);
	i2cStart(MPU9250_I2C_BUS, &i2cconfig);
	i2cMasterTransmitTimeout(MPU9250_I2C_BUS, slave_addr, command, len+1, NULL, 0, MS2ST(10));
	i2cStop(MPU9250_I2C_BUS);
  i2cReleaseBus(MPU9250_I2C_BUS);
  return 1;

}

int MPU_I2C_READ(unsigned char slave_addr, unsigned char reg_addr,
                              unsigned short len, unsigned char *data_ptr)
{
  uint8_t command[len+1],
			txLength = len+1,
			rxLength = 0;
	command[0] = reg_addr; 		// Co = 0, D/C = 1
	memmove(&command[1], data_ptr, len);

  i2cAcquireBus(MPU9250_I2C_BUS);
	i2cStart(MPU9250_I2C_BUS, &i2cconfig);
	i2cMasterTransmitTimeout(MPU9250_I2C_BUS, slave_addr, command, txLength, NULL, rxLength, MS2ST(10));
	i2cStop(MPU9250_I2C_BUS);
  i2cReleaseBus(MPU9250_I2C_BUS);
  return 1;
}

#endif
