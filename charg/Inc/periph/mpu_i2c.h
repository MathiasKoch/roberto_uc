/*********************************************************************
File    : i2c.h
Purpose : 
**********************************************************************/
#ifndef __I2C_H__
#define __I2C_H__
/****************************** Includes *****************************/
/****************************** Defines *******************************/

#ifdef __cplusplus
extern "C" {
#endif


void Set_I2C_Retry(unsigned short ml_sec);
unsigned short Get_I2C_Retry();

int Sensors_I2C_ReadRegister(unsigned char Address, unsigned char RegisterAddr, 
                                          unsigned short RegisterLen, unsigned char *RegisterValue);
int Sensors_I2C_WriteRegister(unsigned char Address, unsigned char RegisterAddr, 
                                           unsigned short RegisterLen, const unsigned char *RegisterValue);
 

#ifdef __cplusplus
}
#endif

#endif // __I2C_H__


