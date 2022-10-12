/*
 * INTERRUPT.c
 *
 * Created: 12/10/2022 04:37:42 م
 *  Author: Mohamed Sameh
 */ 

#include "INTERRUPT.h"

void buttonInterrupt()
{
	Enable_Global_Interrupt();
	MCUCR |= (1<<1);
	GICR |= (1<<6);
}
