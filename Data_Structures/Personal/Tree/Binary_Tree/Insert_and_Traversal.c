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

void inorder (Tree* root)
{
	if (root == NULL)				//Base Case. The function shall start returning.
		return;

	inorder (root->left);			//Traverse the Left Sub-Tree of the Root.
	printf ("%d ", root->data);		//Print the Root Data.
	inorder (root->right);			//Traverse the Right Sub-Tree of the Root.
}

void preorder (Tree* root)
{
	if (root == NULL)				//Base Case. The function shall start returning.
		return;

	printf ("%d ", root->data);		//Print the Root Data.
	preorder (root->left);			//Traverse the Left Sub-Tree of the Root.
	preorder (root->right);			//Traverse the Right Sub-Tree of the Root.
}

//Postorder is slightly inefficient than Preorder and Inorder. The reason being the Compiler cannot optimize the function due to the Last printf() statement in Postorder.
//Whereas in Preorder and Inorder, the Last statement is a Recursive function call which can be optimized into Tail Recursion and the Current Stack frame can be deleted.
void postorder (Tree* root)
{
	if (root == NULL)				//Base Case. The function shall start returning.
		return;

	postorder (root->left);			//Traverse the Left Sub-Tree of the Root.
	postorder (root->right);		//Traverse the Right Sub-Tree of the Root.
	printf ("%d ", root->data);		//Print the Root Data.
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

	/*					10
				5				20
		15			25		30			35
			45						50
	 */

	/* Depth-First Traversal (DFS) */

	/* Inorder Traversal: Left->Root->Right */
	printf ("Inorder Traversal:   ");
	inorder (root);
	printf ("\n");

	/* Preorder Traversal: Root->Left->Right */
	printf ("Preorder Traversal:  ");
	preorder (root);
	printf ("\n");

	/* Postorder Traversal: Left->Right->Root */
	printf ("Postorder Traversal: ");
	postorder (root);
	printf ("\n");
	return 0;
}
