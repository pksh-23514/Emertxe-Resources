#include "Tree.h"
#include <limits.h>

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

int min (int a, int b)
{
	int c = (a < b) ? a : b;        //To find the Minimum of the 2 given values.
	return c;
}

int maximum (Tree* root)
{
	if (root == NULL)				//Base Case. Since, we have to find the Largest value; the return value shall be Minimum Integer value possible.
		return INT_MIN;

	//The idea is to compare the Root Data, Maximum in Left Sub-Tree and Maximum in Right Sub-Tree. And return the Largest of the 3 Values.
	return (max (root->data, max ((maximum (root->left)), (maximum (root->right)))));
}

int minimum (Tree* root)
{
	if (root == NULL)				//Base Case. Since, we have to find the Smallest value; the return value shall be Maximum Integer value possible.
		return INT_MAX;

	//The idea is to compare the Root Data, Minimum in Left Sub-Tree and Minimum in Right Sub-Tree. And return the Smallest of the 3 Values.
	return (min (root->data, min ((minimum (root->left)), (minimum (root->right)))));
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

	/* Maximum Value stored in the Tree */
	int max = maximum (root);
	printf ("The Maximum Element stored in the Tree is: %d\n", max);

	/* Minimum Value stored in the Tree */
	int min = minimum (root);
	printf ("The Minimum Element stored in the Tree is: %d\n", min);
	return 0;
}
