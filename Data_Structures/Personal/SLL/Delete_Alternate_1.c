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

Node* delete_alternate (Node* head)
{
	if (head == NULL)									//If we reached the end of the LL; return 'head' without any further changes.
		return head;

	Node* del = head;									//Otherwise, store the Current Node (starting from 1st Node) in a Temporary variable.
	head = head->link;									//Update the 'head' to point to the Next Node (i.e. one which will not be deleted).
	free (del);											//Deallocate the Current Node using Temporary variable.
	if (head != NULL && head->link != NULL)				//If the 'head' is not pointing to the end of the LL or the Last node of the LL; call the function recursively.
		head->link = delete_alternate (head->link);		//Recursive function call to reach the next Node to be deleted and maintain each Link by returning the 'head'.
	return head;										//Return the 'head' after Node is linked to the LL.
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
	printf ("OPERATION: Deletion of Alternate Nodes from the Beginning:\n");
	Node* head = NULL;
	int ret;

	ret = print (head);
#if 1
	/* Insert Operation: Odd Number of Nodes */
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

	/* Delete Operation: Odd Number of Nodes */
	head = delete_alternate (head);
	if ((ret = print (head)) == 1)
		printf ("NULL\n");
#endif
#if 0
	/* Insert Operation: Even Number of Nodes */
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
	ret = insert_first (&head, 59);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
				printf ("NULL\n");
	}

	/* Delete Operation: Even Number of Nodes */
	head = delete_alternate (head);
	if ((ret = print (head)) == 1)
		printf ("NULL\n");
#endif
	return 0;
}
