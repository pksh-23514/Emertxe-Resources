#include "LL_Queue.h"

int enqueue (Queue** front, Queue** rear, int data)
{
	Queue* new = (Queue*) malloc (sizeof (Queue));
	if (new == NULL)
		return 0;

	new->data = data;

	if (*front == NULL)
	{
		*front = *rear = new;
		new->next = new;
		return 1;
	}

	(*rear)->next = new;
	new->next = *front;
	*rear = new;
	return 1;
}

int dequeue (Queue** front, Queue** rear, int* data)
{
	if (*front == NULL)
		return 0;

	if ((*front)->next == *front)
	{
		*data = (*front)->data;
		free (*front);
		*front = *rear = NULL;
		return 1;
	}

	*data = (*front)->data;
	*front = (*front)->next;
	free ((*rear)->next);
	(*rear)->next = *front;
	return 1;
}

void print (Queue* front, Queue* rear)
{
	if (front == NULL)
		printf ("Empty Queue.\n");

	while (front)
	{
		printf ("%d ", front->data);
		front = front->next;
		if (rear->next == front)
			break;
	}
}

int main()
{
	Queue* front = NULL;
	Queue* rear = NULL;
	int ret, value;

	/* Display Operation */
	print (front, rear);

	/* Enqueue Operation */
	for (int i = 1; i <= 5; i++)
	{
		printf ("Enter the Element to be Pushed on the Stack: ");
		scanf ("%d", &value);
		ret = enqueue (&front, &rear, value);
		if (ret == 0)
			printf ("Unable to Enqueue the Element on the Queue.\n");
		//There is no Queue Overflow Scenarion in case of LL Implementation as you can Create as many Number of Nodes as your Memory permits.
	}

	/* Display Operation */
	printf ("Queue Elements: ");
	print (front, rear);
	printf ("\n");

	/* Dequeue Operation with Underflow */
	for (int i = 1; i <= 6; i++)
	{
		ret = dequeue (&front, &rear, &value);
		if (ret == 0)
			printf ("Queue Underflow Scenario occured.\n");
		else
			printf ("Element to be Dequeued from the Queue: %d\n", value);
	}
	return 0;
}
