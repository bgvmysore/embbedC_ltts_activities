#include<avr/io.h>
#include<util/delay.h>

// pins used are: 
// B0 as output and initalized to 0
// B1 as Input and initialize it to high
// B2 as Input and initialize it to high
#include "activity1.h"

// pins used are:
// AC0 used as analog input for temperature set control
#include "tempSet.h"

int main(void)
{
	uint16_t adcData = 0;
	activity1_init();
	initADC();
	
	while(1){
		activity1_loop();
		adcData = readADC0();
	}
	
	return 0;
}
