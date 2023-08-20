#include <stdio.h>

int *func(void)
{
	static int a = 10;

	return &a;
}

int main()
{
	int *ptr;

	ptr = func();

	printf("Hello World\n");

	printf("*ptr = %d\n", *ptr);

	return 0;
}
