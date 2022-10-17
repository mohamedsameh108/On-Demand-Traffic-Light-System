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
#include "../../MCAL/TIMER/TIMER.h"

LEDReturnState ledInit(uint8_t portNum , uint8_t ledNum);
LEDReturnState ledOn(uint8_t portNum , uint8_t ledNum);
LEDReturnState ledOff(uint8_t portNum , uint8_t ledNum);
LEDReturnState ledToogle(uint8_t portNum , uint8_t ledNum,uint8_t portNum1 , uint8_t ledNum1);




#endif /* LED_H_ */