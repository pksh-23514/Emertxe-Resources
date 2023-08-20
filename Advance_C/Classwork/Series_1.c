#include <stdio.h>

int main()
{
    int limit;
    printf ("Enter the power upto which the series needs to be printed: ");
    scanf ("%d", &limit);
    
    int pow=1;
    for (int i = 1; i <= limit; i++)
    {
        pow = pow * 2;
        printf ("2 ^ %d = %d\n", i, pow);
    }
    return 0;
}
