#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
	unsigned int capacity;
	int top;
	int* stack;
} Stack;

#endif
