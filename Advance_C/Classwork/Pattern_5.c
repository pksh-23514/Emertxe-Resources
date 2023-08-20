#include <stdio.h>

int main()
{
    int n;
    printf ("Enter the number of lines the pattern needs to be printed: ");
    scanf ("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n-i); j++)
        {
            printf ("  ");
        }
        for (int k = 1; k <= ((2*i) - 1); k++)
        {
            printf ("* ");
        }
        printf ("\n");
    }
    for (int i = 1; i <= (n-1); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf ("  ");
        }
        for (int k = 1; k <= ((2 * (n - i)) - 1); k++)
        {
            printf ("* ");
        }
        printf ("\n");
    }
    return 0;
}
