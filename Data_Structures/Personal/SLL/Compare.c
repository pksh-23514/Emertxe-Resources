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

int length (Node* head)
{
	if (head == NULL)		//If the LL is empty, the Length of the LL shall be 0.
		return 0;

	int count = 0;			//To store the Count of the Nodes in the LL.
	while (head != NULL)	//The loop shall run till we reach the end of the LL.
	{
		count++;			//Update the Count of the Nodes as we traverse the LL.
		head = head->link;	//Update the 'head' to point to the next Node.
	}
	return count;			//Return the Count of the Nodes.
}

int compare (Node* head1, Node* head2)
{
	int len1 = length (head1);						//Calculate the Length of the first LL.
	int len2 = length (head2);						//Calculate the Length of the second LL.

	if (len1 > len2)								//If the Length of the first LL is greater; return 1.
		return 1;
	else if (len1 < len2)							//If the Length of the second LL is greater; return -1.
		return -1;
	else											//If the Lengths of the LL are equal; compare their Node data.
	{
		while (head1 != NULL && head2 != NULL)		//The loop shall run till we reach the end of the LLs.
		{
			if (head1->data > head2->data)			//If the Node Data for the first LL is greater; return 1.
				return 1;
			else if (head1->data < head2->data)		//If the Node Data for the second LL is greater; return -1.
				return -1;

			// If the Node Data are equal; traverse the LL and compare the Next Node Data.
			head1 = head1->link;
			head2 = head2->link;
		}
		return 0;									//If all the Node Data in both the LL are equal; return 0.
	}
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
	printf ("OPERATION: Comparision of Two Linked Lists:\n");
	Node* head1 = NULL;
	int ret;

	/* Insert Operation */
	ret = insert_first (&head1, 5);
	if (ret == 0)	//Error Handling.
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head1, 14);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head1, 23);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head1, 32);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head1, 41);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	
	Node* head2 = NULL;
	ret = insert_first (&head2, 5);
	if (ret == 0)	//Error Handling.
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head2, 14);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head2, 23);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head2, 32);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head2, 41);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head2, 50);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");

	Node* head3 = NULL;
	ret = insert_first (&head3, 5);
	if (ret == 0)	//Error Handling.
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head3, 14);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head3, 23);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head3, 32);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head3, 41);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");
	ret = insert_first (&head3, 50);
	if (ret == 0)
		printf ("Insertion Unsuccessful.\n");


	/* Print Operation */
	if ((ret = print (head1)) == 1)		//First Linked List.
		printf ("NULL\n");
	
	if ((ret = print (head2)) == 1)		//Second Linked List.
		printf ("NULL\n");

	if ((ret = print (head3)) == 1)		//Third Linked List.
		printf ("NULL\n");

	/* Compare Operation */
	ret = compare (head1, head2);		//Comparision of First and Second Linked List.
	if (ret == 1)
		printf ("List-1 is Greater.\n");
	else if (ret == -1)
		printf ("List-2 is Greater.\n");
	else
		printf ("Lists are Equal.\n");

	ret = compare (head3, head1);		//Comparision of Third and First Linked List.
	if (ret == 1)
		printf ("List-1 is Greater.\n");
	else if (ret == -1)
		printf ("List-2 is Greater.\n");
	else
		printf ("Lists are Equal.\n");

	ret = compare (head3, head2);		//Comparision of Third and Second Linked List.
	if (ret == 1)
		printf ("List-1 is Greater.\n");
	else if (ret == -1)
		printf ("List-2 is Greater.\n");
	else
		printf ("Lists are Equal.\n");
	return 0;
}
