#if 1
#include <stdio.h>

int add(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int (*fptr)(int, int);

	fptr = add;

	printf("%d\n", fptr(11, 35));
	printf("%d\n", (*fptr)(19, 23));
	//printf("%d\n", *fptr(11, 10));

	return 0;
}
#endif
#if 0
#include <stdio.h>

int add(int num1, int num2)
{
	return num1 + num2;
}
void foo(int *fp)
{
	;
}
int main()
{
	foo(add);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int add(int num1, int num2)
{
	return num1 + num2;
}
void foo(int (*fp)(int, int))
{
	;
}
int main()
{
	foo(add);
	return 0;
}
#endif

