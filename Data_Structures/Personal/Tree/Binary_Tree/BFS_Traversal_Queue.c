#include "Tree.h"
#define MAX_SIZE 50

int flag = 1;

Tree** create_queue (int* front, int* rear, int* count)
{
	Tree** q = (Tree**) malloc (sizeof (Tree*) * MAX_SIZE);		//To allocate memory dynamically for storing the Pointers to the Tree Nodes (i.e. Array of Pointers).
	if (q == NULL)												//If the memory is not allocated, return NULL.
		return NULL;
	*front = *rear = -1;										//Update the initial values for Front and Rear as '-1'.
	*count = 0;													//Update the initial value for Count as '0'.
	return q;													//Return the Array of Pointers Implementation to be used as Queue.
}

void enqueue (Tree** q, Tree* node, int* front, int* rear, int* count)
{
	if (*count == MAX_SIZE)
		return;

	if (*front == -1)
		*front += 1;
	*rear = (*rear + 1) % MAX_SIZE;
	q [*rear] = node;
	*count += 1;
}

Tree* dequeue (Tree** q, int* front, int* count)
{
	if (*count == 0)
		return NULL;

	*front = (*front + 1) % MAX_SIZE;
	*count -= 1;
	return (q [*front - 1]);
}

Tree* create (int data)
{
	Tree* new = (Tree*) malloc (sizeof (Tree));		//Dynamic Memory allocation for the New Node to be created.
	if (new == NULL)								//If memory is not allocated, return NULL.
		return NULL;

	new->data = data;								//Update the Node Data with 'data'.
	new->left = NULL;								//Update the Node Left pointer as NULL.
	new->right = NULL;								//Update the Node Right pointer as NULL.
	return new;										//Return the New Node.
}

void level_order (Tree* root)
{
	if (root == NULL)
	{
		flag = 0;
		return;
	}

	int front, rear, count;
	Tree** q = create_queue (&front, &rear, &count);
	if (q == NULL)
		return;

	enqueue (q, root, &front, &rear, &count);
	enqueue (q, NULL, &front, &rear, &count);

	Tree* temp = NULL;
	while (count > 1)
	{
		temp = dequeue (q, &front, &count);
		if (temp == NULL)
		{
			printf ("\n");
			enqueue (q, NULL, &front, &rear, &count);
			continue;
		}

		printf ("%d ", temp->data);

		if (temp->left != NULL)
			enqueue (q, temp->left, &front, &rear, &count);
		if (temp->right != NULL)
			enqueue (q, temp->right, &front, &rear, &count);
	}
}

int main()
{
	Tree* root = NULL;

	/* Insert the Nodes in the Tree */
	root = create (10);
	root->left = create (5);
	root->left->left = create (15);
	root->left->right = create (25);
	root->right = create (20);
	root->right->left = create (30);
	root->right->right = create (35);
	root->left->left->right = create (45);
	root->right->right->left = create (50);

	/* Breadth-First Traversal */

	/* Level Order Traversal: Nodes at a particular Level from Top to Bottom */
	printf ("Level Order Traversal: \n");
	level_order (root);
	if (flag == 0)
		printf ("The Tree is Empty.\n");
	else
		printf ("\n");
	return 0;
}
