#include "Stack.h"

void initialize (Stack* s, int size)
{
	s->capacity = size;
	s->top = -1;
	s->stack = (int*) malloc (sizeof (int) * size);
}

int enqueue (Stack* s, int data)
{
	if (s->top == (s->capacity - 1))
		return -1;

	s->top += 1;
	s->stack [s->top] = data;
	return 1;
}

int dequeue (Stack* s1, Stack* s2, int* data)
{
	if ((s1->top == -1) && (s2->top == -1))
		return -1;

	int ret;

	if (s2->top == -1)
	{
		while (s1->top > -1)
		{
			enqueue (s2, s1->stack [s1->top]);
			s1->top -= 1;
		}
	}

	*data = s2->stack [s2->top];
	s2->top -= 1;
	return 1;
}
