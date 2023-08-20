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

int sum

int main()
{
	Tree* root = NULL;

	/* Insert the Nodes in the Tree */
	root = create (25);
	root->left = create (15);
	root->left->left = create (5);
	root->left->right = create (10);
	root->right = create (10);
	root->right->left = create (5);
	root->right->right = create (5);
	//root->left->left->right = create (45);
	//root->right->right->left = create (50);

	/* Children Sum Property: Node Data = Immediate Left Child Value + Immediate Right Child Value */
	int ret = check_sum (root);
	return 0;
}
