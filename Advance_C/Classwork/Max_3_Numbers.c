#include <stdio.h>

int main()
{
    int a,b,c;
    printf ("Enter the numbers:\n");
    scanf ("%d %d %d", &a, &b, &c);
    
    if (a > b)
    {
        if (a > c)
        {
            printf ("The greatest of the 3 numbers is %d.\n", a);
        }
        else
        {
            printf ("The greatest of the 3 numbers is %d.\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf ("The greatest of the 3 numbers is %d.\n", b);
        }
        else
        {
            printf ("The greatest of the 3 numbers is %d.\n", c);
        }
    }
    return 0;
}
