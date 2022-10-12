/*
 * DIO.c
 *
 * Created: 11/10/2022 12:58:58 ص
 *  Author: Administrator
 */ 

#include "DIO.h"
#include "../initEnvironment/registers.h"

#define numberOfOverFlows 20

void delayTimer()
{
	int overFlowCounter = 0;
	TCCR0 |= (1 << 2)|(1 << 0);
	TCNT0 = 245;
	while (overFlowCounter < numberOfOverFlows)
	{
		while ((TIFR & (1<<0)) == 0);
		TIFR |= (1<<0);
		overFlowCounter++;
		TCNT0 = 0;
	}
	TCCR0 = 0x00;
}
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
void DIO_Read(uint8_t portNum , uint8_t pinNum , uint8_t *value)
{
	switch (portNum)
	{
		case PORT_A:
			*value = (PINA & (1<<pinNum))>>pinNum;
			break;
		case PORT_B:
			*value = (PINB & (1<<pinNum))>>pinNum;
			break;
		case PORT_C:
			*value = (PINC & (1<<pinNum))>>pinNum;
			break;
		case PORT_D:
			*value = (PIND & (1<<pinNum))>>pinNum;
			break;
		default:
			break;
	}
}