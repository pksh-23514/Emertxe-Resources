#include "SLL.h"

int flag;	//To signify the Status whether the Element has been Deleted successfully or not.

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

Node* delete_node (Node* head, int value)
{
	if (head == NULL)										//If the LL is empty or we have reached the end of the LL; the 'value' is not present in the LL.
	{
		flag = 0;
		return NULL;
	}

	if (head->data == value)								//If we have reached the particular Node of the LL; deallocate the memory and update 'flag' as 1.
	{
		Node* del = head;									//Temporary variable to Delete the Current Node.
		head = head->link;									//Update the 'head' to point to the Next Node.
		free (del);											//Deallocate the Node.
		flag = 1;											//Successful Deletion.
		return head;										//Return 'head' to the previous function call to maintain the link of the LL.
	}
	else
	{
		head->link = delete_node (head->link, value);		//Recursive function call to reach the particular Node of 'value' of the LL and maintain each Link by returning the 'head'.
	}
	return head;											//Return the 'head' after Node is linked to the LL.
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
	printf ("OPERATION: Deletion of a Particular Node in the Linked List:\n");
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
	head = delete_node (head, 23);
	if (flag == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = delete_node (head, 59);
	if (flag == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = delete_node (head, 14);
	if (flag == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = delete_node (head, 41);
	if (flag == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	flag = 0;
	head = delete_node (head, 5);
	if (flag == 0)
		printf ("Deletion Unsuccessful.\n");
	else
	{
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	return 0;
}