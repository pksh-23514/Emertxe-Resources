#include <stdio.h>

int main()
{
	unsigned int count1;
	signed int count2;
	unsigned char count3;
	signed char count4;

	printf("count1 is %zu bytes\n", sizeof(unsigned int));
	printf("count2 is %zu bytes\n", sizeof(signed int));
	printf("count3 is %zu bytes\n", sizeof(unsigned char));
	printf("count4 is %zu bytes\n", sizeof(signed char));	

	return 0;
}

