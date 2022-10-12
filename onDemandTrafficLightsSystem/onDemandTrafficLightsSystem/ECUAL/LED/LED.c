/*
 * LED.c
 *
 * Created: 11/10/2022 01:59:20 ص
 *  Author: Mohamed Sameh
 */ 

#include "LED.h"
void ledInit(uint8_t portNum , uint8_t ledNum)
{
	DIO_INIT(portNum,ledNum,OUT);
}
void ledOn(uint8_t portNum , uint8_t ledNum)
{
	DIO_Write(portNum,ledNum,HIGH);
}
void ledOff(uint8_t portNum , uint8_t ledNum)
{
	DIO_Write(portNum,ledNum,LOW);
}
