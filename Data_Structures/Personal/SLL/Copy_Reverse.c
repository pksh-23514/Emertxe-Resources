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

Node* copy_reverse (Node* head1, Node* prev)
{
	if (head1 == NULL)									//If the original LL is empty; return the same to the Head of the Duplicate LL.
		return NULL;

	if (head1->link == NULL)							//If the original LL has only one Node or we reached the Last node of the Original LL; return for the Duplicate LL begins.
	{
		Node* new = (Node*) malloc (sizeof (Node));		//Create a new Node of the Duplicate LL.
		if (new == NULL)								//If memory not allocated, return 'NULL'.
			return NULL;
		new->data = head1->data;						//Copy the Original LL Node Data to the Duplicate LL Node Data.
		new->link = prev;								//Link the Current Node pointer to point to the Previous Node of the Duplicate LL generated in the before function call.
		return new;										//Return the Current Node as the Head of the Duplicate LL.
	}

	Node* new = (Node*) malloc (sizeof (Node));			//Create a new Node of the Duplicate LL.
	if (new == NULL)									//If memory not allocated, return 'NULL'.
		return NULL;
	new->data = head1->data;							//Copy the Original LL Node Data to the Duplicate LL Node Data.
	Node* ret = copy_reverse (head1->link, new);		//Recursive function call with Next Node of Original LL and the New Node of the Duplicate LL as the Previous Node for the next function call.
	new->link = prev;									//Link the Current Node pointer to point to the Previous Node of the Duplicate LL generated in the before function call.
	return ret;											//Return the received Head of the Duplicate LL to the previous function call or main().
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
	printf ("OPERATION: Copying the Linked List into another Linked List in Reverse Order:\n");
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

	/* Copy Operation of the Original LL in Reverse Order */
	Node* head2 = NULL;		//Duplicate LL.
	head2 = copy_reverse (head1, head2);
	if (head2 == NULL)	//Error Handling.
		printf ("Copying Unsuccessful.\n");
	else
	{
		if ((ret = print (head2)) == 1)
			printf ("NULL\n");
	}
	return 0;
}
