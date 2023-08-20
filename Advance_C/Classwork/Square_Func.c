#include <stdio.h>

double square (float);      //Function declaration done before the main() to tell the compiler that about the function 'square' and how to call it.

int main()
{
    float num;
    printf ("Enter the number: ");
    scanf ("%f", &num);

    printf ("The square of the number %g is: %lg\n", num, square (num));
    return 0;
}

double square (float num)   //The actual body of the function is written separately.
{
    return ((double) num * (double) num);
}
