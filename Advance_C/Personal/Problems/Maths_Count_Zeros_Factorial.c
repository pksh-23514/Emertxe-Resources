/*The number of Trailing zeros in a Factorial is floor(n/5) + floor(n/25) + floor(n/125) + ....*/

#include <stdio.h>

int main()
{
	int num;
	printf ("Enter the number whose Factorial needs to be calculated: ");
	scanf ("%d", &num);

	int i = 5, count = 0;
	while ((num / i) >= 1)
	{
		count = count + (num / i);
		i = i * 5;
	}

	printf ("Number of Trailing Zeros in the Factorial of %d are: %d\n", num, count);

	return 0;
}
