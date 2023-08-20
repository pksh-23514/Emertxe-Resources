#if 0
#include <stdio.h>

/* Factorial of 3 numbers */

int factorial(int number)
{
	if (number <= 1) /* Base Case */
	{
		return 1;
	}
	else /* Recursive Case */
	{
		return number * factorial(number - 1);
	}
}

int main()
{
	int ret;

	ret = factorial(3);
	printf("Factorial of 3 is %d\n", ret);

	return 0;
}
#endif
#if 1
#include <stdio.h>


int sum_n_natural(int number)
{
	if (number <= 1) /* Base Case */
	{
		return 1;
	}
	else /* Recursive Case */
	{
		return number + sum_n_natural(number - 1);
	}
}

int main()
{
	int ret;

	ret = sum_n_natural(6);
	printf("sum of first 6 number is %d\n", ret);

	return 0;
}
#endif

