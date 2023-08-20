#include <xc.h>
#include "main.h"

void interrupt isr(void)
{
	static unsigned short count;
     
	if (TMR1IF)
	{
		TMR1 = TMR1 + 3038;

		if (count++ == 80)
		{
			count = 0;
			LED1 = !LED1;
		}
		TMR1IF = 0;
	}
}
