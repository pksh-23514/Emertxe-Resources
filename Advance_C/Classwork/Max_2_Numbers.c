#include <stdio.h>

int main()
{
    int a,b;
    printf ("Enter the first number: ");
    scanf ("%d", &a);
    printf ("Enter the second number: ");
    scanf ("%d", &b);
    
    if (a > b)
    {
        printf ("The greater of the 2 numbers is: %d\n", a);
    }
    else
    {
        printf ("The greater of the 2 numbers is: %d\n", b);
    }
    return 0;
}
