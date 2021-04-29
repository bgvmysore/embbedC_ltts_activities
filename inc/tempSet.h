#ifndef _TEMP_SET_H_
#define _TEMP_SET_H_

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#define TRUE 0xFF
#define FALSE 0x00

#include <avr/io.h>

void initADC(void);

uint16_t readADC0(uint8_t actuationState);

#endif//_TEMP_SET_H_