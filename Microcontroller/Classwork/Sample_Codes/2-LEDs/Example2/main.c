/* Please use this file to use all architecture dependent contents like Port Informations, system specific header files etc. */
#include <xc.h>
#include "main.h"

static void init_config(void)
{
	ADCON1 = 0x0F;

	LED1 = OFF;
	
	TRISB = 0;
	RB0 = 1;
	
}

void main(void)
{
	unsigned short i;

	init_config();

	while (1)
	{
		LED1 = ON;
		for (i = 50000; i--; );

		LED1 = OFF;
		for (i = 50000; i--; );
	}
}
