#include <xc.h>
#include "timer0.h"

void init_timer0 (void)
{
	/*
	 * Setting instruction cycle clock (Fosc / 4) as the source of
	 * timer0
	 */

	T08BIT = 1;
	T0CS = 0;
	PSA = 0;
	TMR0 = 6;
	TMR0IE = 1;
	TMR0IF = 0;
	T0PS2 = 0;
	T0PS1 = 0;
	T0PS0 = 1;
}
