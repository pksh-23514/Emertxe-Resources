#if 0
#include <stdio.h>

int fun (int a, int b)
{
    return a, b;        //Here ',' acts as an operator. So, the statement 'a' is executed as void and the statement 'b' is returned by the function.
}

int main()
{
    int c = fun (10, 12);
    printf ("%d\n", c);     //The variable 'c' receives the value 12 and that is printed on the terminal.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int fun (int a, int b)
{
    return a;       //The first return statement causes the function to return the value of 'a'.
    return b;       //This return statement is not executed.
}

int main()
{
    int c = fun (10, 12);
    printf ("%d\n", c);     //The variable 'c' receives the value 10 and that is printed on the terminal.
    return 0;
}
#endif

#if 0
#include <stdio.h>
//If there is no function declaration and function definition is below main(), the compiler assumes that all the function parameters and the return type of the function is 'int'.
//For all other scenarios like return type float or parameter float or other such combinations will throw error. Even if some cases get compiled without error, they show Undefined behavior.
int main()
{
    int x = 9;
    int a = opt (x);
    printf ("Main: %d\n", a);
    return 0;
}
int opt (int a)     //Implicit int rule requires the functions without prototype to have all 'int' values in parameter or return values.
{
    printf ("Func: %d\n", a);
    return a;
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
        return x + f (n-1);     //Until the recursive function call happens, the value of x is not fetched. It is kept in the expression as a variable form only.
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

#if 0
#include <stdio.h>

int f (int n)
{
    static int x = 0;
    if (n > 0)
    {
        x = x + 1;
        return f (n-1) + x;     //Until the recursive function call happens, the value of x is not fetched. It is kept in the expression as a variable form only.
//Once, the recursive function call stops and values are returned from the functions, then this expression is evaluated with the latest value of x from the data segment.
//The order of the function call and x does not matter in the expression.
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

#if 0
#include <stdio.h>

int main()
{
    void foo(), f();        //The functions are declared inside the main() which is valid.
    f();                    //Before the function call, the functions are declared. So, the compiler does not throw a warning of implicit function declaration.
}
void foo()
{
    printf("2 ");
}
void f()
{
    printf("1 ");
    foo();
}
#endif

#if 0
#include <stdio.h>
int *m();
void main()
{
    int *k = m();
    printf("hello ");
    printf("%d", k[0]);
}
int *m()
{
    int a[2] = {5, 8};
    /*int* p = a;       //In this case, since we are sending the pointer variable 'p' in return; we get hello and some garbage value. It is Undefined behavior.
    return p;*/
    return a;           //If we return directly 'a', this is a the base address of array which is local to function. It causes segmentation fault.
}
#endif

#if 1
#include <stdio.h>
int *m();
void main()
{
    int *k = m();
    printf("%p", k);    //Since, we are not accessing the address of the local array variable, it does not cause segmentation fault. We get some output.
}
int *m()
{
    int a[2] = {5, 8};
    /*int* p = a;       //In this case, since we are sending the pointer variable 'p' in return; we get an address. It is Undefined behavior.
    return p;*/
    return a;           //If we return directly 'a', this is a the base address of array which is local to function. It is Undefined behavior as we get 0 or (nil).
}
#endif

#if 0
#include <stdio.h>

void foo()
{
    return 1;               //The return type mismatch happens as the function declaration shows void return type and we are returning an integer value from the function.
}
int main()
{
    int x = 0;
    x = foo();              //The function return type is void which should not be stored in the variable. There is a type mismatch. The return value should be ignored.
    printf ("%d\n", x);
    return 0;
}
#endif
