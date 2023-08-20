#include <stdio.h>

int my_strncmp (char* str1, char* str2, unsigned int n);	//Write the function definition for 'my_strncmp' to complete this code.

char* my_strstr (const char* haystack, const char* needle)
{
	int i = 0;

	unsigned int len = 0;
	while (needle [++len] != '\0');

	while (haystack [i] != '\0')
	{
		if (my_strncmp ((haystack + i), needle, len) == 0)
		{
			return (haystack + i);
		}

		i++;
	}

	return NULL;
}

int main()
{
	char str [100], substr [100];
	printf ("Enter the String: ");
	scanf ("%99s", str);
	printf ("Enter the Substring to be searched: ");
	scanf ("%99s", substr);

	char* res = my_strstr (str, substr);
	if (res != NULL)
		printf ("The Substring is present in the String from the point: %s\n", res);
	else
		printf ("The Substring is not present in the String.\n");

	return 0;
}
