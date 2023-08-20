#include <stdio.h>

int main()
{
    int n;
    printf ("Enter the number of lines the pattern needs to be printed: ");
    scanf ("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf ("%d ", j);
        }
        printf ("\n");
    }
    return 0;
}
