#include <stdio.h>

int main()
{
    int a,b,c,mid;
    printf ("Enter the 3 numbers:\n");
    scanf ("%d %d %d", &a, &b, &c);
    
    if (a > b)
    {
        if (b > c)
        {
            mid = b;
        }
        else if (a > c)
        {
            mid = c;
        }
        else
        {
            mid = a;
        }
    }
    else
    {
        if (a > c)
        {
            mid = a;
        }
        else if (b > c)
        {
            mid = c;
        }
        else
        {
            mid = b;
        }
    }
    printf ("The middle number of the series %d %d %d is %d\n", a, b, c, mid);
    return 0;
}
