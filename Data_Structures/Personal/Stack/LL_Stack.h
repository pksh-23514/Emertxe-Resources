#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
	int data;
	struct stack* next;
} Stack;

#endif
