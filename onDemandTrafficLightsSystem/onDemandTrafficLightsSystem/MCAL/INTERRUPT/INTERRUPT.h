/*
 * INTERRUPT.h
 *
 * Created: 12/10/2022 04:37:13 م
 *  Author: Mohamed Sameh
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include "../initEnvironment/registers.h"

#define ISR(vector,...) \
void vector(void)__attribute__((signal,__INTR_ATTRS))__VA_ARGS__;   \
void vector(void)

#define Disable_Global_Interrupt() __asm__ __volatile__("cli" ::: "memory")
#define Enable_Global_Interrupt()  __asm__ __volatile__("sei" ::: "memory")

void buttonInterrupt();



#endif /* INTERRUPT_H_ */