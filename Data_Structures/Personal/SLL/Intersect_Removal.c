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

Node* copy (Node* head1)
{
	if (head1 == NULL)									//If the original LL is empty; return the same to the Head of the Duplicate LL.
		return head1;

	if (head1->link == NULL)							//If the original LL has only one Node or we reached the Last node of the Original LL; return for the Duplicate LL begins.
	{
		Node* new = (Node*) malloc (sizeof (Node));		//Create a new Node of the Duplicate LL.
		if (new == NULL)								//If memory not allocated, return 'NULL'.
			return NULL;
		new->data = head1->data;						//Copy the Original LL Node Data to the Duplicate LL Node Data.
		new->link = NULL;								//Being the Last Node of the Duplicate LL; link the Node pointer to NULL.
		return new;										//Return the Last Node of the Duplicate LL to link it to the Previous Node of the Duplicate LL generated in the previous function call.
	}

	Node* new = (Node*) malloc (sizeof (Node));			//Create a new Node of the Duplicate LL.
	if (new == NULL)									//If memory not allocated, return 'NULL'.
		return NULL;
	new->data = head1->data;							//Copy the Original LL Node Data to the Duplicate LL Node Data.
	new->link = copy (head1->link);						//The New Node pointer shall point to the Next Node of the Duplicate LL generated in the next function call.
	return new;											//Return the 'new' as Head of the Duplicate LL to main() after all the previous linking is completed.
}

int main()
{
	/*
	   Create Two Linked Lists:
	   1st Linked list is => 3->6->9->15->30
	   2nd Linked list is => 10->15->30
	   15 30 are Elements in the Intersection List.
	 */
	
	printf ("OPERATION: Intersection Removal in Linked Lists:\n");
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

	/* Intersection Removal */
	Node* duplicate = NULL;
	duplicate = copy (intersect_node);				//Duplicate the Intersection part of both the LL.
	printf ("Duplicate Intersected List: ");
	if ((ret = print (duplicate)) == 1)
		printf ("NULL\n");
	
	Node* temp = head2;
	while (temp->link != intersect_node)			//Traverse the Second LL till we reach the Node before the First Intersection Node.
		temp = temp->link;
	temp->link = duplicate;							//Update the Node pointer to point to the Duplicate Intersection LL.

	/* Intersection Removal Confirmation */
	Node* check = intersection (head1, head2);		//To confirm if the Intersection part of the LL has been separated between the 2 LL.
	printf ("Modified Intersected List: ");
	if ((ret = print (check)) == 1)
		printf ("NULL\n");
	if (check == NULL)								//If Intersection Node is separated in the 2 LL; 'check' will point to NULL.
		printf ("Intersection Removal Successful.\n");

	/* Print Operation */
	if ((ret = print (head1)) == 1)
		printf ("NULL\n");
	if ((ret = print (head2)) == 1)
		printf ("NULL\n");
	return 0;
}
