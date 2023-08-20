#include <stdio.h>

int main()
{
	int num;
	printf ("Enter the number to be checked for the Power of 2: ");
	scanf ("%d", &num);

	if ((num != 0) && ((num & (num - 1)) == 0))					//If 'num' is entered as '0'; the condition (num & (num - 1)) will be True although '0' is not a power of 2. So, (num != 0) is given.
	{
		printf ("The number %d is a Power of 2.\n", num);
	}
	else
	{
		printf ("The number is %d not a Power of 2.\n", num);
	}

	return 0;
}
