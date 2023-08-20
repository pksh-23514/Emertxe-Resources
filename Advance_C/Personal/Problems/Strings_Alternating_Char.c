/*
Name         : Prabhat Kiran
Date         :
Description  :
Sample Input :
Sample Output:
*/

#include <stdio.h>

int main()
{
	char s [100];
	printf ("Enter the String to be modified to have Alternating Characters: ");
	scanf ("%s", s);

	int i = 0, count = 0;;
	while (s [i] != '\0')
	{
		if (s [i] == s [i+1])
		{
			s [i] = s [i+1];
			s [i+1] = s [i+2];
			i += 1;
			count += 1;
			continue;
		}
		i += 1;
	}

	printf ("The Number of Deletions required are = %d\n", count);

	return 0;
}
