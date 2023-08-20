#include <xc.h>
#include "timer2.h"

void init_timer2 (void)
{
	/*
	 * Setting instruction cycle clock (Fosc / 4) as the source of
	 * timer0
	 */

	TMR2ON = 1;
	PR2 = 250;
	TMR2IF = 0;
	TMR2IE = 1;
}
