#ifndef _TEMP_SET_H_
#define _TEMP_SET_H_

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#include <avr/io.h>

void initADC(void);

uint16_t readADC0(void);

#endif//_TEMP_SET_H_