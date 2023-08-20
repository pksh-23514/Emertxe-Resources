#include <stdio.h>

int main()
{
	volatile unsigned int i; /* Try without and with volatile qualifier */
	int num;

	for (i = 0; i < 0xFFFFFFFF; i++)
	{
		num = 5;
	}

	printf("%d\n", num); 

	return 0;
}
