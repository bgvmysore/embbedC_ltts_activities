#ifndef _UARTOUT_H_
#define _UARTOUT_H_

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#ifndef F_CPU
    #define F_CPU=16000000UL
#endif

#include <avr/io.h>
#include <string.h>
#include <stdio.h>

#define BAUD 9600
#define BRR (F_CPU / 16 / (BAUD-1) )

void USART_Init(unsigned int ubrr);

void USART_Transmit(unsigned char data);

void heatActuationInPercentage(uint16_t adcdata, char serialout[]);

void outPutString_UART(char serialout[]);

#endif//_UARTOUT_H_