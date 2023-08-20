#include <stdio.h>

void percent (float n, int p)
{
    if (p > 100)
        return;
    else
    {
        printf ("Percent = %.2f\n", ((n * p) / 100));
        percent (n, (p + 1));
    }
}

int main()
{
    float num;
    printf ("Enter the number whose 1%% to 100%% needs to be printed = ");
    scanf ("%f", &num);

    percent (num, 1);
    return 0;
}
