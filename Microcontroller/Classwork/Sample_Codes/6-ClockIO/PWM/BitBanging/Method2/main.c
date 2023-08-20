#include <xc.h>
#include "main.h"
#include "digital_keypad.h"

#define PERIOD			100

void software_pwm(void)
{
	unsigned char key;
	static unsigned short wait = 0;
	static unsigned char prog_cycle;
	static unsigned char duty_change = 50;

	key = read_digital_keypad(LEVEL);

	if (!wait--)		//Delay is for the increase and decrease of the Duty Cycle. Otherwise, it will be like ON & OFF of the LED as soon as the switch is pressed.
	{
		wait = 100;

		if (key == SWITCH1)
		{
			if (duty_change != PERIOD)
			{
				duty_change++;
			}
		}
		if (key == SWITCH2)
		{
			if (duty_change != 0)
			{
				duty_change--;
			}
		}
	}

	if (prog_cycle < duty_change)
	{
	//	LED1 = ON;
	    RB0 = ON;
	}
	else
	{
		RB0 = OFF;
	}

	if (prog_cycle++ == PERIOD)
	{
		prog_cycle = 0;
	}
}

static void init_config(void)
{
	ADCON1 = 0x0F;

	RB0 = OFF;
	TRISB = 0;

	init_digital_keypad();
}

void main(void)
{
	init_config();

	while (1)
	{
		software_pwm();
	}
}
