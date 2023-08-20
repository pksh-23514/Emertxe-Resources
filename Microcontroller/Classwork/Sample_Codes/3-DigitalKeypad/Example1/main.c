#include <xc.h>
#include "main.h"
#include "digital_keypad.h"

void glow_on_press(unsigned char key)
{

	if (key == SWITCH2)
	{
		LED1 = !LED1;
	}
	else
	{
	}


/*	if (key == SWITCH1)
	{
		LED1 = ON;
	}
	else
	{
		LED1 = OFF;
	}
*/
}

static void init_config(void)
{
	ADCON1 = 0x0F;

	LED1 = OFF;
	TRISB0 = 0;

	init_digital_keypad();
}

void main(void)
{
	unsigned char key;
	unsigned short i;

	init_config();

	while (1)
	{
		key = read_digital_keypad(STATE_CHANGE);
		glow_on_press(key);
		//for (i = 25000; i--; );
		
	}
}










