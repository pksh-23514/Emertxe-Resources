#include <xc.h>
#include "main.h"

static void init_config(void)
{
	ADCON1 = 0x0F;
	TRISB = 0x00;
}

void main(void)
{
	unsigned long i;
	unsigned long j;

	init_config();

	while (1)
	{

		LED_ARRAY = 0xF0;
		for ( i = 50000; i--;);
		LED_ARRAY = 0x0F;
		for (i = 50000; i--; );

	}
}
