#include "main.h"
#include "matrix_keypad.h"
#include "can.h"
#include "clcd.h"
#include "i2c.h"
#include "ds1307.h"

unsigned char clock_reg[3];
unsigned char time[9];

void create_payload(unsigned char can_payload[])
{
	can_payload[EIDH] = 0x00;
	can_payload[EIDL] = 0x00;
	can_payload[SIDH] = 0x6B;
	can_payload[SIDL] = 0xC0;
	can_payload[DLC] = 0x03;
	can_payload[D0] = clock_reg[0];
	can_payload[D1] = clock_reg[1];
	can_payload[D2] = clock_reg[2];
	can_payload[D3] = '\0';
	can_payload[D4] = '\0';
	can_payload[D5] = '\0';
	can_payload[D6] = '\0';
	can_payload[D7] = '\0';
}

static void get_time(void)
{
	clock_reg[0] = read_ds1307(HOUR_ADDR);
	clock_reg[1] = read_ds1307(MIN_ADDR);
	clock_reg[2] = read_ds1307(SEC_ADDR);
}

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

	init_i2c();
	init_ds1307();

	
	clcd_print("CAN Bus Demo", LINE1(2));
}

void display_time(void)
{
	clcd_print(time, LINE2(2));

	if (can_payload[D0] & 0x40)
	{
		if (can_payload[D0] & 0x20)
		{
			clcd_print("PM", LINE2(12));
		}
		else
		{
			clcd_print("AM", LINE2(12));
		}
	}
}

void can_demo(void)
{
	unsigned char key;
	unsigned char i = 0;
	unsigned char local_can_payload[13];

	key = read_switches(1);

	if (key == MK_SW1)
	{
		get_time();
		create_payload(local_can_payload);
		can_transmit(local_can_payload);
		clcd_print("Tx DATA : -->   ", LINE2(0));
		delay(1000);
		CLEAR_DISP_SCREEN;
	}

	if (can_receive())
	{
		if (can_payload[0] & 0x40)
		{
			time[0] = '0' + ((can_payload[0] >> 4) & 0x01);
			time[1] = '0' + (can_payload[0] & 0x0F);
		}
		else
		{
			time[0] = '0' + ((can_payload[0] >> 4) & 0x03);
			time[1] = '0' + (can_payload[0] & 0x0F);
		}
		time[2] = ':';
		time[3] = '0' + ((can_payload[1] >> 4) & 0x0F);
		time[4] = '0' + (can_payload[1] & 0x0F);
		time[5] = ':';
		time[6] = '0' + ((can_payload[2] >> 4) & 0x0F);
		time[7] = '0' + (can_payload[2] & 0x0F);
		time[8] = '\0';

		display_time();
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
