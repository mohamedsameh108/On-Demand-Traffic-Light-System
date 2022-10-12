/*
 * DIO.c
 *
 * Created: 11/10/2022 12:58:58 ص
 *  Author: Administrator
 */ 

#include "DIO.h"



void DIO_INIT(uint8_t portNum , uint8_t pinNum , uint8_t direction)
{
	switch (portNum)
	{
		case PORT_A:
			if(direction == IN)
			{
				DDRA &=~(1<<pinNum);
			}
			else if (direction == OUT)
			{
				DDRA |=(1<<pinNum);
			}
			break;
		case PORT_B:
			if(direction == IN)
			{
				DDRB &=~(1<<pinNum);
			}
			else if (direction == OUT)
			{
				DDRB |=(1<<pinNum);
			}
			break;
		case PORT_C:
			if(direction == IN)
			{
				DDRC &=~(1<<pinNum);
			}
			else if (direction == OUT)
			{
				DDRC |=(1<<pinNum);
			}
			break;
		case PORT_D:
			if(direction == IN)
			{
				DDRD &=~(1<<pinNum);
			}
			else if (direction == OUT)
			{
				DDRD |=(1<<pinNum);
			}
			break;
		default:
			break;
	}
}

void DIO_Write(uint8_t portNum , uint8_t pinNum , uint8_t value)
{
	switch (portNum)
	{
		case PORT_A:
			if(value == LOW)
			{
				PORTA &=~(1<<pinNum);
			}
			else if (value == HIGH)
			{
				PORTA |=(1<<pinNum);
			}
			break;
		case PORT_B:
			if(value == LOW)
			{
				PORTB &=~(1<<pinNum);
			}
			else if (value == HIGH)
			{
				PORTB |=(1<<pinNum);
			}
			break;
		case PORT_C:
			if(value == LOW)
			{
				PORTC &=~(1<<pinNum);
			}
			else if (value == HIGH)
			{
				PORTC |=(1<<pinNum);
			}
			break;
		case PORT_D:
			if(value == LOW)
			{
				PORTD &=~(1<<pinNum);
			}
			else if (value == HIGH)
			{
				PORTD |=(1<<pinNum);
			}
			break;
		default:
			break;
	}
}
