#include <xc.h>
#include "main.h"

#define PERIOD			100

static void init_config(void)
{
	ADCON1 = 0x0F;

	PORTB=0;
	TRISB = 0;
	RB1 = 1;

}

void main(void)
{
	unsigned long i, j = 0, a = 50;

	init_config();

	while (1)
	{
		RB0= 1; /* CP is Clock Pin */
		for(i = 1000; i--; );
		RB0 = 0; /* CP is Clock Pin */
		for(i = 100; i--; );




	}

}
