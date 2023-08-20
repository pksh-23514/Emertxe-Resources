#include <xc.h>
#include "main.h"
#include "clcd.h"
#include "ds1307.h"
#include "i2c.h"

unsigned char clock_reg[3];
unsigned char calender_reg[4];
unsigned char time[9];
unsigned char date[11];

void display_date(void)
{
	clcd_print(date, LINE2(3));
}

void display_time(void)
{
	clcd_print(time, LINE2(2));

	if (clock_reg[0] & 0x40)
	{
		if (clock_reg[0] & 0x20)
		{
			clcd_print("PM", LINE2(12));
		}
		else
		{
			clcd_print("AM", LINE2(12));
		}
	}
}

static void get_time(void)
{
	clock_reg[0] = read_ds1307(HOUR_ADDR);
	clock_reg[1] = read_ds1307(MIN_ADDR);
	clock_reg[2] = read_ds1307(SEC_ADDR);

	if (clock_reg[0] & 0x40)
	{
		time[0] = '0' + ((clock_reg[0] >> 4) & 0x01);
		time[1] = '0' + (clock_reg[0] & 0x0F);
	}
	else
	{
		time[0] = '0' + ((clock_reg[0] >> 4) & 0x03);
		time[1] = '0' + (clock_reg[0] & 0x0F);
	}
	time[2] = ':';
	time[3] = '0' + ((clock_reg[1] >> 4) & 0x0F);
	time[4] = '0' + (clock_reg[1] & 0x0F);
	time[5] = ':';
	time[6] = '0' + ((clock_reg[2] >> 4) & 0x0F);
	time[7] = '0' + (clock_reg[2] & 0x0F);
	time[8] = '\0';
}

static void get_date(void)
{
	calender_reg[0] = read_ds1307(YEAR_ADDR);
	calender_reg[1] = read_ds1307(MONTH_ADDR);
	calender_reg[2] = read_ds1307(DATE_ADDR);
	calender_reg[3] = read_ds1307(DAY_ADDR);

	date[0] = '2';
	date[1] = '0';
	date[2] = '0' + ((calender_reg[0] >> 4) & 0x0F);
	date[3] = '0' + (calender_reg[0] & 0x0F);
	date[4] = '-';
	date[5] = '0' + ((calender_reg[1] >> 4) & 0x0F);
	date[6] = '0' + (calender_reg[1] & 0x0F);
	date[7] = '-';
	date[8] = '0' + ((calender_reg[2] >> 4) & 0x0F);
	date[9] = '0' + (calender_reg[2] & 0x0F);
	date[10] = '\0';
}

void init_config(void)
{
	init_clcd();
	init_i2c();
	init_ds1307();

	clcd_print("  DS1307  TEST  ", LINE1(0));
}

void main(void)
{
	init_config();

	while (1)
	{
#if 1
		get_time();
		display_time();
#else
		get_date();
		display_date();
#endif
	}
}
