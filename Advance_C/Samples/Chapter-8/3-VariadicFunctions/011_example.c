#if 0
#include <stdio.h>
#include <stdarg.h>

int add(int count, ...);
int main()
{
	int ret;

	ret = add(3, 2, 4, 4);
	printf("Sum is %d\n", ret);

	ret = add(5, 3, 3, 4, 5, 10);
	printf("Sum is %d\n", ret);

	return 0;
}

int add(int count, ...)
{
	va_list ap;
	int iter, sum;

	/* Initilize the arg list */
	va_start(ap, count);

	sum = 0;
	for (iter = 0; iter < count; iter++)
	{
		/* Extract args */
		sum += va_arg(ap, int);
	}

	/* Cleanup */
	va_end(ap);

	return sum;
}
#endif
#if 0
#include <stdio.h>
#include <stdarg.h>

int add(int count, ...);
int main()
{
	int ret;

	ret = add(5, 2, 4, 4);
	printf("Sum is %d\n", ret);
	//printf("x =  %d, y = %c\n", 10);
	
	return 0;
}

int add(int count, ...)
{
	va_list ap;
	int iter, sum;

	/* Initilize the arg list */
	va_start(ap, count);

	sum = 0;
	for (iter = 0; iter < count; iter++)
	{
		/* Extract args */
		sum += va_arg(ap, int);
	}

	/* Cleanup */
	va_end(ap);

	return sum;
}
#endif
#if 0
#include <stdio.h>
#include <stdarg.h>

int add(int count, ...);
int main()
{
	int ret;

	ret = add(5, 2, 4, 4, 6, 8, 9, 7, 5, 66);
	printf("Sum is %d\n", ret);
	//printf("x =  %d, y = %c\n", 10);
	
	return 0;
}

int add(int count, ...)
{
	va_list ap;
	int iter, sum;

	/* Initilize the arg list */
	va_start(ap, count);

	sum = 0;
	for (iter = 0; iter < count; iter++)
	{
		/* Extract args */
		sum += va_arg(ap, int);
	}

	/* Cleanup */
	va_end(ap);

	return sum;
}
#endif
#if 1
#include <stdio.h>
#include <stdarg.h>

int main()
{
	printf("x =  %d, y = %c\n", 10);
	
	return 0;
}

#endif

