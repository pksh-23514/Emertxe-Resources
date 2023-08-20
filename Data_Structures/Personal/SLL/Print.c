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

int print (Node* head)
{
	static int count = 0;				//To keep the track of how many values are printed.

	if (head == NULL)
	{
		if (count == 0)					//If the count is '0'; the list is empty.
		{
			printf ("Empty List.\n");
			return 0;
		}
		else							//Otherwise, we have reached the end of the LL.
			return 1;
	}
	else
	{
		printf ("%d->", head->data);	//Print the Data before the Recursive function call in Normal Order.
		count++;						//Update the 'count' value after printing.
		return (print (head->link));	//Recursive function call with the Next node as parameter.
	}
}

int print_reverse (Node* head)
{
	static int count = 0;				//To keep the track of how many values are passed in the Recursive function call.

	if (head == NULL)
	{
		if (count == 0)					//If the count is '0'; the list is empty.
		{
			printf ("Empty List.\n");
			return 0;
		}
		else							//Otherwise, we have reached the end of the LL.
			return 1;
	}
	else
	{
		count++;                        //Update the 'count' value before passing the Next node as a parameter in the Recursive function call.
		print_reverse (head->link);		//Recursive function call with the Next node as parameter.
		printf ("%d->", head->data);	//Print the Data after the Recursive function call in Reverse Order.
		return 1;
	}
}

int main()
{
	printf ("OPERATION: Print the Linked List in Reverse Order:\n");
	Node* head = NULL;
	int ret;

	ret = print (head);

	/* Insert Operation */
	ret = insert_first (&head, 5);
	if (ret == 0)	//Error Handling.
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head, 14);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head, 23);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head, 32);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head, 41);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	
	/* Print in the Normal Order */
	if ((ret = print (head)) == 1)
			printf ("NULL\n");

	/* Print in the Reverse Order */
	if ((ret = print_reverse (head)) == 1)
			printf ("NULL\n");
	return 0;
}
