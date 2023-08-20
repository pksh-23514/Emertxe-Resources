#include <stdio.h>

int x;

int foo()
{
	printf("in foo() x %d\n", x);

	return ++x;
}

int main()
{
	foo();

	printf("in main() x %d\n", x);

	return 0;
}
