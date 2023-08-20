#include <stdio.h>

int main()
{
    int num;
    printf ("Enter the number to checked: ");
    scanf ("%d", &num);

    int rem = 0, rev = 0, orig = num;

    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    
    if (rev == orig)
    {
        printf ("%d is a Palindrome number.\n", orig);
    }
    else
    {
        printf ("%d is not a Palindrome number.\n", orig);
    }
    return 0;
}
