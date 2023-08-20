#include <stdio.h>
#include <stdlib.h>
   
//Represent a Node of the Binary tree.
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

//Represent the Root of the Binary tree.
struct node *root;

//createrNode() will create a New node of the Binary Tree.
struct node* createNode (int data)
{
	//Create a new node.
	struct node* newNode = (struct node*) malloc (sizeof (struct node));
	
	//Assign data to newNode, set left and right child to NULL.
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	
	return newNode;
}

//display_tree() will Print the Nodes of the list in In-order fashion.
void display_tree (struct node* root)
{
	//Checks whether root is NULL.
	if (root == NULL)
		return;

	//Traverse to the left subtree.
	display_tree (root->left);

	//Print the root data.
	printf ("%d ", root->data);

	//Traverse to the right subtree.
	display_tree (root->right);
}

//convertbtToDLL() will convert the given Binary tree to corresponding Double LL.
void convertbtToDLL (struct node* node, struct node** head, struct node** tail)
{
	//Checks whether node is NULL.
	if (node == NULL)
		return;

	//Convert Left Sub-tree to DLL.
	convertbtToDLL (node->left, head, tail);
	
	//If list is empty, Add 'node' as Head of the DLL.
	if (*head == NULL)
	{
		//Both Head and Tail will point to 'node'.
		*head = *tail = node;
	}
	//Otherwise, add 'node' to the end of the DLL.
	else
	{
		//'node' will be added after Tail such that Tail's Right will point to 'node'.
		(*tail)->right = node;
		
		//'node' Left will point to Tail.
		node->left = *tail;
		
		//'node' will become new Tail.
		*tail = node;
	}
	
	//Convert Right Sub-tree to DLL.
	convertbtToDLL (node->right, head, tail);
}

//display_LL() will Print out the Nodes of the DLL.
void display_LL (struct node* head)
{
	//Node current will point to Head.
	struct node *current = head;
	
	if(head == NULL)
	{
		printf("List is empty\n");
		return;
	}
	
	printf ("Nodes of generated Double Linked List: \n");
	while (current != NULL)
	{
		//Prints each node by incrementing pointer.
		printf ("%d ", current->data);
		current = current->right;
	}
	printf ("\n");
}

int main()
{
	//Add Nodes to the binary tree.
	root = createNode(10);
	root->left = createNode(5);
	root->right = createNode(20);
	root->right->left = createNode(30);
	root->right->right = createNode(35);
	
	printf ("In Order Traversal of Tree:\n");
	//Displays the Nodes present in the tree.
	display_tree (root);
	printf ("\n");

	//Represents the Head and Tail of the DLL.
	struct node *head, *tail = NULL;
	
	//Converts the given Binary tree to DLL.
	convertbtToDLL (root, &head, &tail);
	
	//Displays the Nodes present in the DLL.
	display_LL (head);
	return 0;
}
