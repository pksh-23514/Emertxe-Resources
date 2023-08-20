#if 0
#include <stdio.h>
int main()
{
	printf("%s\n", func()); // Error, invalid use of a function returning void

	return 0;
}

void func(void)
{
	char buff[] = "Hello World";

	return buff; // some compilers might report error in this case
}
#endif
#if 0
#include <stdio.h>
void foo();
int main()
{
		int x;
		x = foo();
		printf("welcome\n");
		return 0;
}
void foo()
{
		return 10;
}
#endif
#if 0
#include <stdio.h>
void foo();
int main()
{
		int x;
		foo();
		printf("welcome\n");
		return 0;
}
void foo()
{
		return 10;
}
#endif
#if 1
#include <stdio.h>
void foo();
int main()
{
		int x;
		foo();
		printf("welcome\n");
		return 0;
}
void foo()
{
		return ;
}
#endif




















