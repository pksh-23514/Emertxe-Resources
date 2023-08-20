#include <stdio.h>

int perfect (int n, int i, int s)
{
    if (i == n)
        return s;
    else
    {
        if (n % i == 0)
            s = s + i;
        return (perfect (n, (i + 1), s));
    }
}

int main()
{
    int num;
    printf ("Enter the number to be checked for Perfect = ");
    scanf ("%d", &num);

    int sum = perfect (num, 1, 0);
    if (sum == num)
    {
        printf ("The number %d is equal to Sum of Divisors (except number itself) %d. Hence, Perfect.\n", num, sum);
    }
    else
    {
        printf ("The number %d is not equal to Sum of Divisors (except number itself) %d. Hence, not Perfect.\n", num, sum);
    }
    return 0;
}
