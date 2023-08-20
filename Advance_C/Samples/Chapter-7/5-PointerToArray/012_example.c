#include <stdio.h>

int main()
{
	int array[3] = {1, 2, 3};
	int *p1;
	int (*p2)[3];

	p1 = array;
	p2 = &array;

	printf("%u %u\n", p1 + 0, p2 + 0);
	printf("%u %u\n", p1 + 1, p2 + 1);
	printf("%u %u\n", p1 + 2, p2 + 2);

	printf("*p1 %zu\n", sizeof (*p1));
	printf("*p2 %zu\n", sizeof (*p2));
	return 0;
}
