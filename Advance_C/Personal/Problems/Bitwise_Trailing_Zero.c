#include <stdio.h>

int main()
{
	int num, count = 0;
	printf ("Enter the Number whose Number of Trailing Zeros in the Binary representation need to be checked: ");
	scanf ("%d", &num);

	if (num == 0)
	{
		count = 0;
	}
	else
	{
		for (int i = 0; i < 31; i++)
		{
			if (num & (1 << i))
				break;
			else
				count += 1;
		}
	}
	printf ("The Number of Trailing Zeros in the Binary representation of the Number %X is: %d\n", num, count);

	return 0;
}
