#include <stdio.h>

typedef int func (int, int);

func add, sub, mul;

int main()
{
    int a,b;
    printf ("Enter the numbers: ");
    scanf ("%d %d", &a, &b);

    int res;
    res = add (a, b);
    printf ("Sum of %d and %d = %d.\n", a, b, res);
    res = sub (a, b);
    printf ("Difference of %d and %d = %d.\n", a, b, res);
    res = mul (a, b);
    printf ("Multiplication of %d and %d = %d.\n", a, b, res);

    return 0;
}
