#include <stdio.h>

int main()
{
	printf("%hhX\n", 0xFFFFFFFF);
	printf("%hX\n", 0xFFFFFFFF);
	printf("%lX\n", 0xFFFFFFFFl);
	printf("%llX\n", 0xFFFFFFFFFFFFFFFFll);
	printf("%Lf\n", 1.23456789L);

	return 0;
}
