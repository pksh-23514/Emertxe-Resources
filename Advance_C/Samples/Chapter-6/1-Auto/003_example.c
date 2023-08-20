#include <stdio.h>

int *foo()
{
	int i = 10;
	int *j = &i;

	return j;
}

int main()
{
	int *i;

	i = foo();

	printf("hi\n");
	
	printf("*i %d\n", *i);

	return 0;
}
