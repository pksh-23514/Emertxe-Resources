#include <stdio.h>

float temp_F_to_C (float);

int main ()
{
    float temp;
    printf ("Enter the Temperature in Fahrenheit: ");
    scanf ("%f", &temp);

    printf ("The Temperature in Celsius is: %g\n", temp_F_to_C (temp));
    return 0;
}

float temp_F_to_C (float temp)
{
    return ((5 * (temp - 32)) / 9);
}
