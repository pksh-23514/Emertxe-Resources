#if 0
#include <stdio.h>

int main()
{
    char ch = -128;
    printf ("%hhu\n", ch);
    printf ("%hhd\n", ch);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char ch = -300;
    printf ("%hhu\n", ch);
    printf ("%hhd\n", ch);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char ch = 300;
    printf ("%hhu\n", ch);
    printf ("%hhd\n", ch);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char ch = 255;
    printf ("%hhu\n", ch);
    printf ("%hhd\n", ch);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    unsigned int x = -1;
    printf ("%u\n", x);
    printf ("%d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x = -1;
    printf ("%u\n", x);
    printf ("%d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char x = -1;
    printf ("%u\n", x);
    printf ("%hhu\n", x);
    printf ("%d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    unsigned char x = -1;
    printf ("%u\n", x);
    printf ("%hhu\n", x);
    printf ("%d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    short x = -1;
    printf ("%d\n", x);
    printf ("%hu\n", x);
    printf ("%hhu\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    unsigned short x = -1;
    printf ("%d\n", x);
    printf ("%hu\n", x);
    printf ("%hhu\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    unsigned int count1 = 10;
    signed char count2 = -1;
    if (count1 > count2)
       printf ("YES\n");
    else
       printf ("NO\n");
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    unsigned int count1 = 10;
    signed char count2 = -1;
    if ((signed) count1 > count2)
        printf ("YES\n");
    else
        printf ("NO\n");
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    unsigned int count1 = 255;
    char count2 = 255;
    if (count1 == count2)
        printf ("YES\n");
    else
        printf ("NO\n");
    printf ("%d\n", count2);
    printf ("%u\n", count2);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int n1 = 0xB000;
    short n2 = 0xB000;
    if (n1 == n2)
        printf ("Equal\n");
    else
        printf ("Not Equal\n");
    printf ("%d\t%d\n", n1, n2);
    printf ("%hd\t%hd\n", n1, n2);
    printf ("%u\t%u\n", n1, n2);
    printf ("%hu\t%hu\n", n1, n2);
    printf ("%hx\t%hx\n", n1, n2);
    printf ("%x\t%x\n", n1, n2);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int n1 = 0xB000;
    unsigned short n2 = 0xB000;
    if (n1 == n2)
        printf ("Equal\n");
    else
        printf ("Not Equal\n");
    printf ("%d\t%d\n", n1, n2);
    printf ("%hd\t%hd\n", n1, n2);
    printf ("%u\t%u\n", n1, n2);
    printf ("%hu\t%hu\n", n1, n2);
    printf ("%hx\t%hx\n", n1, n2);
    printf ("%x\t%x\n", n1, n2);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int n = 20.2;                       //Stores the value as 20 in the variable 'n' of integer type.
    float f1 = (float) n / 2;           //Only 'n' is converted to float using explicit type-casting. '2' is converted to float using implicit type-casting.
    float f2 = n / 2;                   //Both the values are converted to float using implicit type-casting.
    float f3 = (float) n / (float) 2;   //Both the values are converted to float using explicit type-casting.
    printf ("%f\n%f\n%f\n", f1, f2, f3);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int n = 20.2;                       //Stores the value as 20 in the variable 'n' of integer type.
    float f1 = n / 2;                   //Both the values are converted to float using implicit type-casting.
    printf ("%f\n", n);                 //Throws an error: 'format %f expects argument of type double but argument has type int [-Wformat]'.
    //Implicit conversion occurs and some undefined behavior is shown by compiler if the above line of code is executed.
    printf ("%f\n", f1);                //Normal float value is printed without any problem.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float n = 20.2;             //Stores the value as 20.2 in the variable 'n' of float type.
    int f1 = n / 2;                   //Both the values are converted to int using implicit type-casting.
    printf ("%d\n", n);                 //Throws an error: 'format %d expects argument of type int but argument has type double [-Wformat]'.
    //Implicit conversion occurs
    printf ("%d\n", f1);                //Normal int value is printed without any problem.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    unsigned char a = 200;
    unsigned char b = 200;
    unsigned char c = a + b;
    printf ("%hhu\n", c);
    printf ("%hhd\n", c);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    unsigned char a = 200;
    unsigned char b = 200;
    unsigned int c = a + b;
    printf ("%u\n", c);
    printf ("%d\n", c);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char c = 2;
    c = 2 - 190;
    printf ("%d\n", c);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int num1 = 0XA000;
    short int num2 = 0XA000;
    if (num1 == (unsigned short) num2)
        printf ("It's Equal\n");
    else
        printf ("It's not Equal\n");
    return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
    int a = 0XA000;
    short int b = 0XA000;
    if (a == (unsigned) b)
        printf("Equal\n");
    else
        printf ("Not Equal\n");
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i = 1.75, j = 2.25, k, l;
    double a, b;
    k = i / j * j;
    l = j / i * j;
    a = i / j * j;
    b = j / i * i;
    printf ("%d %d ", k, l);
    printf ("%f %f\n", a, b);
    return 0;
}
#endif
