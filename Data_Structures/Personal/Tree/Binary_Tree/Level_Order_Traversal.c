#include "Tree.h"

int flag;

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

int max (int a, int b)
{
	int c = (a > b) ? a : b;		//To find the Maximum of the 2 given values.
	return c;
}

int find_height (Tree* root)
{
	if (root == NULL)				//If we reach a Leaf Node, return 0. The Height of the Leaf Node is always '0'.
		return 0;

	//Find the Heights of the Left and Right Sub-Tree. Compare the Heights and return it after adding '1' to include the Root Node height.
	return ((max (find_height (root->left), find_height (root->right))) + 1);
}

void print_kth_level (Tree* root, int k)
{
	if (root == NULL)								//Base Case. The function shall start returning.
		return;

	if (k == 1)										//Assuming the Level of the Tree to start from '1'; if we reach the Kth level (i.e. k = 1), print the Root Data.
	{
		printf ("%d ", root->data);
		flag = 1;
	}

	print_kth_level (root->left, (k - 1));			//Traverse the Left Sub-Tree of the Root Node and decrease the value of 'k' by 1 (as we are traversing one Level below the Root).
	print_kth_level (root->right, (k - 1));			//Traverse the Right Sub-Tree of the Root Node and decrease the value of 'k' by 1 (as we are traversing one Level below the Root).
}

void level_order (Tree* root)
{
	int height = find_height (root);				//Find the Height of the given Tree.
	
	for (int i = 1; i <= height; i++)				//Assuming the Level of the Tree starts with '1'; traverse all the Levels one by one.
	{
		print_kth_level (root, i);					//Print all the Nodes at the 'i'th Level.
		printf ("\n");
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
	return 0;
}
