#include <stdio.h>

void swap (void* a, void* b, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(char*) (a + i) = *(char*) (a + i) ^ *(char*) (b + i);
        *(char*) (b + i) = *(char*) (a + i) ^ *(char*) (b + i);
        *(char*) (a + i) = *(char*) (a + i) ^ *(char*) (b + i);
    }
}

int main()
{
    {
        printf ("\nChar Swap:\n");
        char a = 'A', b = 'B';
        printf ("Before Swapping : %c\t%c\n", a, b);
        swap (&a, &b, (int) sizeof (a));
        printf ("After Swapping  : %c\t%c\n", a, b);
    }
    {
        printf ("\nShort Int Swap\n");
        short a = 0x1234, b = 0xabcd;
        printf ("Before Swapping : %hx\t%hx\n", a, b);
        swap (&a, &b, (int) sizeof (a));
        printf ("After Swapping  : %hx\t%hx\n", a, b);
    }
    {
        printf ("\nInt Swap:\n");
        int a = 0x12345678, b = 0xffffffff;
        printf ("Before Swapping : %x\t%x\n", a, b);
        swap (&a, &b, (int) sizeof (a));
        printf ("After Swapping  : %x\t%x\n", a, b);
    }
    {
        printf ("\nFloat Swap:\n");
        float a = 23.256f, b = 256.256f;
        printf ("Before Swapping : %a\t%a\n", a, b);
        swap (&a, &b, (int) sizeof (a));
        printf ("After Swapping  : %a\t%a\n", a, b);
    }
    {
        printf ("\nLong Swap:\n");
        long a = 0x0123456789abcdef, b = 0xffffffffffffffff;
        printf ("Before Swapping : %lx\t%lx\n", a, b);
        swap (&a, &b, (int) sizeof (a));
        printf ("After Swapping  : %lx\t%lx\n", a, b);
    }
    {
        printf ("\nDouble Swap:\n");
        double a = 123.456789, b = 0.235146;
        printf ("Before Swapping : %a\t%a\n", a, b);
        swap (&a, &b, (int) sizeof (a));
        printf ("After Swapping  : %a\t%a\n", a, b);
    }
    return 0;
}
