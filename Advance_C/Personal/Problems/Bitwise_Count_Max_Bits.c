#include <stdio.h>

int main()
{
	int num, i;
	printf ("Enter the Number to be checked for the Position of the Highest Bit: ");
	scanf ("%d", &num);

	if (num == 0)						//If the given Number is '0'; only one Bit is enough to store the Number.
	{
		i = 1;
	}
	else if (num < 0)					//If the given Number is Negative; all the Bits are required to store the Number (as MSB will be 1 for Negative Numbers).
	{
		i = 31;
	}
	else								//If the given Number is Non-zero; then it shall require one or more than one Bit to store the Number.
	{
		for (i = 31; i >= 0; i--)		//Start searching from the MSB side for the set Bit.
		{
			if (num & (1 << i))
				break;
		}

	}
	printf ("The number %X in Binary representation will require %d Bits.\n", num, (i + 1));

	return 0;
}
