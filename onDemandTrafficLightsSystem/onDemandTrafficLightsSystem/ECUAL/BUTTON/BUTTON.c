/*
 * BUTTON.c
 *
 * Created: 12/10/2022 01:51:20 م
 *  Author: Mohamed Sameh
 */ 

#include "BUTTON.h"

ButtonReturnState buttonInit(uint8_t portNum , uint8_t buttonNum)
{
	if(DIO_INIT(portNum,buttonNum,IN) == DIO_OK)
	{
		return Button_OK;
	}
	return Button_Error_INIT;
}