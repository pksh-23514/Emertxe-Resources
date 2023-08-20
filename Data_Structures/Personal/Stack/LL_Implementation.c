#include "LL_Stack.h"

int push (Stack** top, int value)
{
	Stack* new = (Stack*) malloc (sizeof (Stack));	//Dynamic memory allocation for the Stack Node.
	if (new == NULL)								//If the memory is not allocated to the particular Node of the Stack; return Failure.
		return 0;									//Return Failure.

	new->data = value;								//Update the 'value' to the Node Data.
	new->next = *top;								//Update the Node Link with the Node pointed by 'top' (Insert at Beginning LL Operation).
	*top = new;										//Update the 'new' as the New 'top' of the Stack.
	return 1;										//Return Success.
}

int pop (Stack** top)
{
	if (*top == NULL)		//If the Stack Underflow condition occurs; the Element cannot be popped out from the Stack.
		return 0;			//Return Failure.

	Stack* del = *top;		//Store the Top-most Node address into a Temporary Variable.
	*top = (*top)->next;	//Update the 'top' to point to the Next Node.
	free (del);				//Free the previous Top-most Node (Delete at Beginning LL Operation).
	return 1;				//Return Success.
}

int peek (Stack* top, int* value)
{
	if (top == NULL)		//If the Stack Underflow condition occurs; the Top-most Element cannot be displayed.
		return 0;			//Return Failure.

	*value = top->data;		//Update the 'value' with the Top-most Element on the Stack.
	return 1;				//Return Success.
}

void peep (Stack* top)
{
	if (top == NULL)					//If the Stack is empty; no Element can be displayed.
		printf ("Empty Stack.\n");

	while (top != NULL)					//The loop shall run till all the Elements of the Stack are displayed.
	{
		printf ("%d ", top->data);
		top = top->next;				//Update the 'top' to point to the Next Node.
	}
}

int main()
{
	Stack* top = NULL;
	int ret, value;

	/* Display Operation */
	peep (top);

	/* Push Operation */
	for (int i = 1; i <= 5; i++)
	{
		printf ("Enter the Element to be Pushed on the Stack: ");
		scanf ("%d", &value);
		ret = push (&top, value);
		if (ret == 0)
			printf ("Unable to Push the Element on the Stack.\n");
		//There is no Stack Overflow Scenarion in case of LL Implementation as you can Create as many Number of Nodes as your Memory permits.
	}

	/* Display Operation */
	printf ("Stack Elements: ");
	peep (top);
	printf ("\n");

	/* Peek and Pop Operation */
	for (int i = 1; i <= 6; i++)
	{
		ret = peek (top, &value);
		if (ret == 0)
			printf ("Stack Underflow Scenario occured.\n");
		else
		{
			printf ("Element to be Popped from the Stack: %d\n", value);
			ret = pop (&top);
			if (ret == 0)
				printf ("Stack Underflow Scenario occured.\n");
			else
				printf ("Element Pop Successful.\n");
		}
	}
	return 0;
}
