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

void left_view (Tree* root, int level, int* max)
{
	if (root == NULL)								//Base Case.
		return;

	if (*max < level)								//If the 'level' has not been visited, print the Root Data as it is the First Node of that Level.
	{
		printf ("%d ", root->data);
		*max = level;								//Mark the Levels which are already visited.
	}

	left_view (root->left, (level + 1), max);		//Firstly, Traverse the Left Sub-Tree of the Root Node.
	left_view (root->right, (level + 1), max);		//Then, Traverse the Right Sub-Tree of the Root Node.
}

int main()
{
	Tree* root = NULL;

	/* Insert the Nodes in the Tree */
	root = create (10);
	root->left = create (2);
	root->right = create (3);
	root->left->left = create (7);
	root->left->right = create (8);
	root->right->right = create (15);
	root->right->left = create (12);
	root->right->right->left = create (14);

	/* Left View of the Tree: The set of Leftmost Nodes for every Level */
	printf ("The Left View of the given Tree:\n");
	int max = 0;										//To store the Levels which are visited and the First Node visible from Left is printed.
	left_view (root, 1, &max);							//Assume the Levels of the Tree start from '1'.
	printf ("\n");
	return 0;
}
