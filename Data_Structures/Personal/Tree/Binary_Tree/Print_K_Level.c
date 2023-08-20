#include "Tree.h"

int flag;	//To check if the particular Level has any Nodes or not.

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

void print_kth_level (Tree* root, int k)
{
	if (root == NULL)								//Base Case. The function shall start returning.
		return;

	if (k == 1)										//Assuming the Level of the Tree to start from '1'; if we reach the Kth level (i.e. k = 1), print the Root Data.
	{
		flag = 1;									//Update the 'flag' to 1 which signifies the particular level has Nodes.
		printf ("%d ", root->data);
	}

	print_kth_level (root->left, (k - 1));			//Traverse the Left Sub-Tree of the Root Node and decrease the value of 'k' by 1 (as we are traversing one Level below the Root).
	print_kth_level (root->right, (k - 1));			//Traverse the Right Sub-Tree of the Root Node and decrease the value of 'k' by 1 (as we are traversing one Level below the Root).
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

	/* Print all the Nodes at the Kth Level of the Tree */
	int level;
	printf ("Enter the Level of the Tree to be printed: ");
	scanf ("%d", &level);
	print_kth_level (root, level);
	if (flag == 1)
	{
		printf ("\n");
	}
	else
	{
		printf ("Entered Level doesn't exists on the given Tree.\n");
	}
	return 0;
}
