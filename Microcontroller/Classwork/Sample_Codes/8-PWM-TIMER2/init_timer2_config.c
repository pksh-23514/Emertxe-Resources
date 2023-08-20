#include "main.h"

void init_timer2_config(void)
{
	//T2OUTPS3:T2OUTPS0: Timer2 Output Postscale Select bits
	//Select 1:1 post scalar value
	T2OUTPS3 = 0;
	T2OUTPS2 = 0;
	T2OUTPS1 = 0;
	T2OUTPS0 = 0;

	//TMR2ON: Timer2 On bit
	//Switch on the timer2
	TMR2ON = 1;

	//T2CKPS1:T2CKPS0: Timer2 Clock Prescale Select bits
	//Select the prescalar value as 1:16(Max)
	T2CKPS1 = 1;
	T2CKPS0 = 0; //Don't care

	//Value is calculated for the following data
	//XTAL freq		20MHz
	//PWM freq		2.5KHz
	//Duty Cycle	50%
	//Formula: (Fosc / (Fpwm * 4 * N)) - 1, where N is the prescalar value
	PR2 = 124;

	//Clear the timer2
	TMR2 = 0;
}
