#ifndef DLL_H
#define DLL_H

#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
} Node;

typedef enum {fail, success} Status;

#endif
