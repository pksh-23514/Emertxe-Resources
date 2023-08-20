#include <xc.h>
#include "main.h"
#include "ssd_display.h"
#include "eeprom.h"

static unsigned char ssd[MAX_SSD_CNT];
static unsigned char digit[] = {ZERO, ONE,TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};
void init_config(void)
{
	init_ssd_control();
	write_internal_eeprom(0x00, 1);
	write_internal_eeprom(0x01, 2);
	write_internal_eeprom(0x02, 3);
	write_internal_eeprom(0x03, 4);
	 
}

void main(void)
{
	init_config();
	unsigned short i;

	while(1)
	{
		ssd[3] = digit[read_internal_eeprom(0x00)];
		ssd[2] = digit[read_internal_eeprom(0x01)];
		ssd[1] = digit[read_internal_eeprom(0x02)];
		ssd[0] = digit[read_internal_eeprom(0x03)];
        
		display(ssd);
		//for (i = 1000; i--; );
	}
}
