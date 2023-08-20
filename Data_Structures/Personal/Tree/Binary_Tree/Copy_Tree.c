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

Tree* copy_tree (Tree* root)
{
	if (root == NULL)								//Base Case. Return NULL to terminate the Duplicate Tree as well.
		return NULL;

	Tree* new = create (root->data);				//Update the Node Data with the Original Tree Node Data.
	if (new == NULL)
		return NULL;
	new->left = copy_tree (root->left);				//Recursive function call to Copy the Left Sub-Tree of the Current Node of the Original Tree.
	new->right = copy_tree (root->right);			//Recursive function call to Copy the Right Sub-Tree of the Current Node of the Original Tree.
	return new;										//Return the Root of the Duplicate Tree to main().
}

void inorder (Tree* root)
{
	if (root == NULL)				//Base Case. The function shall start returning.
		return;

	inorder (root->left);			//Traverse the Left Sub-Tree of the Root.
	printf ("%d ", root->data);		//Print the Root Data.
	inorder (root->right);			//Traverse the Right Sub-Tree of the Root.
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

	/* Original Tree Inorder Traversal */
	printf ("Original Tree:  ");
	inorder (root);
	printf ("\n");

	/* Copy the given Tree into another Tree */
	Tree* duplicate = copy_tree (root);
	if (duplicate == NULL)
		printf ("Unable to Copy the given Tree.\n");
	printf ("Duplicate Tree: ");
	inorder (duplicate);
	printf ("\n");
	return 0;
}
