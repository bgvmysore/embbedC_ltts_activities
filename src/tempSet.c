#include "tempSet.h"

void initADC(void){
    ADMUX |= (1<<REFS0);
    ADCSRA |= (1<<ADEN); 
}

uint16_t readADC0(void){

    ADMUX &= ~(1<<MUX0);
	ADMUX &= ~(1<<MUX1);
	ADMUX &= ~(1<<MUX2);
	ADMUX &= ~(1<<MUX3);

    ADCSRA |= (1<<ADSC);

    while( !(ADCSRA & (1<<ADIF)) );
    ADCSRA |= (1<<ADIF);

    return ADC;
}