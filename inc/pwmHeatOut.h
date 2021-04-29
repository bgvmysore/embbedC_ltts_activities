#ifndef _PWMHEATOUT_H_
#define _PWMHEATOUT_H_

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#include <avr/io.h>

void pwmInit_OC1A(void);

void setCompare_OC1A(uint16_t comparevalue);

#endif//_PWMHEATOUT_H_