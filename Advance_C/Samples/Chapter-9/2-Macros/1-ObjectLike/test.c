#if 0
#include <stdio.h>
#define X 10

int main()
{
		printf("%d\n", X);
		return 0;
}
#endif

#if 0
#include <stdio.h>
#define X 

int main()
{
		printf("%d\n", X);
		return 0;
}
#endif
#if 1
#include <stdio.h>

#define foo(x, y)  x + y

void foo(int x, int y)
{
		return x + y;
}
int main()
{
		foo(10, 20);
		return 0;
}
#endif

















