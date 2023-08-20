/*
Name         : Prabhat Kiran
Date         : 27th December 2022
Description  : WAP to find the First Duplicate element in the given Array.
Sample Input : 2 1 5 2 3 3 4
Sample Output: 2
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

	int set [n], count = 0;		//To store the Elements for checking Repititions.

	for (int i = 0; i < n; i++)		//The loop shall run till the end of the Original Array.
	{
		for (int j = 0; j < count; j++)		//The loop shall run till the end of the Repitition check Array.
		{
			if (set [j] == a [i])	//The First element which shall be found as Repititive is the Output.
			{
				printf ("The First Duplicate Element is = %d\n", a [j]);
				return 0;
			}
		}

		set [count++] = a [i];	//To insert the Elements of the Original Array into Repitition check Array one by one.
	}

	/* If no Duplicates are found in the Original Array, both the Arrays shall become identical */
	if (count == n)
		printf ("No Duplicate Elements exists in the given Array.\n");

	return 0;
}
