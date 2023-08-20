#include "SLL.h"

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

Node* intersection (Node* head1, Node* head2)
{
	if (head1 == NULL || head2 == NULL)		//If either of the LL is empty; there cannot be any Intersection between them.
		return NULL;

	Node* ptr1 = head1;
	Node* ptr2 = head2;

	while (ptr1 != ptr2)					//The loop shall run till both the Pointers are pointing to the Same Node (i.e. The First Intersecting Node).
	{
		ptr1 = ptr1->link;					//Update the 'ptr1' to point to the Next node.
		ptr2 = ptr2->link;					//Update the 'ptr2' to point to the Next node.

		if (ptr1 == ptr2)					//If at any Node 'ptr1' meets 'ptr2', then it is the Intersection node.
			return ptr1;

		/* Once both of the Pointers go through reassigning; they will be equidistant from the Collision Point. */
		if (ptr1 == NULL)					//If 'ptr1' reaches the end of the First LL; update it to point to the Head of the Second LL and start traversing.
			ptr1 = head2;

		if (ptr2 == NULL)					//If 'ptr2' reaches the end of the Second LL; update it to point to the Head of the First LL and start traversing.
			ptr2 = head1;
	}

/* After the second iteration of the loop; if there is no Intersection Node, it returns NULL. */
	return ptr1;							//Return the First Intersection Node.
}

int main()
{
	/*
	   Create Two Linked Lists:
	   1st Linked list is => 3->6->9->15->30
	   2nd Linked list is => 10->15->30
	   15 30 are Elements in the Intersection List.
	 */
	
	printf ("OPERATION: Intersection Detection in Linked Lists:\n");
	Node* newNode;
	int ret;

	/* Insert Operation */
	Node* head1 = (Node*) malloc (sizeof (Node));
	head1->data = 10;
	Node* head2 = (Node*) malloc (sizeof (Node));
	head2->data = 3;
	newNode = (Node*) malloc (sizeof (Node));
	newNode->data = 6;
	head2->link = newNode;
	newNode = (Node*) malloc (sizeof (Node));
	newNode->data = 9;
	head2->link->link = newNode;
	newNode = (Node*) malloc (sizeof (Node));
	newNode->data = 15;
	head1->link = newNode;
	head2->link->link->link = newNode;
	newNode = (Node*) malloc (sizeof (Node));
	newNode->data = 30;
	head1->link->link = newNode;
	head1->link->link->link = NULL;
	
	/* Print Operation */
	if ((ret = print (head1)) == 1)
		printf ("NULL\n");
	if ((ret = print (head2)) == 1)
		printf ("NULL\n");

	/* Intersection Detection */
	Node* intersect_node = intersection (head1, head2);
	printf ("Intersected List: ");
	if ((ret = print (intersect_node)) == 1)
		printf ("NULL\n");
	return 0;
}
