#include <xc.h>
#include "main.h"
#include "external_interrupt.h"
#include "isr.h"


 
 bit key_detected;

static void init_config(void)
{
	ADCON1 = 0x0F;

	TRISB6 = 0;
	TRISB0 = 1;

	init_external_interrupt();

	GIE = 1;


}

void main(void)
{
	unsigned short wait1;
	unsigned long int wait2;
	unsigned short once = 1;

	init_config();

	while (1)
	{
		
		if (key_detected)
		{
			key_detected = 0;
			RB6 = !RB6 ;
		}
;
	}
}







