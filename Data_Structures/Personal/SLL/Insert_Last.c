#include "SLL.h"

Node* new_node (int value)
{
	Node* new = (Node*) malloc (sizeof (Node));		//Create a new Node.

	if (new == NULL)	//If memory not allocated, return 'NULL'.
		return NULL;
	else				//Otherwise, the Node is updated and returned.
	{
		new->data = value;
		new->link = NULL;
		return new;
	}
}

Node* insert_last (Node* head, int value)
{
	if (head == NULL)									//If the LL is empty or we have reached the end of LL; return the new Node.
	{
		return (new_node (value));						//Return the new node to the previous function call (either recursive or from main()).
	}
	else												//Otherwise, recursive call to traverse the LL with Next node as the function argument.
	{
		head->link = insert_last (head->link, value);	//Recursive function call to reach the Last Node of the LL and maintain the Link by returning the 'head'.
	}
	return head;										//Return the 'head' after the new Node is linked to the LL.
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
	printf ("OPERATION: Insertion at the End of the Linked List:\n");
	Node* head = NULL;
	int ret;

	ret = print (head);

	/* Insert Operation */
	head = insert_last (head, 5);
	if (head == NULL)	//Error Handling.
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	head = insert_last (head, 14);
	if (head == NULL)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	head = insert_last (head, 23);
	if (head == NULL)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	head = insert_last (head, 32);
	if (head == NULL)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	head = insert_last (head, 41);
	if (head == NULL)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	return 0;
}

/*
   Insertion of a Node at the End of LL using the Tail pointer:
   int insert_last (Node** head, Node** tail, int value)
   {
	   Node* new = new_node (value);	//Create a new Node.
	   if (new == NULL)		//If memory not allocated, return '0'.
		   return 0;

	   if (*head == NULL)	//If LL is empty, 'head' and 'tail' both will point to the new Node.
	   {
		   *head = new;
		   *tail = new;
	   }
	   else		//Otherwise, using the 'tail' to link the new Node to LL.
	   {
		   (*tail)->link = new;		//Make the current last Node to point to the new Node.
		   *tail = new;				//Update the 'tail' to point to new Node which is now the updated last Node in the LL.
	   }
	   
	   return 1;
   }
*/
