/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Print the complete SLL.
Sample Input : Nil
Sample Output: head → 10 → 20 → 30 → 40 → 50 → NULL
*/

#include "sll.h"

void print_list (Slist *head)
{
	if (head == NULL)				//If the LL is empty, the Print operation cannot be performed.
	{
		printf("INFO : List is empty\n");
	}
	else
	{
		while (head)				//Traverse till the end of LL and print the data of each node one by one.
		{
			printf("%d -> ", head->data);
			head = head->link;		//Update the 'head' to the next node.
		}
		
		printf("NULL\n");
	}
}
