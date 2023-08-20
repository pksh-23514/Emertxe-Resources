#include <stdio.h>

int reverse (int n, int r)
{
    if (n == 0)
        return r;
    else
        return (reverse ((n / 10), ((r * 10) + (n % 10))));
}

int main()
{
    int num;
    printf ("Enter the number that needs to be checked for Palindrome = ");
    scanf ("%d", &num);

    int rev = reverse (num, 0);

    if (num == rev)
    {
        printf ("The number %d is reversed as %d. Hence, Palindrome.\n", num, rev);
    }
    else
    {
        printf ("The number %d is reversed as %d. Hence, not Palindrome.\n", num, rev);
    }
    return 0;
}
