#include "main.h"
#include "clcd.h"
#include "matrix_keypad.h"

void init_config(void)
{
	init_clcd();
	init_matrix_keypad();
}

void main()
{
	char ch, key;

	init_config();
	
	while (1)
	{
		key = read_switches(STATE_CHANGE);
		if (key == 1)
		{

			write_internal_eeprom(0x00, 'A');

			ch = read_internal_eeprom(0x00);

			clcd_putch(ch,LINE1(0));
		}

	}

	
	
}
