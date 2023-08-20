#include <stdio.h>
#include <math.h>

int main()
{
    const long double pi = acosl (-1);
    float f1 = 22/7;
    double d1 = 22/7;
    float f2 = 22.0/7.0;
    double d2 = 22.0/7.0;

    printf ("f1 = %f\n", f1);
    printf ("d1 = %lf\n", d1);
    printf ("f2 = %0.22f\n", f2);
    printf ("d2 = %0.22lf\n", d2);
    printf ("pi = %0.22Lf\n", pi);

/*
The precision of floating-point numbers should be measured in binary digits, not decimal digits.
This is because computers operate on binary numbers, and a binary fraction can only approximate a decimal fraction.
Language lawyers will say that the exact width of a float is unspecified by the C standard and therefore implementation-dependent.
But on any platform you are likely to encounter a C float means an IEEE754 single-precision number.
IEEE754 specifies that a floating point number is in scientific notation: (-1) s×2^e×m : where s is one bit wide, e is eight bits wide, and m is twenty three bits wide.
Mathematically, m is 24 bits wide because it's always assumed that the top bit is 1.
So, the maximum number of decimal digits that can be approximated with this representation is: log10(2^24) = 7.22.
That approximates "seven significant decimal digits", hence precision by float is "6-decimal places" and an "Exponent ranging from 2^-126 to 2^127".
*/
    return 0;
}
