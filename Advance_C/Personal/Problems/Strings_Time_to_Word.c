/*
Name         : Prabhat Kiran
Date         : 28th December 2022
Description  : Convert the Time to Words.
Sample Input : [5, 47] | [3, 00] | [7, 15] | [1, 1] | [5, 45]
Sample Output: Thirteen Minutes to Six | Three o' clock | Quarter past Seven | One Minute past One | Quarter to Six
*/

#include <stdio.h>

char* hour [12] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve"};
char* tens [11] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen", "Twenty"};
char* spec [4] = {"o' clock", "Quarter past", "Half past", "Quarter to"};

void minutes (unsigned int x)
{
	if (x < 10)
	{
		printf ("%s ", hour [x - 1]);
	}
	else if ((x >= 10) && (x < 20))
	{
		printf ("%s ", tens [x % 10]);
	}
	else
	{
		printf ("%s %s ", tens [10], hour [(x % 10) - 1]);
	}
}

int main()
{
	unsigned int hrs, mins;
	printf ("Enter the Hours (between 1 to 12): ");
	scanf ("%u", &hrs);
	printf ("Enter the Minutes (between 0 to 59): ");
	scanf ("%u", &mins);

	if (mins <= 30)
	{
		if (mins == 0)
		{
			printf ("%s %s", hour [hrs - 1], spec [0]);
		}
		else 
		{
			if ((mins == 15) || (mins == 30))
			{
				printf ("%s ", spec [mins / 15]);
			}
			else
			{
				minutes (mins);
				if (mins > 1)
					printf ("Minutes past ");
				else
					printf ("Minute past ");
			}

			printf ("%s", hour [hrs - 1]);
		}
	}
	else
	{
		hrs = hrs + 1;

		if (mins == 45)
		{
			printf ("%s ", spec [mins / 15]);
		}
		else
		{
			mins = 60 - mins;
			minutes (mins);
			if (mins > 1)
				printf ("Minutes to ");
			else
				printf ("Minute to ");
		}

		printf ("%s", hour [hrs - 1]);
	}
	printf ("\n");

	return 0;
}
