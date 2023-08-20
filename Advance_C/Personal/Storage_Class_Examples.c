#if 0
#include <stdio.h>

int i;
int main()
{
    extern int i;
    if (i == 0)
        printf ("Scope rules\n");
    return 0;
}
#endif

#if 0
#include <stdio.h>

register int x = 10;    //Global variables can't be declared as "register".
int main()
{
    printf ("%d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

auto int x = 10;        //Global variables can't be declared as "auto".
int main()
{
    printf ("%d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int* p;
int main()
{
    printf ("p: %p &p: %p\n", p, &p);
    int i = 0;
    p = &i;
    printf ("i: %p\n", &i);
    printf ("p: %p &p: %p\n", p, &p);
    printf ("*p: %d\n", *p);
    return 0;
}
#endif

#if 0
#include <stdio.h>
    int main()
    {
        register static int i = 10;     //error: multiple storage classes in declaration specifiers.
        i = 11;
        printf("%d\n", i);
        return 0;
    }
#endif

#if 0
#include <stdio.h>
int main()
{
    register auto int i = 10;       //error: multiple storage classes in declaration specifiers.
    i = 11;
    printf("%d\n", i);
    return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
    register const int i = 10;      //error: assignment of read-only variable 'i'.
    i = 11;
    printf("%d\n", i);
    return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
    register int x = 0;
    if (x < 2)
    {
        x++;
        //printf ("%d ", x);        //If you need to check what values of x is getting printed.
        main();                     //The main() will be called infinite times as everytime the 'x' value starts with 0 when main() is called. So, condition is always True.
    }                               //The stack memory will be full after certain recursive calls of main() and it will cause Segmentation fault (core dumped).
}
#endif

#if 0
#include <stdio.h>
void foo(auto int i);           //error: storage class specified for parameter ‘i’
int main()
{
    foo(10);
    return 0;
}
void foo(auto int i)            //error: storage class specified for parameter ‘i’
{
    printf("%d\n", i );
}
#endif

#if 0
#include <stdio.h>

int* fun (int n)
{
    static int x = 0;   //Local variable declared as static.
    x = n;              //Assignment operations can be done any number of time on a static variable.
    return (&x);        //You can return the address of a static variable even though it is local to the function without any error.
//The static variable is stored in the data segment which will continue to exist till the program terminates.
//So, the address of the static variable is available even if the stack frame for the function is destroyed.
}
int main()
{
    int* a = fun (5);
    printf ("%d\n", *a);    //You can access the value of 'x' outside of it's scope through it's address in the data segment.
    //printf ("%d\n", x);   //You cannot access the value of 'x' outside of it's scope directly through it's variable name.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int f (int n)
{
    static int x = 0;
    if (n > 0)
    {
        x = x + 1;
        return (x + f (n-1));     //Until the recursive function call happens, the value of x is not fetched. It is kept in the expression as a variable form only.
//Once, the recursive function call stops and values are returned from the functions, then this expression is evaluated with the latest value of x from the data segment.
//The order of function call and x does not matter in the expression.
    }
    return 0;
}
int main()
{
    int a = 5;
    printf ("%d\n", f(a));
    return 0;
}
#endif

#if 1
#include <stdio.h>

int f (int a)
{
    if (a > 0)
    {
        return (a + f (a-1));
    }
    return 0;
}
int main()
{
    int a = 5;
    printf ("%d\n", f(a));
    return 0;
}
#endif
