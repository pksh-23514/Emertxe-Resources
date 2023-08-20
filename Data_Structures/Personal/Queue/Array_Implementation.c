#include "Array_Queue.h"

int initialize (Queue* q, int size)
{
	q->capacity = size;									//To store the Capacity of the Queue.
	q->count = 0;										//To store the Count of the Number of Elements in the Queue.
	q->front = q->rear = -1;							//To store the Front and Rear index of the Queue.
	q->queue = (int*) malloc (sizeof (int) * size);		//To store the Elements of the Queue.
	if (q->queue == NULL)								//If the memory is not allocated to the Array; return Failure.
		return 0;

	return 1;											//Return Success.
}

int enqueue (Queue* q, int value)
{
	if (q->count == q->capacity)				//If the Count of Elements in the Queue becomes equal to the Queue Capacity; Overflow Condition occurs.
		return 0;								//Return Failure.

	if (q->front == -1)							//If it is the first Insertion in the Queue; update the Front index of the Queue to the First Element of the Queue.
		q->front += 1;
	q->rear = (q->rear + 1) % q->capacity;		//Update the 'rear' of the Queue to point to the new element in a Circular fashion using '%' operator.
	q->queue [q->rear] = value;					//Update the 'value' on the Rear index of the Queue (Insertion always happens at the Rear end).
	q->count += 1;								//Update the Count of Elements in the Queue by 1.
	return 1;									//Return Success.
}

int dequeue (Queue* q, int* value)
{
	if (q->count == 0)							//If the Count of Elements in the Queue is 0; Underflow Condition occurs.
		return 0;								//Return Failure.

	*value = q->queue [q->front];				//Update the 'value' with the Front index Element of the Queue (Deletion always happens at the Front end).
	q->front = (q->front + 1) % q->capacity;	//Update the 'front' of the Queue to point to the next element in a Circular fashion using '%' operator.
	q->count -= 1;								//Update the Count of Elements in the Queue by -1.
	return 1;									//Return Success.
}

void print (Queue q)
{
	if (q.count == 0)								//If the Queue is empty; no Element can be displayed.
		printf ("Empty Queue.\n");

	while (q.count != 0)							//The loop shall run till all the Elements on the Queue are displayed.
	{
		printf ("%d ", q.queue [q.front]);
		q.front = (q.front + 1) % q.capacity;		//Update the 'front' of the Queue to point to the next element in a Circular fashion using '%' operator.
		q.count -= 1;								//Update the Count of Elements in the Queue by -1.
	}
}

int main()
{
	Queue q;
	int ret, size, value;

	/* Read the Size of the Queue */
	printf ("Enter the Size of the Queue: ");
	scanf ("%d", &size);

	/* Initialize Queue */
	ret = initialize (&q, size);
	if (ret == 0)
		printf ("Initialization Unsuccessful.\n");
	else
		printf ("Initialization Successful.\n");

	/* Display Operation */
	print (q);

	/* Enqueue Operation with Overflow */
	for (int i = 0; i <= size; i++)
	{
		printf ("Enter the Element to be Enqueued on the Queue: ");
		scanf ("%d", &value);
		ret = enqueue (&q, value);
		if (ret == 0)
			printf ("Queue Overflow Scenario occured.\n");
	}
	
	/* Display Operation */
	printf ("Queue Elements: ");
	print (q);
	printf ("\n");

	/* Dequeue Operation with Underflow */
	for (int i = 0; i <= size; i++)
	{
		ret = dequeue (&q, &value);
		if (ret == 0)
			printf ("Queue Underflow Scenario occured.\n");
		else
			printf ("Element Dequeued from the Queue: %d\n", value);
	}
	return 0;
}
