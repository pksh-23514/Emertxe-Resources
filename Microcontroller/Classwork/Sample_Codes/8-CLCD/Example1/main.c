#include <xc.h>
#include "clcd.h"

static void init_config(void)
{
    init_clcd();
  
}

void main(void)
{
    init_config();
	char str [] = "Hello World_____";
	unsigned long int wait = 150000;
    while (1)
    {
		if (wait-- == 0)
		{
			int key = str [15];
			for (int i = 15; i > 0; i--)
			{
				str [i] = str [i-1];
			}
			str [0] = key;
			clcd_print(str, LINE1(0)); 
			wait = 150000;
		}
	}
}
