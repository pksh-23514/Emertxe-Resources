#include <stdio.h>

int main()
{
	int num1;
	volatile int num2 = 1; /* Try without and with volatile qualifier */

	num1 = ++num2 + num2++ + num2++ + num2++;
	printf("%d\n", num1);

	return 0;
}
