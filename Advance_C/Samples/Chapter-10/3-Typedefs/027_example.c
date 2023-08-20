#include <stdio.h>

typedef int array_of_100[100];

int main()
{
	array_of_100 array;

	printf("%zu\n", sizeof(array));

	array[0] = 12;

	printf("%d\n", array[0]);

	return 0;
}
