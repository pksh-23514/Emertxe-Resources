#if 1
#include <stdio.h>

int main()
{
	if (sizeof(char *) == sizeof(long long *))
	{
		printf("Yes its Equal\n");
	}
#if 1

	printf("size of char * = %zu\n", sizeof (char *));
	printf("size of int * = %zu\n", sizeof (int *));
	printf("size of float * = %zu\n", sizeof (float *));
	printf("size of double * = %zu\n", sizeof (double *));
	printf("size of long int * = %zu\n", sizeof (long int *));
	printf("size of long long int * = %zu\n", sizeof (long long int *));
	printf("size of void * = %zu\n", sizeof (void *));
#endif
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{

	printf("size of char * = %zu\n", sizeof (char *));
	printf("size of int * = %zu\n", sizeof (int *));
	printf("size of float * = %zu\n", sizeof (float *));
	printf("size of double * = %zu\n", sizeof (double *));
	printf("size of long double * = %zu\n", sizeof (long double *));
	printf("size of long int * = %zu\n", sizeof (long int *));
	printf("size of long long int * = %zu\n", sizeof (long long int *));
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int *ip;
		char *cp;
		float *fp;
		double *dp;

	printf("size of char * = %zu\n", sizeof (cp));
	printf("size of int * = %zu\n", sizeof (ip));
	printf("size of float * = %zu\n", sizeof (fp));
	printf("size of double * = %zu\n", sizeof (dp));
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int *ip;
		char ch;
		ip = &ch;
		printf("%p, %p\n", ip, &ch);
		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		int *ip;
		char *cp;
		float *fp;
		double *dp;

	printf("size of ip = %zu\n", sizeof (ip));
	printf("size of *ip = %zu\n\n", sizeof (*ip));
	printf("size of cp = %zu\n", sizeof (cp));
	printf("size of *cp = %zu\n\n", sizeof (*cp));
	printf("size of fp = %zu\n", sizeof (fp));
	printf("size of *fp = %zu\n\n", sizeof (*fp));
	printf("size of dp = %zu\n", sizeof (dp));
	printf("size of *dp = %zu\n", sizeof (*dp));
	return 0;
}
#endif










