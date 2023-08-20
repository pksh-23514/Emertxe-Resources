#include <stdio.h>

void swap (int* a, int* b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a, b;
    printf ("Enter the numbers: ");
    scanf ("%d %d", &a, &b);

    printf ("Before Swapping: %d %d\n", a, b);
    swap (&a, &b);
    printf ("After Swapping:  %d %d\n", a, b);
    return 0;
}
