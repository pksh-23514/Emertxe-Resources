#include <stdio.h>
#include <stdarg.h>

#if 1
int add (int c, int v, ...)
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
    int ret = add (5, 2, 3, 4, 5, 6, 9);
    printf ("Sum = %d\n", ret);
    return 0;
}
/*warning: second parameter of ‘va_start’ not last named argument [-Wvarargs]: va_start(aptr, c);
Sum = 27 (3+4+5+6+9)*/
#endif
