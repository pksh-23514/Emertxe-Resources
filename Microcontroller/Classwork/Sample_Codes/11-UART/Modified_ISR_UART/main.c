#include "main.h"
#include <xc.h>
#include "uart.h"

unsigned char ch;

void init_config(void)
{
	init_uart();

	puts("Emertxe Information Technologies. Press any key to continue\n\r");
	getch();
	 /* Enabling peripheral interrupt */
   PEIE = 1;
    
    /* Enabling global interrupt */
   GIE = 1;
}

void main()
{
	char c;

	init_config();

	puts("Welcome. This is UART Test Code.\n\r");
	puts("You should get back whatever you type:\n\r");


	while (1)
	{
		if (ch != '\0')
        {
            putch(ch);
            
            ch = '\0';
        }
		
	}
}

