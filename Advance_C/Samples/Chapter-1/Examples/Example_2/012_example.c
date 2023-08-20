#if 0
#include <stdio.h>

int *func(void)
{
	int a = 10;

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
#endif

#if 0
#include <stdio.h>

int *func(void)
{
	int a = 10;
	int *p = &a;
	return p;
}

int main()
{
	int *ptr;

	ptr = func();

	printf("Hello World\n");

	printf("*ptr = %d\n", *ptr);

	return 0;
}
#endif

#if 1
#include <stdio.h>

int *func(void)
{
	int a = 10;
	int *p = &a;
	return p;
}

int main()
{
	int *ptr;

	ptr = func();

	printf("*ptr = %d\n", *ptr);

	return 0;
}
#endif

