#include "activity1.h"

void activity1_init(){
    
    DDRB = DDRB |  (1<<PB0);
    PORTB = PORTB & ~(1<<PB0);

    //Set B1 as Input and initialize it to high
    DDRB = DDRB & ~(1<<PB1);
    PORTB = PORTB |  (1<<PB1);

    //Set B2 as Input and initialize it to high
    DDRB = DDRB & ~(1<<PB2);
    PORTB = PORTB |  (1<<PB2);
}

void activity1_loop(){
        if( !(PINB & (1<<PB1)) && !(PINB & (1<<PB2)))
            PORTB = PORTB | (1<<PB0);
        else
            PORTB = PORTB & ~(1<<PB0);
}