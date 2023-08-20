#include <stdio.h>

int main()
{
    static char flag = 1;
    static int n;
    static long sum = 0;
    if (flag == 1)
    {
        printf ("Enter the limit of the Sequence: ");
        scanf ("%d", &n);
        flag = 0;
    }

    if (n > 0)
    {
        sum = sum + n--;
        main();
    }
    else
    {
        printf ("Sum of the Sequence = %ld\n", sum);
    }
    return 0;
}
