#include <xc.h>
#include "timer1.h"
#include "main.h"

void init_config(void)
{
	/* Clear old content */
	PORTB = 0x00;

	/* Set PORTB as a Output */
	TRISB = 0x00;

	/* Config PORTB as digital */
	ADCON1 = 0x0F;

	init_timer1 ();

	GIE = 1;	//Always in the main.c at the end of init_config().
	PEIE = 1;	//Always in the main.c at the end of init_config().
}

void main(void)
{
	init_config();
//    RB1 = 1;
	while (1)
	{
		;
	}
}
