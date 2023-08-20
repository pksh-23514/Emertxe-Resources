#if 0
#include <stdio.h>

int main()
{
    int n = 5;
    printf ("%lu %lu %lu\n", sizeof (int), sizeof n, sizeof 5);     //'()' is required only when using 'sizeof' with 'data-types' i.e. "sizeof (type)".
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    short n = 5;
    printf ("%lu %lu %lu\n", sizeof (short), sizeof n, sizeof 5);   //'5' is converted to integer value through implicit conversion.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    long n = 5;
    printf ("%lu %lu %lu\n", sizeof (long), sizeof n, sizeof 5);    //'5' is converted to integer value through implicit conversion.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char n = 'A';
    printf ("%lu %lu %lu %lu\n", sizeof (char), sizeof n, sizeof 'A', sizeof "A");      //'A' is converted to integer value through ASCII conversion.
    //"A" is a string which in C is treated as a Character array. So, the size will be equal to the number of characters plus one for the Null terminator '\0' at the end of string.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float n = 6.5;
    printf ("%lu %lu %lu\n", sizeof (float), sizeof n, sizeof 6.5);     //'6.5' is converted to double value through implicit conversion.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float n = 6.5;
    printf ("%lu %lu %lu\n", sizeof (float), sizeof n, sizeof 6.5f);    //'6.5f' prevents the implicit conversion of float to double.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    double n = 6.5;
    printf ("%lu %lu %lu\n", sizeof (double), sizeof n, sizeof 6.5);    //'6.5' is converted to double value through implicit conversion.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int n1 = 5;
    int n2 = sizeof (n1++);         //'sizeof' is a Compile-time operator. Therefore, it is as good as '++' doesn't exist only. The statement is treated by the compiler as "sizeof (n1)".
    printf ("%d %d\n", n1, n2);     //'n1' will not get updated due to 'n1++' and therefore shows it's previous value only.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int n1 = 5;
    int n2 = sizeof (++n1);         //'sizeof' is a Compile-time operator. Therefore, it is as good as '++' doesn't exist only. The statement is treated by the compiler as "sizeof (n1)".
    printf ("%d %d\n", n1, n2);     //'n1' will not get updated due to '++n1' and therefore shows it's previous value only.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int n1 = 5;
    int n2 = sizeof (n1 = 100);     //'sizeof' is a Compile-time operator. Therefore, it is as good as '=' doesn't exist only. The statement is treated by the compiler as "sizeof (n1)".
    printf ("%d %d\n", n1, n2);     //'n1' will not get updated due to 'n1 = 100' and therefore shows it's previous value only.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int a = 1;
    double b = 2.0;
    char c = 'A';
    printf ("%lu\n", sizeof (a + b + c));   //The whole expression is converted to data-type with highest precedence by implicit type-casting. 'sizeof' then calculates that type's size.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int n;
    printf ("Enter the array size: ");
    scanf ("%d", &n);
    int a[n];
    printf ("Size of Array is: %lu\n", sizeof (a));
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char ch[100];
    printf ("Enter the String: ");
    scanf ("%s", ch);
    printf ("Size of Array is: %lu\n", sizeof (ch));
    return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
    char* ch;
    printf ("Enter the String: ");
    scanf ("%s", ch);
    printf ("Size of Array is: %lu\n", sizeof (ch));
    return 0;
}
#endif
