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

void loop_remove (Node* slow, Node* head)
{
	if (slow == head)						//If the Slow and Fast pointers meet at the Head of the LL.
	{
		while (slow->link != head)			//Traverse the LL in such a way that when the loop terminates, 'slow' is pointing to the Last Node of the LL (if the Loop was not present).
			slow = slow->link;
	}
	else									//General case when the Slow and Fast pointers meet at any Random Node of the LL.
	{
		while (slow->link != head->link)	//Traverse the LL such that the Next Node pointed by 'head' and 'slow' shall be the Same Node (i.e. the Start Node of the Loop present).
		{
			slow = slow->link;				//Slow pointer shall move One node at a Time.
			head = head->link;				//Head pointer shall move One node at a Time.
		}
	}

	slow->link = NULL;						//'slow' is pointing to the Node which needs to be made as the Last Node of the LL to break the Loop; so update the Last Node pointer to NULL.
	return;
}

int loop_detect (Node* head)
{
	/* Floyd's Cycle Finding Algorithm */
	Node* slow = head;	//Slow Pointer.
	Node* fast = head;	//Fast Pointer.

	//The loop shall terminate if we reach the end of the LL either through Slow/Fast pointer or we reach the Last node through Fast pointer.
	while (slow != NULL && fast != NULL && fast->link != NULL)
	{
		slow = slow->link;					//Slow pointer shall move One node at a Time.
		fast = fast->link->link;			//Fast pointer shall move Two nodes at a Time.

		if (slow == fast)					//If the Slow and Fast Pointer point to the Same Node; a Loop is Detected.
		{
			loop_remove (slow, head);		//Function call with the Slow pointer and Head pointer as parameters.
			return 1;						//Successful Detection and Removal.
		}
	}
	return 0;								//No Loop Detected.
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
	printf ("OPERATION: Loop Removal in Linked List:\n");
	Node* head = NULL;
	int ret;

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
#if 1
	/* Loop Creation */
	head->link->link->link->link->link = head;
#endif
	/* Loop Detection and Removal */
	ret = loop_detect (head);
	if (ret == 1)
	{
		printf ("Loop Detected & Removed in the Linked List.\n");
		if ((ret = print (head)) == 1)
			printf ("NULL\n");
	}
	else
		printf ("Loop Not Detected in the Linked List.\n");
	return 0;
}
