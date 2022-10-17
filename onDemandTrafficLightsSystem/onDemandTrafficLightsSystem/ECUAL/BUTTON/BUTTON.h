/*
 * BUTTON.h
 *
 * Created: 12/10/2022 01:51:04 م
 *  Author: Mohamed Sameh
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/initEnvironment/typeDef.h"
#include "../../MCAL/DIO/DIO.h"

ButtonReturnState buttonInit(uint8_t portNum , uint8_t buttonNum);



#endif /* BUTTON_H_ */