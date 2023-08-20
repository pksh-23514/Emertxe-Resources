/*
Name         : Prabhat Kiran
Date         : 03rd November 2022
Description  : Reverse the Sentence but retain the Words of the Sentence in Original form.
Sample Input : Hi....Hello...how.are..you
Sample Output: you..are.how...Hello....Hi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Stack Definition */
typedef struct stack
{
	char str [50];
	struct stack* link;
} Stack;

/* Push Operation */
int push (Stack** top, char* word)
{
	Stack* new = (Stack*) malloc (sizeof (Stack));
	if (new == NULL)
		return 0;

	strncpy (new->str, word, (strlen (word) + 1));
	new->link = *top;
	*top = new;
	return 1;
}

/* Pop Operation */
int pop (Stack** top, char* word)
{
	if (*top == NULL)
		return 0;

	Stack* del = *top;
	strncpy (word, del->str, (strlen (del->str) + 1));
	*top = (*top)->link;
	free (del);
	return 1;
}

int main()
{
	char string [500];
	printf ("Enter the String to be Reversed (Word by Word): ");
	scanf ("%[^\n]", string);

	Stack* top = NULL;
	char buff [50] = {'\0'};				//To store the individual Words as the Buffer.
	int i = 0, j = 0, ret, count = 0;
	while (string [i] != '\0')				//The loop shall run till all the Characters of the String are read.
	{
		if (string [i] == '.')				//If the '.' (delimiter) is encountered, the accumulated string in 'buff' (even if it is Empty) shall be pushed on the Stack.
		{
			count++;						//To count the number of '.' (delimiter) in the String.
			//printf ("Pushed Words: %s\n", buff);
			ret = push (&top, buff);		//Push the accumulated Word onto the Stack.
			if (ret == 0)					//Error Handling.
			{
				printf ("Unable to push the Word onto the Stack.\n");
				return 0;
			}
			j = 0;							//Clear the Buffer index for the next Word to be stored.
			memset (buff, '\0', 50);		//Clear the Buffer for the next Word to be stored.
		}
		else	//If the Delimiter is not reached, add the characters to the Buffer.
		{
			buff [j] = string [i];
			j++;
		}
		i++;
	}

	if (strlen (buff) != 0)					//To check if any word is left in the Buffer after the loop terminates. If present, push it on the Stack.
	{
		//printf ("Pushed Words: %s\n", buff);
		ret = push (&top, buff);			//Push the remaining Word onto the Stack.
		if (ret == 0)						//Error Handling.
		{
			printf ("Unable to push the Word onto the Stack.\n");
			return 0;
		}
		memset (buff, '\0', 50);			//Clear the 'buff' to store the Words being popped from the Stack.
	}

	memset (string, '\0', 500);				//Clear the 'string' to store the Reversed String.

	while ((ret = pop (&top, buff)) != 0)	//The loop shall run till the Stack becomes empty.
	{
		//printf ("Popped Words: %s\n", buff);
		strncat (string, buff, (strlen (buff) + 1));

		if (count-- > 0)					//Based on the Count of the '.' (delimiter); the same quantity is added back to the String.
			strncat (string, ".", 2);
	}

	printf ("The Reversed String is: %s\n", string);
	return 0;
}
