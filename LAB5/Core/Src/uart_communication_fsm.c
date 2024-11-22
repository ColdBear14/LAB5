/*
 * uart_communication_fsm.c
 *
 *  Created on: Nov 22, 2024
 *      Author: Hy
 */

#include "uart_communication_fsm.h"

ADC_HandleTypeDef hadc1;
UART_HandleTypeDef huart2;

uint8_t uart_com_status = WAIT_FOR_RTS;
uint8_t ADC_value_memory = 0;
uint8_t str[30];

void uart_communication_fsm(){
	switch (uart_com_status){
	case WAIT_FOR_RTS:
		ADC_value = HAL_ADC_GetValue(&hadc1);
		if(command_flag == 1 && command_data == "RST"){
			uart_com_status = SENDING;
			ADC_value_memory = ADC_value;
		}
		break;
	case SENDING:
		HAL_UART_Transmit(&huart2, (void *)str,  sprintf(str, "\r\n!ADC=%d#", ADC_value), 1000);
		uart_com_status = WAIT_FOR_OK;
		break;
	case WAIT_FOR_OK:
		if(command_flag == 1 && command_data == "OK"){
			uart_com_status = WAIT_FOR_RTS;
		}
		break;
	}
}
