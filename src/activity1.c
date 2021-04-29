#include "activity1.h"

volatile uint8_t isActuated = FALSE;

void activity1_init(){
    
    DDRB = DDRB |  (1<<PB0);
    PORTB = PORTB & ~(1<<PB0);

    //Set B3 as Input and initialize it to high
    DDRB = DDRB & ~(1<<PB3);
    PORTB = PORTB |  (1<<PB3);

    //Set B2 as Input and initialize it to high
    DDRB = DDRB & ~(1<<PB2);
    PORTB = PORTB |  (1<<PB2);
}

void activity1_loop(){
        if( !(PINB & (1<<PB3)) && !(PINB & (1<<PB2))){
            PORTB = PORTB | (1<<PB0);
            isActuated = TRUE;
        }
        else{
            PORTB = PORTB & ~(1<<PB0);
            isActuated = FALSE;
        }
}

uint8_t isHeaterActuated(){
    return isActuated;
}