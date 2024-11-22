/*
 * uart_communication_fsm.h
 *
 *  Created on: Nov 22, 2024
 *      Author: Hy
 */

#ifndef INC_UART_COMMUNICATION_FSM_H_
#define INC_UART_COMMUNICATION_FSM_H_

#include "main.h"

#define WAIT_FOR_RTS	11
#define SENDING			12
#define WAIT_FOR_OK		13

uint8_t uart_com_status;
uint8_t ADC_value_memory;
uint8_t str[30];
void uart_communication_fsm();

#endif /* INC_UART_COMMUNICATION_FSM_H_ */
