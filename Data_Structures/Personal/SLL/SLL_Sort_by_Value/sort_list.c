/*
Name         : Prabhat Kiran
Date         : 01st October 2022
Description  : Sort the given SLL.
Sample Input : 50 → 40 → 30 → 20 → 10
Cases :
1. List Empty
2. List Non-Empty
Sample Output: 10 → 20 → 30 → 40 → 50
*/

#include "sll.h"

void swap (int* num1, int* num2)	//To Swap the 2 numbers passed in the function call.
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int sl_sort (Slist **head)
{
	if (*head == NULL)		//If the LL is empty, the Sorting operation cannot be performed.
		return LIST_EMPTY;

	/* Bubble Sort Algorithm implemented */
	Slist* ptr1 = *head;
	while (ptr1->link != NULL)		//Traverse till the Last node of the LL is reached. The outer loop represents the number of swaps that are done.
	{
		Slist* ptr2 = *head;
		while (ptr2->link != NULL)	//Traverse till the Last node of the LL is reached. The inner loop is used to do the comparisions.
		{
			if (ptr2->data > ptr2->link->data)	//Compare the Adjacent node data.
			{
				swap (&(ptr2->data), &(ptr2->link->data));
			}
			ptr2 = ptr2->link;	//Update the 'ptr2' to point to the Next node.
		}
		/* At the end of each iteration of the inner loop, the largest element reaches the correct position. */

		ptr1 = ptr1->link;		//Update the 'ptr1' to point to the Next node.
	}

	return SUCCESS;
}
