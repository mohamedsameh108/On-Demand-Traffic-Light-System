/*
 * LED.h
 *
 * Created: 11/10/2022 01:59:08 ص
 *  Author: Mohamed Sameh
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/initEnvironment/typeDef.h"
#include "../../MCAL/DIO/DIO.h"

void ledInit(uint8_t portNum , uint8_t ledNum);
void ledOn(uint8_t portNum , uint8_t ledNum);
void ledOff(uint8_t portNum , uint8_t ledNum);




#endif /* LED_H_ */