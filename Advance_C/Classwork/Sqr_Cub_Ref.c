#include <stdio.h>

void sqr_cub (int a, int* sqr, int* cub)
{
    *sqr = a * a;
    *cub = a * a * a;
}

int main()
{
    int a, sqr, cub;
    printf ("Enter the number: ");
    scanf ("%d", &a);

    sqr_cub (a, &sqr, &cub);
    printf ("Square of the number is: %d\n", sqr);
    printf ("Cube of the number is: %d\n", cub);
    return 0;
}
