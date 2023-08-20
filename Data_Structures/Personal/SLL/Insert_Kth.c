#include "SLL.h"

int flag;

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

Node* insert_Kth (Node* head, int value, int k)
{
	if ((head == NULL && k > 1) || (k < 1))						//If the LL is empty or we reached the end of the LL, or 'k' has a value greater or lesser than 1; Insertion is not possible.
	{
		flag = 0;
		return head;											//Return the 'head' without performing any changes.
	}

	if (k == 1)													//If we reach the position where the Node has to be inserted, update the LL with the New node.
	{
		flag = 1;
		return (new_node (head, value));						//Return the new node to the previous function call (either recursive or from main()).
	}

	head->link = insert_Kth (head->link, value, (k - 1));		//Otherwise, recursively call the function to reach the end of the LL and maintain each Link by returning the 'head'.
	return head;												//Return the 'head' after Node is linked to the LL.
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
	printf ("OPERATION: Insertion at the Kth Node in the Linked List:\n");
	Node* head = NULL;
	int ret;

	ret = print (head);

	/* Insert Operation */
	flag = 0;
	head = insert_Kth (head, 23, 1);
	if (flag == 0)	//Error Handling.
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = insert_Kth (head, 5, 1);
	if (flag == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = insert_Kth (head, 5, 0);
	if (flag == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = insert_Kth (head, 14, 3);
	if (flag == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = insert_Kth (head, 41, 2);
	if (flag == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = insert_Kth (head, 50, 4);
	if (flag == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = insert_Kth (head, 32, 2);
	if (flag == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = insert_Kth (head, 59, 8);
	if (flag == 0)
		printf ("Insertion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	return 0;
}
