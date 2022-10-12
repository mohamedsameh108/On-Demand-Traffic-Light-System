/*
 * DIO.h
 *
 * Created: 11/10/2022 12:58:36 ص
 *  Author: Mohamed Sameh
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../initEnvironment/typeDef.h"
#include "../initEnvironment/registers.h"

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

#define IN 0
#define OUT 1

#define LOW 0
#define HIGH 1

void DIO_INIT(uint8_t portNum , uint8_t pinNum , uint8_t direction);
void DIO_Write(uint8_t portNum , uint8_t pinNum , uint8_t value);



#endif /* DIO_H_ */