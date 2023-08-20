#include <stdio.h>

int main()
{
	int num, i;
	printf ("Enter the Number to be checked for the Position of the Highest Bit: ");
	scanf ("%d", &num);

	if (num == 0)												//If the given Number is '0'; all the Bits in the Binary representation shall be 0.
	{
		printf ("No Bit is set in the Number %X\n", num);
	}
	else														//If the given Number is Non-zero; then it will definitely contain at least '1' set Bit in the Binary representation.
	{
		for (i = 31; i >= 0; i--)								//Start searching from the MSB side for the set Bit.
		{
			if (num & (1 << i))
				break;
		}

	}
	printf ("The Highest Bit set for the number %X in Binary representation is: %d\n", num, i);

	return 0;
}
