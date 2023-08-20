#include <stdio.h>

int main()
{
    int n;
    printf ("Enter the number of lines the pattern needs to be printed: ");
    scanf ("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            printf ("  ");
        }
        for (int k = i; k <= ((2 * i) - 1); k++)
        {
            printf ("%d ", k);
        }
        for (int k = ((2 * i) - 1); k > i;)
        {
            k = k - 1;
            printf ("%d ", k);
        }
        printf ("\n");
    }
    return 0;
}
