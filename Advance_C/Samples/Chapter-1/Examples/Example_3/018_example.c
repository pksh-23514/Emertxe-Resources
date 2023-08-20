#if 0
#include <stdio.h>

int main()
{
	int num1 = 5;
	int num2 = sizeof(++num1);
	printf("num1 is %d and num2 is %d\n", num1, num2);

	return 0;
}

#endif
#if 0
#include <stdio.h>

int main()
{
	int num1 = 5;
	int num2 = sizeof(num1 = 100);
	printf("num1 is %d and num2 is %d\n", num1, num2);

	return 0;
}

#endif
#if 1
#include <stdio.h>

int main()
{
	int num1 = 5;
	num1 = 100;
	int num2 = sizeof(num1);
	printf("num1 is %d and num2 is %d\n", num1, num2);

	return 0;
}

#endif
















