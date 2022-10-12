/*
 * BUTTON.c
 *
 * Created: 12/10/2022 01:51:20 م
 *  Author: Mohamed Sameh
 */ 

#include "BUTTON.h"

void buttonInit(uint8_t portNum , uint8_t buttonNum)
{
	DIO_INIT(portNum,buttonNum,IN);
}