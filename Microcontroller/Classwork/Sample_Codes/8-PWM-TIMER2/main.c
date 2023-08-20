/**********************************************************************
Problem Statement:
Generate 50% duty cycle using Timer2 and CCP module, for the given data
XTAL freq: 20MHz
PWM freq : 2.5KHz
************************************************************************/
#include "main.h"

void init_config(void)
{
	init_CCP_config();
	init_timer2_config();
}

void main(void)
{
	init_config();

	while (1)
	{
		;
	}
}
