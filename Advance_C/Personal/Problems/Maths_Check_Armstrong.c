#include <stdio.h>

int count_digits (int n, int c)
{
    if (n == 0)
        return c;
    else
        return (count_digits ((n / 10), (c + 1)));
}

int main()
{
    int num;
    printf ("Enter the number that needs to be checked for Armstrong = ");
    scanf ("%d", &num);

    int n = count_digits (num, 0);
    printf ("Count of Digits for %d = %d.\n", num, n);

    int rem, sum = 0, orig = num;
    while (num != 0)
    {
        rem = num % 10;
        int pow = 1;
        for (int i = 1; i <= n; i++)
        {
            pow = pow * rem;
        }
        sum += pow;
        num /= 10;
    }

    if (orig == sum)
    {
        printf ("The Number %d and Sum %d are Equal. Hence, Armstrong.\n", orig, sum);
    }
    else
    {
        printf ("The Number %d and Sum %d are Equal. Hence, not Armstrong.\n", orig, sum);
    }
    return 0;
}
