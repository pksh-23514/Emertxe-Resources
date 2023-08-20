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

Node* copy_original (Node* head1)
{
	if (head1 == NULL)									//If the original LL is empty; return the same to the Head of the Duplicate LL.
		return NULL;

	if (head1->link == NULL)							//If the original LL has only one Node or we reached the Last node of the Original LL; return for the Duplicate LL begins.
	{
		Node* new = (Node*) malloc (sizeof (Node));		//Create a new Node of the Duplicate LL.
		if (new == NULL)								//If memory not allocated, return 'NULL'.
			return NULL;
		new->data = head1->data;						//Copy the Original LL Node Data to the Duplicate LL Node Data.
		new->link = NULL;								//Being the Last Node of the Duplicate LL; link the Node pointer to NULL.
		return new;										//Return the Last Node of the Duplicate LL to link it to the Previous Node of the Duplicate LL generated in the previous function call.
	}

	Node* new = (Node*) malloc (sizeof (Node));			//Create a new Node of the Duplicate LL.
	if (new == NULL)									//If memory not allocated, return 'NULL'.
		return NULL;
	new->data = head1->data;							//Copy the Original LL Node Data to the Duplicate LL Node Data.
	new->link = copy_original (head1->link);			//The New Node pointer shall point to the Next Node of the Duplicate LL generated in the next function call.
	return new;											//Return the 'new' as Head of the Duplicate LL to main() after all the previous linking is completed.
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
	printf ("OPERATION: Copying the Linked List into another Linked List in Original Order:\n");
	Node* head1 = NULL;		//Original LL.
	int ret;

	ret = print (head1);

	/* Insert Operation */
	ret = insert_first (&head1, 5);
	if (ret == 0)	//Error Handling.
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head1)) == 1)
			printf ("NULL\n");
	}		
	ret = insert_first (&head1, 14);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head1)) == 1)
			printf ("NULL\n");
	}
	ret = insert_first (&head1, 23);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head1)) == 1)
			printf ("NULL\n");
	}
	ret = insert_first (&head1, 32);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head1)) == 1)
			printf ("NULL\n");
	}
	ret = insert_first (&head1, 41);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head1)) == 1)
			printf ("NULL\n");
	}

	/* Copy Operation of the Original LL in Original Order */
	Node* head2 = NULL;		//Duplicate LL.
	head2 = copy_original (head1);
	if (head2 == NULL)	//Error Handling.
		printf ("Copying Unsuccessful.\n");
	else
	{
		if ((ret = print (head2)) == 1)
			printf ("NULL\n");
	}
	return 0;
}
