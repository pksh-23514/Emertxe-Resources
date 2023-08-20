/*
Name         : Prabhat Kiran
Date         : 8th December 2022
Description  : Check for the Highest Set Bit (HSB) in the Number and Replicate the Bit in all the Bits after the Highest Set Bit.
Sample Input : 12 (0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0) {The 4th Bit is the HSB and it shall be replicated in all the Bits after it.}
Sample Output: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1
*/

#include <stdio.h>

void print_bits (unsigned int n)
{
	int i = 31;
	while (i >= 0)
	{
		if (n & (1 << i))
			printf ("1");
		else
			printf ("0");
		i--;
	}
	printf ("\n");
}

int calculate_HSB (unsigned int n)
{
	int i = 31;
	while (i >= 0)
	{
		if (n & (1 << i))
			return i;
		i--;
	}

	return 0;
}

int main()
{
	int num;
	printf ("Enter the Number whose HSB shall be Replicated: ");
	scanf ("%d", &num);

	unsigned int res = 0;

	printf ("Original Number: ");
	print_bits ((unsigned int) num);

	if (num >= 0)
	{
		int count = calculate_HSB ((unsigned int) num);

		if ((count > 0) && (count < 31))
			res = ((1 << (count + 1)) - 1);
		else
			res = 0;
	}
	else
		res = 0xFFFFFFFF;

	printf ("Result Number:   ");
	print_bits (res);

	return 0;
}
