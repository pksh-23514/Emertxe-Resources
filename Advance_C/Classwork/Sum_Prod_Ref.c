#include <stdio.h>

void opt (int a, int b, int* s, int* p)
{
    *s = a + b;
    *p = a * b;
}

int main()
{
    int a, b, sum, prod;
    printf ("Enter the numbers: ");
    scanf ("%d %d", &a, &b);

    opt (a, b, &sum, &prod);
    printf ("Sum of %d and %d is %d\n", a, b, sum);
    printf ("Product of %d and %d is %d\n", a, b, prod);
    return 0;
}
