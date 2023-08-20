#include <stdio.h>

int main()
{
    int n;
    printf ("Enter the number of lines the pattern needs to be printed: ");
    scanf ("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf ("%d ", j);
        }
        for (int k = 1; k <= (2 * (n - i)); k++)
        {
            printf ("  ");
        }
        for (int l = i; l >= 1; l--)
        {
            printf ("%d ", l);
        }
        printf ("\n");
    }
    return 0;
}
