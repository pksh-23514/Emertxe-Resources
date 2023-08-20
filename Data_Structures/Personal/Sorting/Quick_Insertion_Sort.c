/*
Name         : Prabhat Kiran
Date         : 6th November 2022
Description  : Implementation of Modified Quick Sort Technique.
Explanation  : For Divide and Conquer Sorting Algorithms; instead of Recursing until only a Single element is left in the Array,
               it is better to shift to Insertion-Sort when a certain threshold (say 10 elements), is reached.
*/

#include <stdio.h>
#include <stdlib.h>

void insertion_sort (int*, int, int);
void quick_sort (int*, int, int);
int find_partition (int*, int, int);

void insertion_sort (int* arr, int low, int high)
{
	printf ("INFO: Insertion Sort Implemented for better Efficiency.\n");
	printf ("INFO: Size of the Array is: %d\n", (high - low + 1));
	for (int i = (low + 1); i <= high; i++)			//To start the Key selection from the 2nd element of the Array till the end of the Array.
	{
		int key = arr [i];							//Update the 'key' with the second element of the Array.
		int j = i - 1;								//Start the comparision of the Elements in the Array with the Key from 'i-1' index of the Array.
		while ((j >= 0) && (arr [j] > key))			//The loop shall run till the Elements of the Array are greater than the Key and the Index has not reached the Beginning of the Array.
		{
			arr [j + 1] = arr [j];					//Shift the Array elements to the Right by '1' position.
			j -= 1;									//Decrease the Array index to the Left.
		}

		arr [j + 1] = key;							//The Index where the loop terminates; update the Array position with the Key as it is the Correct Position of the Key.
	}
}

void quick_sort (int* arr, int first, int last)
{
	if (first >= last)					//If the 'first' position is greater than the 'last' position; the function shall start returning.
		return;
	else
	{
		if ((last - first) > 10)		//If the Size of the Array received is greater than 10; sort the Array using Quick Sort technique.
		{
			printf ("INFO: Quick Sort Implemented for Larger Array Size.\n");
			printf ("INFO: Size of the Array is: %d\n", (last - first + 1));
			int partition = find_partition (arr, first, last);		//To store the Partition Index returned by the function call.
			quick_sort (arr, first, partition);						//Call the Quick Sort for the Left side of the Partition index.
			quick_sort (arr, (partition + 1), last);				//Call the Quick Sort for the Right side of the Partition index.
		}
		else							//If the Size of the Array received is less than 10; sort the Array using Insertion Sort technique.
		{
			insertion_sort (arr, first, last);
			return;
		}
	}
}

int find_partition (int* arr, int low, int high)
{
	int pivot = arr [low];				//Update the Pivot element as the First index Element of the Array.
	// Mark 2 indices to start from the Opposite ends of the Array and moving towards each other.
	int i = low - 1;
	int j = high + 1;

	while (1)							//The loop shall run till the Lower index becomes equal or crosses the Higher index.
	{
		do
		{
			i += 1;
		} while (arr [i] < pivot);		//To find a value on the Left side of the Pivot and having a value greater than the Pivot element.
		do
		{
			j -= 1;
		} while (arr [j] > pivot);		//To find a value on the Right side of the Pivot and having a value smaller than the Pivot element.
		if (i >= j)
			return j;					//Return the 'j' value to the Calling function as the Partition Index on crossover.
		int temp = arr [i];				//Swap the Elements of 'i' and 'j' Index.
		arr [i] = arr [j];
		arr [j] = temp;
	}
}

int main()
{
	int arr [] = {24, 97, 40, 67, 88, 85, 15, 66, 53, 0, 44, 26, 48, 16, 52, 45, 2, 23, 90, 18, 49, 80, 23, 35, 5};
	int len = sizeof (arr) / sizeof (int);
	printf ("The Size of the Array is: %d\n", len);

	printf ("Unsorted Array: ");
	for (int i = 0; i < len; i++)
		printf ("%d ", arr [i]);
	printf ("\n");
#if 0
	insertion_sort (arr, 0, (len - 1));
#endif
#if 1
	quick_sort (arr, 0, (len - 1));
#endif
	printf ("Sorted Array:   ");
	for (int i = 0; i < len; i++)
		printf ("%d ", arr [i]);
	printf ("\n");

	return 0;
}
