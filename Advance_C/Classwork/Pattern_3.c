#include <stdio.h>

int main ()
{
    int n;
    printf ("Enter the number of lines the pattern needs to be printed: ");
    scanf ("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            printf ("%d ", j);
        }
        for (int j = n; j >= 1; j--)
        {
            printf ("%d ", j);
        }
        printf ("\n");
    }
    return 0;
}
