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

int find_node (Tree* root, int key)
{
	if (root == NULL)		//If the key is not found; the function shall return '0'.
		return 0;

	//If the 'key' is found in either the Root Node or the Left Sub-Tree or the Right Sub-Tree; the function shall return '1'.
	return ((root->data == key) || find_node (root->left, key) || find_node (root->right, key));
}

Tree* calculate_LCA (Tree* root, int n1, int n2)
{
	if (root == NULL)										//Base Case. If the Tree is empty; return NULL.
		return NULL;

	if ((root->data == n1) || (root->data == n2))			//If either of the 2 Values are found in the Root Node; it shall be returned as the LCA.
		return root;

	Tree* left_LCA = calculate_LCA (root->left, n1, n2);	//Then, the Left Sub-Tree shall be checked for the Values and the LCA returned shall be stored.
	Tree* right_LCA = calculate_LCA (root->right, n1, n2);	//Then, the Right Sub-Tree shall be checked for the Values and the LCA returned shall be stored.

	if ((left_LCA != NULL) && (right_LCA != NULL))			//If both the LCAs are not NULL, then one key is present in one Sub-Tree and other is present in the other Sub-Tree.
		return root;										//So the Root Node is the LCA.

	return ((left_LCA != NULL) ? left_LCA : right_LCA);		//Otherwise, both the Values are in the same Sub-Tree and return that Sub-Tree LCA which is not NULL.
}

Tree* find_LCA (Tree* root, int n1, int n2)
{
	if ((find_node (root, n1) == 1) && (find_node (root, n2) == 1))		//To confirm if both the Values are present in the given Tree or not.
		return (calculate_LCA (root, n1, n2));							//If the Values are present; then proceed for calculation of the LCA.
	else																//Otherwise, return NULL as there is no LCA present in the given Tree.
		return NULL;
}

int main()
{
	Tree* root = NULL;

	/* Insert the Nodes in the Tree */
	root = create (1);
	root->left = create (2);
	root->left->left = create (4);
	root->left->right = create (5);
	root->right = create (3);
	root->right->left = create (6);
	root->right->right = create (7);

	/* Least Common Ancestor */
	//The lowest common ancestor is the lowest node in the tree that has both Nodes 'n1' and 'n2' as descendants. It is the shared Ancestor of 'n1' and 'n2' that is located Farthest from the Root.
	Tree* lca = NULL;
	lca = find_LCA (root, 4, 5);
	if (lca == NULL)	//Error Handling.
		printf ("The Nodes are not present in the given Tree.\n");
	else
		printf ("Least Common Ancestor for the Nodes %d and %d is: %d\n", 4, 5, lca->data);
	lca = find_LCA (root, 4, 10);
	if (lca == NULL)
		printf ("The Nodes are not present in the given Tree.\n");
	else
		printf ("Least Common Ancestor for the Nodes %d and %d is: %d\n", 4, 10, lca->data);
	lca = find_LCA (root, 6, 7);
	if (lca == NULL)
		printf ("The Nodes are not present in the given Tree.\n");
	else
		printf ("Least Common Ancestor for the Nodes %d and %d is: %d\n", 6, 7, lca->data);
	lca = find_LCA (root, 4, 7);
	if (lca == NULL)
		printf ("The Nodes are not present in the given Tree.\n");
	else
		printf ("Least Common Ancestor for the Nodes %d and %d is: %d\n", 4, 7, lca->data);
	lca = find_LCA (root, 3, 7);
	if (lca == NULL)
		printf ("The Nodes are not present in the given Tree.\n");
	else
		printf ("Least Common Ancestor for the Nodes %d and %d is: %d\n", 3, 7, lca->data);
	lca = find_LCA (root, 2, 5);
	if (lca == NULL)
		printf ("The Nodes are not present in the given Tree.\n");
	else
		printf ("Least Common Ancestor for the Nodes %d and %d is: %d\n", 2, 5, lca->data);
	lca = find_LCA (root, 2, 6);
	if (lca == NULL)
		printf ("The Nodes are not present in the given Tree.\n");
	else
		printf ("Least Common Ancestor for the Nodes %d and %d is: %d\n", 2, 6, lca->data);
	return 0;
}
