/*
 * global.c
 *
 *  Created on: Nov 19, 2024
 *      Author: Hy
 */

#include "global.h"

uint8_t temp = 0;
uint8_t buffer[MAX_BUFFER_SIZE];
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;

uint8_t command_flag = 0;
uint8_t command_data[30];
uint32_t ADC_value = 0;
