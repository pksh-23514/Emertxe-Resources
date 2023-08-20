#include <xc.h>
#include "main.h"

void interrupt isr(void)
{
	static unsigned short count;
     
	if (TMR2IF)
	{
		//	LED1 = 1;

		if (count++ == 20000)
		{
			count = 0;
			LED1 = !LED1;
		}
		TMR2IF = 0;
	}
}
