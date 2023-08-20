#include "SLL.h"

int flag;

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

Node* delete_Kth (Node* head, int k)
{
	if ((head == NULL && k > 1) || (k < 1))				//If the LL is empty or we reached the end of the LL, or 'k' has a value greater or lesser than 1; Insertion is not possible.
	{
		flag = 0;
		return head;									//Return the 'head' without performing any changes.
	}

	if (k == 1)											//If we reach the position where the Node has to be deleted, update the LL by deleting the Node.
	{
		Node* ret = head->link;							//Temporary variable to store the Address of the Next node.
		flag = 1;										//Successful Deletion.
		free (head);									//Deallocate the Node.
		return ret;										//Return 'ret' to the previous function call to maintain the link of the LL.
	}

	head->link = delete_Kth (head->link, (k - 1));		//Recursive function call to reach the particular Node of the LL and maintain each Link by returning the 'head'.
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
	printf ("OPERATION: Deletion of the Kth Node in the Linked List:\n");
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
	flag = 0;
	head = delete_Kth (head, 1);
	if (flag == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = delete_Kth (head, 0);
	if (flag == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = delete_Kth (head, 4);
	if (flag == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = delete_Kth (head, 5);
	if (flag == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	head = delete_Kth (head, 2);
	if (flag == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	return 0;
}
