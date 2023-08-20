#include <xc.h>
#include "main.h"

#define PERIOD			1000

static void init_config(void)
{
	ADCON1 = 0x0F;

	TRISB2 = 0;
}

void main(void)
{
	unsigned long i, j, a = 500;

	init_config();

	while (1)
	{
		RB2= 1; /* CP is Clock Pin */
		for(i = a; i--; );
		RB2 = 0; /* CP is Clock Pin */
		for(i = PERIOD - a; i--; );
		
		if (RC0 == 0)
		{
			if (a != 1000)
			{
				a++;
			}
		}
		if (RC1 == 0)
		{
			if (a != 0)
			{
				a--;
			}
		}

//		for(j = 50000; j--;);
	}

}
