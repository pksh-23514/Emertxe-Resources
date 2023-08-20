#if 0
#include <stdio.h>

int main()
{
	char str[6];

#if 0
	fgets(str, 6, stdin);
	printf("The string is: %s\n", str);

#else
	
	scanf("%5[^\n]", str);
	printf("The string is: %s\n", str);

#endif
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char *str;
	
	fgets(str, 6, stdin);
	printf("The string is: %s\n", str);

	return 0;
}
#endif
#if 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str = malloc(10);
	
	fgets(str, 10, stdin);
	printf("The string is: %s\n", str);

	return 0;
}
#endif



