/*
 * typeDef.h
 *
 * Created: 11/10/2022 01:03:57 ص
 *  Author: Mohamed Sameh
 */ 


#ifndef TYPEDEF_H_
#define TYPEDEF_H_


typedef unsigned char uint8_t;

typedef enum DIOReturnState{
	DIO_OK,
	DIO_Error_INIT,
	DIO_Error_Write
	} DIOReturnState;

typedef enum LEDReturnState{
	LED_OK,
	LED_Error_INIT,
	LED_Error_On,
	LED_Error_Off,
	LED_Error_Toggle
	} LEDReturnState;
	
typedef enum ButtonReturnState{
	Button_OK,
	Button_Error_INIT
} ButtonReturnState;

#endif /* TYPEDEF_H_ */