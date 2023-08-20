#include "Tree.h"

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
	if (root == NULL)				//Base Case. The Height of the Empty Tree is always '0'.
		return 0;

	//Find the Heights of the Left and Right Sub-Tree. Compare the Heights and return it after adding '1' to include the Root Node height.
	return ((max (find_height (root->left), find_height (root->right))) + 1);
}

int find_count (Tree* root)
{
	if (root == NULL)				//Base Case. The Count of the Nodes of the Empty Tree is always '0'.
		return 0;

	//Find the Number of Nodes of the Left Sub-Tree, the Number of Nodes of the Right Sub-Tree. Sum both the Counts and add '1' to include the Root Node.
	return (1 + (find_count (root->left)) + (find_count (root->right)));
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

	/* Height of the Tree */
	int height = find_height (root);
	printf ("The Height of the Binary Tree is: %d\n", height);

	/* Count of the Number of Nodes in the Tree */
	int count = find_count (root);
	printf ("The Number of Nodes in the Binary Tree is: %d\n", count);
	return 0;
}
