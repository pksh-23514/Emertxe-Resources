#include <stdio.h>

int main()
{
	char option = 'A';
	int age = 12;
	float height = 12.5;
	
	printf("The size of char is %zu\n", sizeof(char));
	printf("The size of int is %zu\n", sizeof(int));
	printf("The size of float is %zu\n\n", sizeof(float));
	
	printf("The size of option is %zu\n", sizeof(option));
	printf("The size of age is %zu\n", sizeof(age));
	printf("The size of height %zu\n\n", sizeof(height));

#if 1
	printf("The size of 'A' is %zu\n", sizeof('A'));
	printf("The size of 12 is %zu\n", sizeof(12));
	printf("The size of 12.5 is %zu\n\n", sizeof(12.5));
#endif	
	return 0;
}
