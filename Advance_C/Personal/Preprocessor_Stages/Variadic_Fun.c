#include <stdio.h>
#include <stdarg.h>

int sum (int c, ...)
{
    va_list aptr;
    va_start(aptr, c);
    int sum = 0;
    for (int i = 1; i <= c; i++)
    {
        sum += va_arg(aptr, int);
    }
    va_end(aptr);
    return sum;
}

int main()
{
    int ret = sum (3, 1, 4, 5);
    printf ("Sum = %d\n", ret);
    return 0;
}
