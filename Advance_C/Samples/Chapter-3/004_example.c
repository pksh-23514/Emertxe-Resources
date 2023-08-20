#if 0
#include <stdio.h>

int main()
{
	int number = 10;
	int *ptr;

	ptr = &number;

	printf("number contains %d\n", number);
	printf("*ptr contains %d\n", *ptr);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int number = 10;
	int *ptr;

	ptr = &number;
	printf("Before\n");
	printf("number contains %d\n", number);
	printf("*ptr contains %d\n\n", *ptr);

	number = 100;
	
	printf("After\n");
	printf("number contains %d\n", number);
	printf("*ptr contains %d\n", *ptr);

	return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
	int number = 10;
	int *ptr;

	ptr = &number;
	printf("Before\n");
	printf("number contains %d\n", number);
	printf("*ptr contains %d\n\n", *ptr);

	*ptr = 100;
	printf("After\n");
	printf("number contains %d\n", number);
	printf("*ptr contains %d\n", *ptr);

	return 0;
}
#endif








