/*
 * command_parser_fsm.c
 *
 *  Created on: Nov 19, 2024
 *      Author: Hy
 */

#include "command_parser_fsm.h"
#include "string.h"

uint8_t command_index = 0;
uint8_t command_parser_status = INIT_COMMAND_PARSER;

void command_parser_fsm(){
	switch(command_parser_status){
	case INIT_COMMAND_PARSER:
		if(temp == '!') command_parser_status = START;
		break;
	case START:
		if(temp == '#') command_parser_status = END;
		if(temp == '!'){
			command_parser_status = START;
			command_data[0] = '\0';
		}
		else{
			command_data[command_index++] = temp;
		}
		break;
	case END:
		command_flag = 1;
		command_parser_status = INIT_COMMAND_PARSER;
		break;
	default:
		break;

	}
}
