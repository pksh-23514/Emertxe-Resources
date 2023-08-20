#include <stdio.h>

int main()
{
	int num;
	printf ("Enter the number whose Prime Factors needs to be printed: ");
	scanf ("%d", &num);

	printf ("Prime Factors of %d are: ", num);
	if (num == 1)
		printf ("1\n");
	else
	{
		for (int i = 2; (i*i) <= num; i++)
		{
			while (num % i == 0)
			{
				printf ("%d ", i);
				num = num / i;
			}
		}

		if (num > 1)
			printf ("%d ", num);
	}
	printf ("\n");

	return 0;
}
