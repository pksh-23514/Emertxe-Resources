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

int loop_detect (Node* head)
{
	/* Floyd's Cycle Finding Algorithm */
	Node* slow = head;	//Slow Pointer.
	Node* fast = head;	//Fast Pointer.

	//The loop shall terminate if we reach the end of the LL either through Slow/Fast pointer or we reach the Last node through Fast pointer.
	while (slow != NULL && fast != NULL && fast->link != NULL)
	{
		slow = slow->link;			//Slow pointer shall move One node at a Time.
		fast = fast->link->link;	//Fast pointer shall move Two nodes at a Time.

		if (slow == fast)			//If the Slow and Fast Pointer point to the Same Node; a Loop is Detected.
			return 1;				//Successful Loop Detection.
	}
	return 0;						//No Loop Detected.
}

int main()
{
	printf ("OPERATION: Loop Detection in Linked List:\n");
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
	/* Loop Detection */
	ret = loop_detect (head);
	if (ret == 1)
		printf ("Loop Detected in the Linked List.\n");
	else
		printf ("Loop Not Detected in the Linked List.\n");
	return 0;
}
