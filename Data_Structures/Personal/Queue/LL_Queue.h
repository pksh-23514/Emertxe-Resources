#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
	int data;
	struct queue* next;
} Queue;

#endif
