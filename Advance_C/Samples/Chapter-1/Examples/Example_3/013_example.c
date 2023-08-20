#if 0
#include <stdio.h>

int main()
{
		int iter = 0;

		for (iter = 0 ; iter < 10; iter++ )
		{
				printf("Looped %d times\n", iter);
		}
		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int iter = 0;

		for ( ; iter < 10; )
		{
				printf("Looped %d times\n", iter++);
		}
		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int iter = 0;

		for ( ; ; )
		{
				printf("Looped %d times\n", iter++);
		}
		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int iter;

		for ( iter = 0; iter < 10; iter++);
		{
				printf("Looped %d times\n", iter);
		}
		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		int i, j;

		for ( i = 0; i < 3; i++)
		{
				for (j = 0; j < 3; j++)
				{
						printf("i = %d, j = %d\n", i, j);
				}
		}
		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		int i, j;

		for ( i = 1; i <= 5; i++)
		{
				for (j = 1; j <= 5; j++)
				{
						printf("* ");
				}
				printf("\n");
		}
		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int i, j;

		for ( i = 1; i <= 5; i++)
		{
				for (j = 1; j <= i; j++)
				{
						printf("* ");
				}
				printf("\n");
		}
		return 0;
}
#endif
#if 1
#include <stdio.h>

int main()
{
		int i, j;

		for ( i = 5; i >= 1; i--)
		{
				for (j = 1; j <= i; j++)
				{
						printf("* ");
				}
				printf("\n");
		}
		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		int iter = 0;

		for ( ; iter < 10; )
				printf("Looped %d times\n", iter++);
		printf("Emertxe\n");
		return 0;
}
#endif
















