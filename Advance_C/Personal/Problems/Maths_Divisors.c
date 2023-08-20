#include <stdio.h>

int main()
{
	int num;
	printf ("Enter the number whose Divisors need to be printed: ");
	scanf ("%d", &num);

	int i = 1;
	printf ("Divisors of %d are: ", num);

	for (; (i * i) < num; i++)		//Print all the Divisors from '1' to {Root of 'num'}.
	{
		if (num % i == 0)
			printf ("%d ", i);
	}

	for (; i >= 1; i--)				//Print all the Divisors from {Root of 'num'} to 'num'.
	{
		if (num % i == 0)
			printf ("%d ", (num / i));
	}
	printf ("\n");

	return 0;
}
