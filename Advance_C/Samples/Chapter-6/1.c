#include <stdio.h>
#include <unistd.h>
void foo();
void foo1();
int x;
int main()
{
		while (1)
		{
				foo1();
				x++;
				printf("x = %d\n", x);
				sleep(1);
		}
		return 0;
}
void foo()
{
		printf("Inside FOO x = %d\n", x);
}
