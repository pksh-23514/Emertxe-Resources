#include <stdio.h>

int main()
{
	int a[5] = {1, 2, 3, 4, 5};

	printf("before increment\n");
	printf("%u\n", a);
	printf("%u\n", &a[0]);
	printf("%u\n\n", &a);
	
	printf("After increment\n");
	printf("%u\n", a + 1);
	printf("%u\n", &a[0] + 1);
	printf("%u\n", &a + 1);

	return 0;
}
