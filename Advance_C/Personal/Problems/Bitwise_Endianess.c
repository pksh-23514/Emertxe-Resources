#include <stdio.h>

int main()
{
    int n;
    printf ("Enter the size: ");
    scanf ("%d", &n);

    switch (n)
    {
        case 2:
            {
                short i;
                printf ("Enter any number in Hexadecimal: ");
                scanf ("%hX", &i);
                unsigned char* ch = (unsigned char*) &i;
                i = (((short) *ch << 8) | (short) *(ch + 1));
                printf ("After conversion: %hX\n", i);
            }
            break;
        case 4:
            {
                int i;
                printf ("Enter any number in Hexadecimal: ");
                scanf ("%X", &i);
                unsigned char* ch = (unsigned char*) &i;
                i = (((int) *ch << 24) | ((int) *(ch + 1) << 16) | ((int) *(ch + 2) << 8) | (int) *(ch + 3));
                printf ("After conversion: %X\n", i);
            }
            break;
        default: printf ("Enter the size of input as 2 or 4.\n");
    }
    return 0;
}
