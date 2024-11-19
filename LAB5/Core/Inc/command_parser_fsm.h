/*
 * command_parser_fsm.h
 *
 *  Created on: Nov 19, 2024
 *      Author: Hy
 */

#ifndef INC_COMMAND_PARSER_FSM_H_
#define INC_COMMAND_PARSER_FSM_H_

#include "main.h"

#define INIT_COMMAND_PARSER	0
#define START				1
#define END					2
extern uint8_t command_parser_status;

void command_parser_fsm();

#endif /* INC_COMMAND_PARSER_FSM_H_ */
