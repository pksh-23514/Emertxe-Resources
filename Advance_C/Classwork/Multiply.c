#include <stdio.h>

int main()
{
    int a,b;
    printf ("Enter the numbers to be multiplied: ");
    scanf ("%d %d", &a, &b);

    int prod = 0;
    for (int i = 1; i <= a; i++)
    {
        prod = prod + b;
    }
    printf ("The product of the 2 numbers %d * %d = %d\n", a, b, prod);
    return 0;
}
