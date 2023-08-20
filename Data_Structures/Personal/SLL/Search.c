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

int search (Node* head, int value)
{
	if (head == NULL)							//If the LL is empty or we reach the end of the LL; return DATA_NOT_FOUND.
		return 0;

	if (head->data == value)					//If the Node data matches with the 'value'; return SUCCESS.
		return 1;

	return (search ((head->link), value));		//Otherwise, recursively call the Search function with Next node and 'value' as parameters.
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
	printf ("OPERATION: Searching for a Value in the Linked List:\n");
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

	/* Search Operation */
	ret = search (head, 23);
	if (ret == 0)
		printf ("Search Unsuccessful.\n");
	else
		printf ("%d is found in the LL.\n", 23);
	ret = search (head, 50);
	if (ret == 0)
		printf ("Search Unsuccessful.\n");
	else
		printf ("%d is found in the LL.\n", 50);
	ret = search (head, 41);
	if (ret == 0)
		printf ("Search Unsuccessful.\n");
	else
		printf ("%d is found in the LL.\n", 41);
	ret = search (head, 32);
	if (ret == 0)
		printf ("Search Unsuccessful.\n");
	else
		printf ("%d is found in the LL.\n", 32);
	ret = search (head, 59);
	if (ret == 0)
		printf ("Search Unsuccessful.\n");
	else
		printf ("%d is found in the LL.\n", 59);
}
