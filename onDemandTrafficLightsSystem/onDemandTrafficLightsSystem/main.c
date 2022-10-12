/*
 * onDemandTrafficLightsSystem.c
 *
 * Created: 11/10/2022 12:55:13 ص
 * Author : Mohamed Sameh
 */ 

#include "ECUAL/LED/LED.h"

#include <avr/interrupt.h>

int mode = 0 ;
int main(void)
{
	int counter = 0;
	
	ledInit(PORT_A,0);
	ledInit(PORT_A,1);
	ledInit(PORT_A,2);
	ledInit(PORT_B,0);
	ledInit(PORT_B,1);
	ledInit(PORT_B,2);
	
	sei();
	MCUCR |= (1<<ISC00) | (1<<ISC01);
	GICR |= (1<<INT0);
	
	
    /* Replace with your application code */
    while (1) 
    {
		switch(mode)
		{
			case 0:
				counter = 0;
				ledOff(PORT_B,1);
				ledOff(PORT_A,1);
				ledOn(PORT_A,0);
				ledOn(PORT_B,2);
				delayTimer();
				counter++;
				ledOff(PORT_A,0);
				ledOff(PORT_B,2);
				ledOn(PORT_A,1);
				ledOn(PORT_B,1);
				counter++;
				delayTimer();
				ledOff(PORT_A,1);
				ledOff(PORT_B,1);
				ledOn(PORT_A,2);
				ledOn(PORT_B,0);
				counter++;
				delayTimer();
				ledOff(PORT_A,2);
				ledOff(PORT_B,0);
				ledOn(PORT_A,1);
				ledOn(PORT_B,1);
				delayTimer();
				counter++;
			break;
			case 1:
				if(counter == 2 || counter == 1)
				{
					ledOff(PORT_A,2);
					ledOff(PORT_A,1);
					ledOff(PORT_B,1);
					ledOff(PORT_B,0);
					ledOn(PORT_A,1);
					ledOn(PORT_B,1);
					delayTimer();
					ledOff(PORT_A,1);
					ledOff(PORT_B,1);
					ledOn(PORT_A,0);
					ledOn(PORT_B,2);
					delayTimer();
					ledOff(PORT_A,0);
					ledOff(PORT_B,2);
					ledOn(PORT_A,1);
					ledOn(PORT_B,1);
					delayTimer();
					mode = 0;
					counter = 0;
				}
			break;
		}
    }
}

ISR(INT0_vect)
{
	mode = 1;
}

