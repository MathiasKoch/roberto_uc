/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MPU_FUNCTIONS_
#define __MPU_FUNCTIONS_



/* Includes ------------------------------------------------------------------*/
#include "hal.h"


#ifdef __cplusplus
extern "C" {
#endif

#if defined MPU_USE_SPI

#define MPU9250_SPI_BUS         &SPID1

#define MPU9250_SPI_MOSI_PORT   GPIOB
#define MPU9250_SPI_MOSI_PIN		11
#define MPU9250_SPI_MISO_PORT		GPIOB
#define MPU9250_SPI_MISO_PIN		10
#define MPU9250_SPI_SCK_PORT		GPIOB
#define MPU9250_SPI_SCK_PIN			10
#define MPU9250_SPI_SS_PORT		  GPIOB
#define MPU9250_SPI_SS_PIN			10


static const SPIConfig hs_spicfg = {
  NULL,
  MPU9250_SPI_SS_PORT,
  MPU9250_SPI_SS_PIN,
  0,
  0
};
void MPU_SPI_INIT(void);
int MPU_SPI_WRITE(unsigned char slave_addr, unsigned char reg_addr,
                    unsigned short len, const unsigned char *data_ptr);
int MPU_SPI_READ(unsigned char slave_addr, unsigned char reg_addr,
                    unsigned short len, unsigned char *data_ptr);



#elif defined MPU_USE_I2C

#define MPU9250_I2C_BUS       &I2CD1
#define MPU9250_I2C_SDA_PORT  GPIOB
#define MPU9250_I2C_SDA_PIN   7
#define MPU9250_I2C_SCL_PORT  GPIOB
#define MPU9250_I2C_SCL_PIN   6

void MPU_I2C_INIT(void);
int MPU_I2C_WRITE(unsigned char slave_addr, unsigned char reg_addr,
                    unsigned short len, const unsigned char *data_ptr);
int MPU_I2C_READ(unsigned char slave_addr, unsigned char reg_addr,
                    unsigned short len, unsigned char *data_ptr);

#endif

void mpu_get_ms(unsigned long *cnt);
void mpu_log_e(const char* fmt, ...);
void mpu_log_i(const char* fmt, ...);

#ifdef __cplusplus
}
#endif

#endif /* __MPU_FUNCTIONS_ */

/******************* (C) COPYRIGHT 2010 STMicroelectronics *****END OF FILE****/
