﻿/*
 * registers.h
 *
 * Created: 11/10/2022 01:03:43 ص
 *  Author: Mohamed Sameh
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "typeDef.h"

//Port A
#define PORTA *((volatile uint8_t *)0x3B)
#define DDRA *((volatile uint8_t *)0x3A)
#define PINA *((volatile uint8_t *)0x39)

//Port B
#define PORTB *((volatile uint8_t *)0x38)
#define DDRB *((volatile uint8_t *)0x37)
#define PINB *((volatile uint8_t *)0x36)

//Port C
#define PORTC *((volatile uint8_t *)0x35)
#define DDRC *((volatile uint8_t *)0x34)
#define PINC *((volatile uint8_t *)0x33)

//Port D
#define PORTD *((volatile uint8_t *)0x32)
#define DDRD *((volatile uint8_t *)0x31)
#define PIND *((volatile uint8_t *)0x30)

//Timer
#define TCCR0 *((volatile uint8_t *)0x53)
#define TCNT0 *((volatile uint8_t *)0x52)
#define TIFR *((volatile uint8_t *)0x58)

#endif /* REGISTERS_H_ */