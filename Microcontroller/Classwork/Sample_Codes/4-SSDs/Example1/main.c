#include <xc.h>
#include "main.h"
#include "ssd_display.h"

static unsigned char ssd[MAX_SSD_CNT];
static unsigned char digit[] = {ZERO, ONE,TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};
void init_config(void)
{
	init_ssd_control();
}

void main(void)
{
	init_config();
	unsigned short i;

	while(1)
	{
		ssd[3] = digit[0];
		ssd[2] = digit[1];
		ssd[1] = digit[2];
		ssd[0] = digit[3];
        
		display(ssd);
		//for (i = 1000; i--; );
	}
}
