#include <xc.h>
#include "main.h"
#include "digital_keypad.h"


static void init_config(void)
{
	ADCON1 = 0x0F;

	LED1 = OFF;
	TRISB0 = 0;
	PORTB = OFF;
	TRISC = TRISC | INPUT_PINS;
}

void main(void)
{
	unsigned char key;
	unsigned short once,i;

	init_config();

	while (1)
	{
		if (RC0 == 0 && once == 1) 
                         {
                        //LED1 = 1;
						LED1 = !LED1;
                        once = 0;
                         }
		if (RC0==1)
			//LED1 = 0;
			once =1;
for (i = 1000; i--; );
        }
//for (i = 1000; i--; );

}
