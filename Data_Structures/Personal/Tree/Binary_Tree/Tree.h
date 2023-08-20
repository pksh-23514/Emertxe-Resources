#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
	struct tree* left;
	int data;
	struct tree* right;
} Tree;

#endif
