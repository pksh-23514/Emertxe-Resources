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

Node* delete_list (Node* head)
{
	if (head == NULL)						//If the LL is empty or we reached the end of the LL; we can return the Head directly.
		return head;

	head->link = delete_list (head->link);	//Otherwise, recursively call the function to reach the end of the LL and maintain each Link by returning the 'head'.
	free (head);							//Free the Current Node.
	head = NULL;							//Update the Current Node to 'NULL' to make the previous function call's Node as the Last Node.
	return head;							//Return the 'head' after Node is linked to the LL.
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
	printf ("OPERATION: Deletion of the Entire Linked List:\n");
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
	head = delete_list (head);
	if (head != NULL)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	return 0;
}
