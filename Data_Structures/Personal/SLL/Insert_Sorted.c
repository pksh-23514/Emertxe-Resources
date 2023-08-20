#include "SLL.h"

Node* new_node (Node* link, int value)
{
	Node* new = (Node*) malloc (sizeof (Node));		//Create a new Node.

	if (new == NULL)	//If memory not allocated, return 'NULL'.
		return NULL;
	else				//Otherwise, the Node is updated and returned.
	{
		new->data = value;
		new->link = link;	//New node points to the Node having Data greater than 'value'.
		return new;
	}
}

Node* insert_sorted (Node* head, int value)
{
	if ((head == NULL) || (head->data > value))				//If the LL is empty or we have reached the end of LL or Node's data is greater; return the new Node linked to 'head'.
	{
		return (new_node (head, value));					//Return the new node to the previous function call (either recursive or from main()).
	}
	else													//Otherwise, recursive call to traverse the LL with Next node as the function argument.
	{
		head->link = insert_sorted ((head->link), value);
	}
	return head;											//Return the 'head' after the new Node is linked to the LL.
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
	printf ("OPERATION: Sorted Insertion into the Linked List:\n");
	Node* head = NULL;
	int ret;

	ret = print (head);

	/* Insert Operation in a Sorted fashion */
	head = insert_sorted (head, 14);
	if (head == NULL)	//Error Handling.
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}

	head = insert_sorted (head, 23);
	if (head == NULL)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}

	head = insert_sorted (head, 5);
	if (head == NULL)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}

	head = insert_sorted (head, 41);
	if (head == NULL)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	head = insert_sorted (head, 32);
	if (head == NULL)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	return 0;
}
