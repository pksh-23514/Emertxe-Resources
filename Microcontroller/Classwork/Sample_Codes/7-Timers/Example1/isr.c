#include <xc.h>
#include "main.h"

void interrupt isr(void)
{
	static unsigned short count;
     
	if (TMR0IF)
	{
		//	LED1 = 1;

		TMR0 = TMR0 + 8;

		if (count++ == 5000)
		{
			count = 0;
			LED1 = !LED1;
		}
		TMR0IF = 0;
	}
}
