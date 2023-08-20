/*
Name         : Prabhat Kiran
Date         : 27th December 2022
Description  : WAP to find if the given Array is Monotonic (i.e. Strictly increasing or Strictly decreasing) or Non-Monotonic.
Sample Input : [-1 -5 -10 -1100 -1101 -1101 -1102 -9001]
Sample Output: Monotonic
*/

#include <stdio.h>

int main()
{
	int n;
	printf ("Enter the Number of Elements in the Array: ");
	scanf ("%d", &n);

	int a [n];
	printf ("Enter the Elements of the Array:\n");
	for (int i = 0; i < n; i++)
		scanf ("%d", &a [i]);

	/* To count the Number of Elements that are Increasing or Decreasing order */
	int up = 0, down = 0;

	for (int i = 1; i < n; i++)		//The loop shall run till the end of the Array.
	{
		if (a [i] >= a [i-1])	//If the Current element is greater than or equal Previous element, increasing order is present.
			up += 1;
		if (a [i] <= a [i-1])	//If the Current element is lesser than or equal Previous element, decreasing order is present.
			down += 1;
	}

	/* If the Array is Monotonic, the Increasing or Decreasing order pattern shall be equal to 'n-1' as 2 elements are compared at a time */
	if ((up == (n-1)) || (down == (n-1)))
		printf ("Monotonic Array.\n");
	else
		printf ("Non-Monotonic Array.\n");

	return 0;
}
