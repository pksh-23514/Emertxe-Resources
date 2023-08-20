#include "main.h"
#include "matrix_keypad.h"
#include "can.h"
#include "clcd.h"

/* delay 1ms function */
void delay(unsigned short factor)
{
	unsigned short i, j;

	for (i = 0; i < factor; i++)
	{
		for (j = 500; j--; );
	}
}

void init_config(void)
{
	/* Initialize Matrix Keypad */
	init_matrix_keypad();

	/* Initialize CLCD module */
	init_clcd();

	/* Initialize CAN module */
	init_can();

	/* Set buzzer as output */

	clcd_print("CAN Bus Demo", LINE1(2));
}

void can_demo(void)
{
	unsigned char key;
	unsigned char i = 0;

	key = read_switches(1);

	if (key == MK_SW1)
	{
		clcd_print("Tx DATA : -->   ", LINE2(0));
		can_transmit();
		delay(1000);
	}

	if (can_receive())
	{
		clcd_print("Rx DATA : <--", LINE2(0));

		i = 0;
		while (i != 8)
		{
			clcd_putch(can_payload[D0 + i], LINE2(14));
			i++;

			
			delay(500);
			
		}
	}
}

void main(void)
{    
	init_config();

	while (1)
	{
		can_demo();	
	}
}
