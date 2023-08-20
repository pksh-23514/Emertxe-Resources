/*
Name         : Prabhat Kiran
Date         : 5th Januatry 2022
Description  : WAP to find the missing element from the Array in the range [1, N].
Sample Input : 1 2 3 4 and [1, 5]
Sample Output: 5
*/

#include <stdio.h>

int main()
{
	int n;
	printf ("Enter the Upper Limit of the Range: ");
	scanf ("%d", &n);

	int a [n];
	printf ("Enter the Array Elements:\n");
	for (int i = 0; i < (n - 1); i++)
		scanf ("%d", &a [i]);

	int sum = 0, sum_a = 0;

	for (int i = 0; i < n; i++)
	{
		sum += (i + 1);			//Sum of the Natural Numbers from 1 to N.
		
		if (i < (n - 1))
			sum_a += a [i];		//Sum of the Array Elements.
	}

	/* Missing Element from the Array is the Difference between the Sums */
	printf ("The Missing number from the Range 1 to %d is = %d\n", n, (sum - sum_a));

	return 0;
}
