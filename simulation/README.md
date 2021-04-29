# Project In Action

![inaction](ProjectInAction.gif)

## Code 

### project_main.c

``` C
#include<avr/io.h>

//pins used are: 
//B0 as output and initalized to 0
//B1 as Input and initialize it to high
//B2 as Input and initialize it to high
#include "activity1.h"

int main(void)
{
	activity1_init();
	
	while(1){
		activity1_loop();
	}
	return 0;
}
```

### activity1.c

``` C
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
```