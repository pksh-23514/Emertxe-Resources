#include <stdio.h>

int sum_digits (int n, int s)
{
    if (n == 0)
        return s;
    else
        return (sum_digits ((n / 10), (s + (n % 10))));
}

int main()
{
    int num;
    printf ("Enter the number whose Sum of digits need to be printed = ");
    scanf ("%d", &num);

    int sum = sum_digits (num, 0);
    printf ("The Sum of the Digits of %d is = %d.\n", num, sum);
    return 0;
}
