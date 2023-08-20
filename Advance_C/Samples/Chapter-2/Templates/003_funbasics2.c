#if 0
#include <stdio.h>
int add_numbers(int num1, int num2);
int main()
{
	int num1 = 10, num2 = 20;
	int sum = 0;

	add_numbers(num1, num2);
	printf("Sum is %d\n", sum);

	return 0;
}

int add_numbers(int num1, int num2)
{
	int sum = 0;

	sum = num1 + num2;

	return sum;
}
#endif
#if 0
#include <stdio.h>
int add_numbers(int num1, int num2);
int main()
{
	int num1 = 10, num2 = 20;

	printf("Sum is %d\n", add_numbers(num1, num2));

	return 0;
}

int add_numbers(int num1, int num2)
{
		int sum = 0;

		sum = num1 + num2;

		return sum;
}
#endif
#if 0
#include <stdio.h>
int add_numbers(int num1, int num2);
int main()
{
	int num1 = 10, num2 = 20;

	printf("Sum is %d\n", add_numbers(num1, num2));

	return 0;
}

int add_numbers(int num1, int num2)
{
		return num1 + num2;
}
#endif


#if 0
#include <stdio.h>
void foo( void );
int main()
{
		foo();
		return 0;
}
void foo(void)
{
		printf("1 Hi\n");
		return ;
		printf("2 Hi\n");
}
#endif
#if 0
#include <stdio.h>
void foo( void );
int main()
{
		foo();
		return 0;
		printf("MAIN Hi\n");
}
void foo(void)
{
		printf("FOO Hi\n");
		return ; // Optional
}
#endif
