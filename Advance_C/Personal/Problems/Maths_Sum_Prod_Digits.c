#include <stdio.h>

int main()
{
    int num;
    printf ("Enter the number whose digits Sum and Product needs to be calculated = ");
    scanf ("%d", &num);

    int sum = 0, prod = 1, orig = num, rem;
    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        prod *= rem;
        num /= 10;
    }

    printf ("Sum of the Digits of the number %d = %d.\n", orig, sum);
    printf ("Product of the Digits of the number %d = %d.\n", orig, prod);
    return 0;
}
