#include <stdio.h>

int main()
{
	char hex [16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	int num;
	printf ("Enter the Number to be converted from Decimal to Hexadecimal format: ");
	scanf ("%d", &num);
	printf ("Expected Hexadecimal value is: %X\n", num);

	unsigned int orig = num;
	int rem, i = 0;
	char n [10], temp;
	
	while (orig != 0)
	{
		rem = orig % 16;
		n [i++] = hex [rem];
		orig = orig / 16;
	}

	n [i] = '\0';
	for (int j = 0; j < (i / 2); j++)
	{
		temp = n [j];
		n [j] = n [i - j - 1];
		n [i - j - 1] = temp;
	}

	printf ("The Number in Hexadecimal is:  %s\n", n);

	return 0;
}
