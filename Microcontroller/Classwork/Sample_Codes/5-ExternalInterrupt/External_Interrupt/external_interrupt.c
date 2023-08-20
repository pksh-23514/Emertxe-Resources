#include <xc.h>
#include "external_interrupt.h"

void init_external_interrupt(void)
{       //selecting the edge
	INTEDG0 = 1;
	//clear interrut flag
	INT0F = 0;
	//enable external interrut
	INT0E = 1;
}
