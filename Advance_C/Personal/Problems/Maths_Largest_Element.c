/* To find the Largest Number from the given series of Numbers without storing them in an Array.
 */

#include <stdio.h>

int main()
{
	int count;
	printf ("Enter the number of Elements: ");
	scanf ("%d", &count);

	printf ("Enter the Elements:\n");
	int max, num;

	for (int i = 0; i < count; i++)
	{
		scanf ("%d", &num);

		if (i == 0)
		{
			max = num;
		}
		else
		{
			if (max < num)
				max = num;
		}
	}

	printf ("The Largest number among the Elements entered is: %d\n", max);

	return 0;
}
