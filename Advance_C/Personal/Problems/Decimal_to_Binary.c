#include <stdio.h>

#if 0
int main()
{
    int n;
    printf ("Enter the decimal number to be converted to Binary: ");
    scanf ("%d", &n);
    
    printf ("The Binary of the Decimal number is: ");
    /*loop = 31, for 32 bits value, 31th bit to 0th bit*/
    for (int i = 31; i >= 0; i--)
    {
        if (n & (1 << i))
            printf ("1 ");
        else
            printf ("0 ");
    }
    printf ("\n");
    return 0;
}
#endif

#if 1
int main()
{
    int n, c = 0;
    printf ("Enter the decimal number to be converted to Binary: ");
    scanf ("%d", &n);
    unsigned int orig = (unsigned) n;   //If the type of 'orig' is signed, the MSB bit will be replaced in the Right shift operation instead of '0' and the loop won't terminate.

    /*To get the minimum number of bits required to store the given Decimal value*/
    while (orig)
    {
        c++;
        orig = orig >> 1;
    }
    printf ("The minimum number of Bits required to store the given Decimal number is = %d\n", c);

    /*loop = (c-1), for 'c'-bits value, (c-1)th bit to 0th bit*/
    printf ("The Binary of the Decimal number is: ");
    for (int i = (c - 1); i >= 0; i--)
    {
        if (n & (1 << i))
            printf ("1 ");
        else
            printf ("0 ");
    }
    printf ("\n");
    return 0;
}
#endif
