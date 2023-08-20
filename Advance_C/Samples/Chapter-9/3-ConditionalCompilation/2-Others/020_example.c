#include <stdio.h>

#define METHOD	3

int main()
{
#if METHOD == 1
	puts("Hello World");
#endif
#if METHOD == 2
	printf("Hello World");
#endif

	return 0;
}

