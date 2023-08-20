#include "main.h"
#include "adc.h"
#include <xc.h>

void glow_led(unsigned short adc_reg_val)
{
    if (adc_reg_val > 512)
    {
        LED1 = ON;
    }
    else
    {
        LED1 = OFF;
    }
}

static void init_config(void)
{
	LED1 = OFF;

	TRISB0 = 0;

    init_adc();
}

void main(void)
{
    unsigned short adc_reg_val;

    init_config();

    while (1)
    {
        adc_reg_val = read_adc(CHANNEL4);
        glow_led(adc_reg_val);
    }
}














