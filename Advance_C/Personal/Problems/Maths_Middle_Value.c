#include <stdio.h>

int main()
{
    int a,b,c,mid;
    printf ("Enter the 3 numbers:\n");
    scanf ("%d %d %d", &a, &b, &c);
    
    int x = a-b, y = b-c, z = c-a;
    if (x * y > 0)      //This condition is true only if the order goes on as: 'a > b > c'.
    {
        mid = b;
    }
    else if (y * z > 0)     //This condition is true only if the order goes on as: 'b > c > a'.
    {
        mid = c;
    }
    else        //If both the above conditions are false, then the middle value has to be 'a'.
    {
        mid = a;
    }
    printf ("The middle number of the series %d %d %d is %d\n", a, b, c, mid);
    return 0;
}
