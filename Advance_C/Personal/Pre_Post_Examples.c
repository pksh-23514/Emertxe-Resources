#if 1
#include <stdio.h>

int main()
{
    int a = 5;
    printf ("%d %d %d\n", ++a, a++, a++);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x = 5;
    int a = x++ + ++x + x;
    printf ("%d %d\n", a, x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x = 5;
    int a = ++x + ++x + x++ + ++x;
    printf ("%d %d\n", a, x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int num1 = 0;
	printf("%d %d %d %d\n", num1++, num1++, ++num1, ++num1);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int num1 = 5;
	num1 = num1++;
	printf("%d\n", num1);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int num1 = 5;
	num1 = ++num1;
	printf("%d\n", num1);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int num1;
	num1 = 5;
	num1 = num1;
	printf("%d\n", num1);
	return 0;
}
#endif
