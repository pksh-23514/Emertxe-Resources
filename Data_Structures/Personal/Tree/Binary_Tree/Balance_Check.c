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

int abs_diff (int a, int b)							//To calculate the Absolute Difference between the 2 Numbers.
{
	if (a > b)										//If the 1st Number is greater than the 2nd Number.
		return (a - b);
	else											//If the 2nd Number is greater than the 1st Number.
		return (b - a);
}

int check_balance (Tree* root)
{
	if (root == NULL)								//Base Case. The Height of the Empty Tree is always '0'.
		return 0;

	int left_h = check_balance (root->left);		//To calculate the Height of the Left Sub-Tree for the given Root.
	if (left_h == -1)								//If the Left Sub-Tree is not balanced; the Tree is not Balanced.
		return -1;
	int right_h = check_balance (root->right);		//To calculate the Height of the Right Sub-Tree for the given Root.
	if (right_h == -1)								//If the Right Sub-Tree is not balanced; the Tree is not Balanced.
		return -1;

	if (abs_diff (left_h, right_h) > 1)				//If the Height difference between the Left and Right Sub-Tree is greater than 1; the Tree is not Balanced.
		return -1;									//Return Failure.
	else
		return ((left_h > right_h) ? left_h + 1 : right_h + 1);
	//The last return statement gives the Height of the given Tree.
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
	//root->right->right->left->right = create (65);
	//root->right->right->left->right->right = create (75);

	/* Check if the Tree is Balanced */ 
	/* A height balanced binary tree is a binary tree in which the height of the left subtree and right subtree of any node does not differ by more than 1.
	   And both the left and right subtree are also height balanced.*/
	int ret = check_balance (root);
	if (ret == -1)
		printf ("The given Tree is not Balanced.\n");
	else
		printf ("The given Tree is Balanced.\n");
	return 0;
}
