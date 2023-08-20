#include <stdio.h>
#include <stdbool.h>    //This library is specifically required to be included if you have to perform boolean operations inside your code.

bool check (int n)
{
    if (n & 01)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int n;
    printf ("Enter the number for checking Odd or Even: ");
    scanf ("%d", &n);
    bool res = check (n);
    if (res == true)
    {
        printf ("%d is an Even number\n", n);
    }
    else
    {
        printf ("%d is an Odd number\n", n);
    }
    return 0;
}
