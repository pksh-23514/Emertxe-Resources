#if 1
#include <stdio.h>

int main()
{
    int num;
    printf ("Enter the number whose bits are to be reversed: ");
    scanf ("%d", &num);

    int rev = 0;
    for (int i = 0; i < 32; i++)
    {
        if (num & (1 << i))
        {
            rev |= (1 << (31 - i));
        }
    }
    printf ("The original number is : %X\n", num);
    printf ("The reversed number is : %X\n", rev);
    return 0;
}
#endif
