/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Insert the Last node of the SLL.
Sample Input : head → 10 → 20 → 30 → 40 → NULL and "50"
Cases:
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty → Update the head with next node address, delete the first node.
Sample Output: head → 10 → 20 → 30 → 40 → 50 → NULL
*/

#include "sll.h"

int insert_at_last (Slist **head, data_t data)
{
	/* Create a New node */
	Slist *new = malloc (sizeof(Slist));
	if (!new)
	{
		return FAILURE;
	}

	/* If the New node is created, update data & link */
	new->data = data;
	new->link = NULL;

	/* If the LL is empty */
	if (*head == NULL)
	{
		/* Add the New node to the First position of LL */
		*head = new;
		return SUCCESS;
	}

	/* Initialize the 'temp' to point to the First node */
	Slist *temp = *head;

	/* Traverse to the Next node and check if the Next node is present or not */
	while (temp->link != NULL)
	{
		temp = temp->link;
	}

	/* Establish the link between Last and New node */
	temp->link = new;

	return SUCCESS;
}
