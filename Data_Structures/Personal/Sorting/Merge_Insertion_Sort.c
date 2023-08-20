/*
Name         : Prabhat Kiran
Date         : 31st October 2022
Description  : Implementation of Modified Merge Sort Technique.
Explanation  : For Divide and Conquer Sorting Algorithms; instead of Recursing until only a Single element is left in the Array, 
               it is better to shift to Insertion-Sort when a certain threshold (say 10 elements), is reached.
*/

#include <stdio.h>
#include <stdlib.h>

void insertion_sort (int*, int);
int merge_sort (int*, int);
void merge (int*, int, int*, int, int*, int);

void insertion_sort (int* arr, int size)
{
	printf ("INFO: Insertion Sort Implemented for better Efficiency.\n");
	printf ("INFO: Size of the Array is: %d\n", size);
	for (int i = 1; i < size; i++)			//To start the Key selection from the 2nd element of the Array till the end of the Array.
	{
		int key = arr [i];					//Update the 'key' with the second element of the Array.
		int j = i - 1;						//Start the comparision of the Elements in the Array with the Key from 'i-1' index of the Array.
		while (j >= 0 && arr [j] > key)		//The loop shall run till the Elements of the Array are greater than the Key and the Index has not reached the Beginning of the Array.
		{
			arr [j + 1] = arr [j];			//Shift the Array elements to the Right by '1' position.
			j -= 1;							//Decrease the Array index to the Left.
		}

		arr [j + 1] = key;					//The Index where the loop terminates; update the Array position with the Key as it is the Correct Position of the Key.
	}
}

int merge_sort (int* arr, int size)
{
	int ret;
	if (size <= 10)							//If the Size of the Array received is less than 10; sort the Array using Insertion Sort technique.
	{
		insertion_sort (arr, size);
	}
	else									//Otherwise, use the Divide and Conquer technique to break the Array into smaller Sub-Arrays and recursively call the Merge Sort technique.
	{
		printf ("INFO: Merge Sort Implemented for Larger Array Size.\n");
		printf ("INFO: Size of the Array is: %d\n", size);
		int mid = size / 2;									//To Divide the given Array into 2 Halves.
		
		int* left = (int*) malloc (mid * sizeof (int));
		if (left == NULL)									//If the memory is not allocated to the Left Sub-Array; the operation shall be terminated.
			return -1;
		for (int i = 0; i < mid; i++)						//Copy the First Half of the Array elements into the Left Sub-Array.
		{
			left [i] = arr [i];
		}

		int* right = (int*) malloc ((size - mid) * sizeof (int));
		if (right == NULL)									//If the memory is not allocated to the Right Sub-Array; the operation shall be terminated.
			return -1;
		for (int i = mid; i < size; i++)					//Copy the Second Half of the Array elements into the Right Sub-Array.
		{
			right [i - mid] = arr [i];
		}

		ret = merge_sort (left, mid);						//Call the Merge Sort for the Left Sub-Array.
		ret = merge_sort (right, (size - mid));				//Call the Merge Sort for the Right Sub-Array.

		merge (arr, size, left, mid, right, (size - mid));	//Call the Merge function to combine the Sorted Left and Right Sub-Arrays to form the Original Array.
		free (left);										//Deallocate the memory for Left Sub-Array.
		free (right);										//Deallocate the memory for Right Sub-Array.
	}

	return 0;												//Return Success.
}

void merge (int* arr, int size, int* left, int len1, int* right, int len2)
{
	int i = 0, j = 0, k = 0;				//Initialize the Indices for the Left Sub-Array, Right Sub-Array and the main Array.

	while ((i < len1) && (j < len2))		//The loop shall run till either 'i' or 'j' reaches the end of their respective arrays.
	{
		if (left [i] < right [j])			//If the Left Sub-Array element is smaller than the Right Sub-Array element, push the Left Sub-Array element into the Main Array.
			arr [k++] = left [i++];
		else								//Otherwise, push the Right Sub-Array element into the Main Array.
			arr [k++] = right [j++];
	}

	while (i < len1)						//Copy the remaining Left Sub-Array elements into the Main Array.
		arr [k++] = left [i++];

	while (j < len2)						//Copy the remaining Right Sub-Array elements into the Main Array.
		arr [k++] = right [j++];
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
	insertion_sort (arr, len);
#endif
#if 1
	int ret = merge_sort (arr, len);
#endif
	printf ("Sorted Array:   ");
	for (int i = 0; i < len; i++)
		printf ("%d ", arr [i]);
	printf ("\n");

	return 0;
}
