/*
 * LED.c
 *
 * Created: 11/10/2022 01:59:20 ص
 *  Author: Mohamed Sameh
 */ 

#include "LED.h"
LEDReturnState ledInit(uint8_t portNum , uint8_t ledNum)
{
	if(DIO_INIT(portNum,ledNum,OUT) == DIO_OK)
	{
		return LED_OK;
	}
	return LED_Error_INIT;
}
LEDReturnState ledOn(uint8_t portNum , uint8_t ledNum)
{
	if(DIO_Write(portNum,ledNum,HIGH) == DIO_OK)
	{
		return LED_OK;
	}
	return LED_Error_On;
}
LEDReturnState ledOff(uint8_t portNum , uint8_t ledNum)
{
	if(DIO_Write(portNum,ledNum,LOW) == DIO_OK)
	{
		return LED_OK;
	}
	return LED_Error_Off;
}
LEDReturnState ledToogle(uint8_t portNum , uint8_t ledNum,uint8_t portNum1 , uint8_t ledNum1)
{
	if(DIO_Write(portNum,ledNum,LOW) == DIO_OK && DIO_Write(portNum1,ledNum1,LOW) == DIO_OK)
	{
		for(int i = 0 ; i < 10 ; i++)
		{
			DIO_Write(portNum,ledNum,HIGH);
			DIO_Write(portNum1,ledNum1,HIGH);
			toggleTimer();
			DIO_Write(portNum,ledNum,LOW);
			DIO_Write(portNum1,ledNum1,LOW);
			toggleTimer();
		}
		return LED_OK;
	}
	return LED_Error_Toggle;
	
}
