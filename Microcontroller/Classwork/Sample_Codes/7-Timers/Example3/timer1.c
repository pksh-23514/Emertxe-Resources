#include <xc.h>
#include "timer1.h"

void init_timer1 (void)
{
	/*
	 * Setting instruction cycle clock (Fosc / 4) as the source of
	 * timer0
	 */

	TMR1ON = 1;
	T1CONbits.RD16 = 1;
	TMR1 = 3036;
	TMR1IF = 0;		//Initially, Interrupt flag can contain any garbage value. So, reset it before enabling the Interrupt.
	TMR1IE = 1;
}
