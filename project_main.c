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
