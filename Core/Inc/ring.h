/*
 * ring.h
 *
 *  Created on: 13 Tem 2023
 *      Author: Doğu
 */

#ifndef INC_RING_H_
#define INC_RING_H_

#include "stm32f4xx_hal.h"
#include "usart.h"

// rx data data comes from docklight will stored here one by one E.G data: 51 08 11 22 33 44 55 FF
// 1. rx_buff = 51
// 2. rx_buff = 08
// 3. rx_buff = 11
// 4. rx_buff = 22
// 5. rx_buff = 33
// 6. rx_buff = 44
// 7. rx_buff = 55
// 8. rx_buff = FF
// extern values also need to be initialized somewhere in .c soruce file

extern uint8_t rx_buff;
extern uint8_t CRC_u8;

// ring prototype definition
void ring(uint8_t oneBitValue);

//CRC prototype definition
uint8_t crcCalc(uint8_t crcArray[], uint8_t size);


//RxCpltCallback prototype definition
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);

#endif /* INC_RING_H_ */
