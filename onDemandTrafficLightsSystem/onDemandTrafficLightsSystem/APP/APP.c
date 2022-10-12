/*
 * APP.c
 *
 * Created: 12/10/2022 04:52:45 م
 *  Author: Mohamed Sameh
 */ 

#include "APP.h"


int mode = 0 ;
void appMain()
{
	
	ledInit(PORT_A,0);
	ledInit(PORT_A,1);
	ledInit(PORT_A,2);
	ledInit(PORT_B,0);
	ledInit(PORT_B,1);
	ledInit(PORT_B,2);
	buttonInit(PORT_D,2);
	
	buttonInterrupt();
	
	
	/* Replace with your application code */
	while (1)
	{
		if(mode == 0)
		{
			ledOn(PORT_A,0);
			ledOn(PORT_B,2);
			delayTimer();
			ledOff(PORT_A,0);
			ledOff(PORT_B,2);
			mode++;
		}
		else if(mode == 1)
		{
			ledOn(PORT_A,1);
			ledOn(PORT_B,1);
			delayTimer();
			ledOff(PORT_A,1);
			ledOff(PORT_B,1);
			mode++;
		}
		else if(mode == 2)
		{
			ledOn(PORT_A,2);
			ledOn(PORT_B,0);
			delayTimer();
			ledOff(PORT_A,2);
			ledOff(PORT_B,0);
			mode++;
		}
		else if(mode == 3)
		{
			ledOn(PORT_A,1);
			ledOn(PORT_B,1);
			delayTimer();
			ledOff(PORT_A,1);
			ledOff(PORT_B,1);
			mode = 0;
		}
	}
}

ISR(__vector_1 )
{
	if(mode == 1 || mode == 2)
	{
		ledOff(PORT_A,0);
		ledOff(PORT_A,1);
		ledOff(PORT_A,2);
		ledOff(PORT_B,0);
		ledOff(PORT_B,1);
		ledOff(PORT_B,2);
		mode = 3;
		main();
	}
}
