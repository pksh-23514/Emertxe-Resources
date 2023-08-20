#include <stdio.h>

int main()
{
	int a[5] = {1, 2, 3, 4, 5};

	printf("%u\n", a);
	printf("%u\n", &a[0]);
	printf("%u\n", &a);

	return 0;
}
