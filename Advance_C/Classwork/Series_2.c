#include <stdio.h>

int main()
{
    int m,n;
    printf ("Enter the base for which the power series needs to be printed: ");
    scanf ("%d", &m);
    printf ("Enter the power upto which the series needs to be printed: ");
    scanf ("%d", &n);

    int pow = 1;
    for (int i = 1; i <= n; i++)
    {
        pow = pow * m;
        printf ("%d ^ %d = %d\n", m, i, pow);
    }
    return 0;
}
