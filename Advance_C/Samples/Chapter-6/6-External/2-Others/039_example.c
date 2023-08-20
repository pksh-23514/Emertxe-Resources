#if 0
#include <stdio.h>
int main()
{
	int x;
	{
		int x = 10;
		{
			extern int x;
			printf("x %d\n", x);
		}
		printf("x %d\n", x);
	}
	printf("x %d\n", x);

	return 0;
}
int x = 20;
#endif

#if 0
#include <stdio.h>
int main()
{
	int x;
	{
		int x = 10;
		{
			extern int x;
			printf("x %d\n", x);
		}
		printf("x %d\n", x);
	}
	printf("x %d\n", x);

	return 0;
}
static int x = 20;
#endif
#if 0
#include <stdio.h>
static int x = 20;
int main()
{
	int x;
	{
		int x = 10;
		{
			extern int x;
			printf("x %d\n", x);
		}
		printf("x %d\n", x);
	}
	printf("x %d\n", x);

	return 0;
}
#endif

#if 1
#include <stdio.h>
int x = 20;
int main()
{
	int x;
	{
		int x = 10;
		{
			extern int x;
			printf("x %d\n", x);
		}
		printf("x %d\n", x);
	}
	printf("x %d\n", x);

	return 0;
}
#endif

