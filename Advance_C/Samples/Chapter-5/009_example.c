#include <stdio.h>

int main()
{
	char str[6];

	/* Not recommended */
	gets(str);
	printf("The string is: %s\n", str);

	return 0;
}
