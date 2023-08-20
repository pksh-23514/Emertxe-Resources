#include <xc.h>
#include "main.h"
#include "digital_keypad.h"


static void init_config(void)
{
	ADCON1 = 0x0F;

	LED1 = OFF;
	TRISB0 = 0;

	TRISC = TRISC | INPUT_PINS;
}

void main(void)
{
	unsigned char key;
	unsigned short once,i;

	init_config();

	while (1)
	{
		if (RC0 == 0 && once ) 
                         {
                        LED1= !LED1;
                        once = 0;
                         }

                if (RC0==1)
                        once =1;
for (i = 500; i--; );
        }
for (i = 1000; i--; );

}










