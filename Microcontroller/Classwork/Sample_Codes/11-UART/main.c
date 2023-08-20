#include <xc.h>
#include "main.h"
#include "uart.h"

void init_config(void)
{
	init_uart();

	puts("Emertxe Information Technologies. Press any key to continue\n\r");
	getch();
}

void main()
{
	char c;

	init_config();

	puts("Welcome. This is UART Test Code.\n\r");
	puts("You should get back whatever you type:\n\r");

	while (1)
	{
		getche();
	}
}
