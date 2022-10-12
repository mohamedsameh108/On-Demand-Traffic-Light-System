/*
 * TIMER.c
 *
 * Created: 12/10/2022 04:38:28 م
 *  Author: Mohamed Sameh
 */ 

#include "TIMER.h"

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