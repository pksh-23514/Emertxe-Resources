#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
	unsigned int capacity;
	int front;
	int rear;
	int count;
	int* queue;
} Queue;

#endif
