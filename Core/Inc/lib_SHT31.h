/*
 * lib_SHT31.h
 *
 *  Created on: Feb 12, 2021
 *      Author: lepetitprince
 */

#ifndef INC_LIB_SHT31_H_
#define INC_LIB_SHT31_H_



#include "stm32l1xx_hal.h"
#include "stm32l1xx_hal_i2c.h"

// Device I2C Adress
#define SHT31_ADDRESS     0x44 << 1 // if ADDR (pin2) connected to VSS
//#define SHT31_ADDRESS     0x45 // if ADDR (pin2) connected to VDD


// commands

// enable clock stretching - measure with high/medium/low repeatability,
#define SHT31_MEAS_HIGHREP_STRETCH 0x2C06
#define SHT31_MEAS_MEDREP_STRETCH  0x2C0D
#define SHT31_MEAS_LOWREP_STRETCH  0x2C10
// disabled clock stretching - measure with high/medium/low repeatability,
#define SHT31_MEAS_HIGHREP         0x2400
#define SHT31_MEAS_MEDREP          0x240B
#define SHT31_MEAS_LOWREP          0x2416

#define SHT31_READSTATUS           0xF32D // The command to read out the status register
#define SHT31_CLEARSTATUS          0x3041 // Clear Status Register All flags (Bit 15, 11, 10, 4) in the status register can be cleared (set to zero)
#define SHT31_SOFTRESET            0x30A2 // cmd to do a soft reset
#define SHT31_HEATEREN             0x306D // heater enable
#define SHT31_HEATERDIS            0x3066 // heater disable (heater automatically disable after reset)
#define SHT31_BREAK				   0x3093
/*
void SHT31_init(I2C_HandleTypeDef* I2Cx, rgb_lcd* DataStruct);
void SHT31_get_temp(I2C_HandleTypeDef* I2Cx, uint8_t value);
void SHT31_get_humi(I2C_HandleTypeDef* I2Cx, char *str);
void reset_SHT31(void);
void variable_Transmit(uint16_t address, uint8_t *Data, uint16_t len); */

// void SHT31_C2F(I2C_HandleTypeDef* I2Cx,char col, char row);
//void reglagecouleur(uint8_t R,uint8_t G,uint8_t B);




#endif /* INC_LIB_SHT31_H_ */
