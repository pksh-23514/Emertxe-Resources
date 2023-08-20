#ifndef SLL_H
#define SLL_H

#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
} Node;

typedef enum {fail, success} Status;

#endif
