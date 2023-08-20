#include "SLL.h"

int insert_first (Node** head, int value)
{
	Node* new = (Node*) malloc (sizeof (Node));		//Create a new Node.
	if (new == NULL)		//If memory not allocated, return 'NULL'.
		return 0;

	new->data = value;		//Update Node data.
	new->link = *head;		//Update Node link.
	*head = new;			//Update the Head.
	return 1;
}

int delete_first (Node** head)
{
	if (*head == NULL)		//If the LL is empty, Deletion Operation cannot be performed.
		return 0;

	Node* del = *head;
	*head = (*head)->link;	//Update the 'head' to point to the Next node.
	free (del);				//Free the First node.
	return 1;
}

int print (Node* head)
{
	static int count = 0;				//To keep the track of how many values are printed.

	if (head == NULL)
	{
		if (count == 0)					//If the count is '0'; the list is empty.
			printf ("Empty List.\n");
		else							//Otherwise, we have reached the end of the LL.
			return 1;
	}
	else
	{
		printf ("%d->", head->data);
		count++;						//Update the 'count' value after printing.
		return (print (head->link));
	}
}

int main()
{
	printf ("OPERATION: Deletion at the Beginning of the Linked List:\n");
	Node* head = NULL;
	int ret;

	ret = print (head);

	/* Insert Operation */
	ret = insert_first (&head, 5);
	if (ret == 0)	//Error Handling.
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}		
	ret = insert_first (&head, 14);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	ret = insert_first (&head, 23);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	ret = insert_first (&head, 32);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	ret = insert_first (&head, 41);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}

	/* Delete Operation */
	ret = delete_first (&head);
	if (ret == 0)	//Error Handling.
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	ret = delete_first (&head);
	if (ret == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	ret = delete_first (&head);
	if (ret == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	ret = delete_first (&head);
	if (ret == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	ret = delete_first (&head);
	if (ret == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	ret = delete_first (&head);
	if (ret == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	return 0;
}
