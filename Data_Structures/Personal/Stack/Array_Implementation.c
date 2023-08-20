#include "Array_Stack.h"

int initialize (Stack* s, int size)
{
	s->capacity = size;									//To store the Capacity of the Stack.
	s->top = -1;										//To store the Top-most index of the Stack.
	s->stack = (int*) malloc (size * sizeof (int));		//To store the Elements of the Stack.
	if (s->stack == NULL)								//If the memory is not allocated to the Array; return Failure.
		return 0;

	return 1;											//Return Success.
}

int push (Stack* s, int value)
{
	if (s->top == s->capacity - 1)		//If the Stack Overflow condition occurs; the Element cannot be pushed on the Stack.
		return 0;						//Return Failure.

	s->top += 1;						//Update the Top-most index to the position where the Element shall be inserted.
	s->stack [s->top] = value;			//Update the 'value' on the Stack.
	return 1;							//Return Success.
}

int pop (Stack* s)
{
	if (s->top == -1)					//If the Stack Underflow condition occurs; the Element cannot be popped out from the Stack.
		return 0;						//Return Failure.

	s->top -= 1;						//Update the Top-most index to one position below signifying that the Index has become empty for storing another Element.
	return 1;							//Return Success.
}

int peek (Stack s, int* value)
{
	if (s.top == -1)					//If the Stack Underflow condition occurs; the Top-most Element cannot be displayed.
		return 0;						//Return Failure.

	*value = s.stack [s.top];			//Update the 'value' with the Top-most Element on the Stack.
	return 1;							//Return Success.
}

void peep (Stack s)
{
	if (s.top == -1)					//If the Stack is empty; no Element can be displayed.
		printf ("Empty Stack.\n");

	while (s.top > -1)					//The loop shall run till all the Elements of the Stack are displayed.
	{
		printf ("%d ", s.stack [s.top--]);
	}
}

int main()
{
	Stack stk;
	int ret, size, value;

	/* Read the Size of the Stack */
	printf ("Enter the Size of the Stack: ");
	scanf ("%d", &size);

	/* Initialize Stack */
	ret = initialize (&stk, size);
	if (ret == 0)
		printf ("Initialization Unsuccessful.\n");
	else
		printf ("Initialization Successful.\n");

	/* Display Operation */
	peep (stk);

	/* Push Operation with Overflow */
	for (int i = 0; i <= size; i++)
	{
		printf ("Enter the Element to be Pushed on the Stack: ");
		scanf ("%d", &value);
		ret = push (&stk, value);
		if (ret == 0)
			printf ("Stack Overflow Scenario occured.\n");
	}

	/* Display Operation */
	printf ("Stack Elements: ");
	peep (stk);
	printf ("\n");

	/* Peek & Pop Operation */
	for (int i = 0; i <= size; i++)
	{
		ret = peek (stk, &value);
		if (ret == 0)
			printf ("Stack Underflow Scenario occured.\n");
		else
		{
			printf ("Element to be Popped from the Stack: %d\n", value);
			ret = pop (&stk);
			if (ret == 0)
				printf ("Stack Underflow Scenario occured.\n");
			else
				printf ("Element Pop Successful.\n");
		}
	}
	return 0;
}
