#if 0
#include <stdio.h>

int main()
{
//Try Input as: 123 A 12.34
//Try Input as: 123 12.34 A
//Try Input as: 123(\n) A(\n) 12.34(\n)
//Try Input as: 123(\n) 12.34(\n) (You won't be able to give any more input.)
    int i; float f; char c;
    int ret = scanf ("%d %c %f", &i, &c, &f);
    printf ("%d %c %f ", i, c, f);
    printf ("%d\n", ret);
//123 A 12.340000 3
//123 1 2.340000 3
//123 A 12.340000 3
//123 1 2.340000 3
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
//Try Input as: 123A12.34
//Try Input as:  123A 12.34
//Try Input as: 123 12.34 A
//Try Input as: 123(\n) A(\n) (You won't be able to give any more input.)
//Try Input as: 123(\n) 12.34(\n)
    int i; float f; char c;
    int ret = scanf ("%d%c%f", &i, &c, &f);
    printf ("%d %c %f ", i, c, f);
    printf ("%d\n", ret);
//123 A 12.340000 3
//123 A 12.340000 3
//123   -0.025311 2
/*123 
 -1.147938 2*/
/*123 
 12.340000 3*/
//If there is no space between the format specifiers, the ' ' or '\t' or '\n' are picked up by the %c.

    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
//Try Input as: 123 A 12.34
//Try Input as: 123 12.34 A
//Try Input as: 123(\n) A(\n) 12.34(\n)
//Try Input as: 123(\n) 12.34(\n) (You won't be able to give any more input.)
    int i; float f; char c;
    int ret = scanf ("%d %c %f", &i, &f, &c);
//warning: format ‘%c’ expects argument of type ‘char *’, but argument 3 has type ‘float *’ [-Wformat=]
//warning: format ‘%f’ expects argument of type ‘float *’, but argument 4 has type ‘char *’ [-Wformat=]
    printf ("%d %c %f ", i, c, f);
    printf ("%d\n", ret);
//4277616 � -87007752.000000 3
//4199874 � 0.000000 3
//4277616 � -398805041187097935872.000000 3
//4199874 � 8130584.500000 3
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
//Try Input as: 123abc
//Try Input as: 123 abc
    int i; char c;
    int ret = scanf ("%d %c", &i, &c);
    printf ("%d %c ", i, c);
    printf ("%d\n", ret);
//123 a 2
//123 a 2
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
//Try Input as: 123abc
//Try Input as: 123 abc
//Try Input as: 123(\n)
    int i; char c;
    int ret = scanf ("%d%c", &i, &c);
    printf ("%d %c ", i, c);
    printf ("%d\n", ret);
//123 a 2
//123   2
/*123
 2*/
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
//Try Input as: 12.35(\n) (You won't be able to give any more input.)
    int i; float f; char c;
    int ret = scanf ("%d%f%c", &i, &f, &c);
    printf ("%d %f %c ", i, f, c);
    printf ("%d\n", ret);
/*12 0.350000
 3*/
//The integer part of the input is caught by %d. As soon as the scanf() gets to the decimal point, it stops reading to %d and 0.35 is caught by %f. Similarly, the '\n' is caught by %c.
//So, 3 successful inputs read by scanf().
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
//Try Input as: 123abc
//Try Input as: 123bac
//Try Input as: 123aaaabc
//Try Input as: 123 abc
//Try Input as: 123bc
    int i; char c;
    int ret = scanf ("%da%c", &i, &c);
    printf ("%d %c ", i, c);
    printf ("%d\n", ret);
//123 b 2
//123  1
//123 a 2
//123  1
//123  1
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
//Try Input as: 23:24:25(\n)9/12/24(\n)
//Try Input as: 23/24/25(\n) (You won't be able to give any more input.)
//Try Input as: 23:24:22(\n)12:25:22(\n)
//Try Input as: 22:23:24(\t)22/23/25(\n)
//Try Input as: 12:23:14        12/8/9(\n)
    int hr,min,sec;
    int yr,mon,day;
    if ((scanf ("%d:%d:%d", &hr, &min, &sec)) != 3)
        printf ("Invalid Format!\n");
    if ((scanf ("%d/%d/%d", &yr, &mon, &day)) != 3)
        printf ("Invalid Format!\n");
    printf ("%d/%d/%d\t%d:%d:%d\n", yr, mon, day, hr, min, sec);
//9/12/24	23:24:25
/*Invalid Format!
Invalid Format!
21851/-1978994992/32766	23:21851:148768352
Only one match happens in the first scanf() (here 23) and rest are garbage values as scanf() terminates due to improper character encounter. So, both the if return true.*/
/*Invalid Format!
12/88483792/32764	23:24:22
The first scanf() reads the 3 values successfully. The second scanf() reads only one value.*/
//12/23/25	22:23:24
//12/8/9	12:23:14
//%d or %f ignores " " (space), "\n" (enter key) and "\t" (tabs) or a combination of these while taking input from the buffer through scanf().
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
//Try Input as: 23:24:25(\n)9/12/24(\n)
//Try Input as: 23/24/25(\n)9/12/24(\n)
//Try Input as: 23:24:22(\n)12:25:22(\n)
//Try Input as: 12(\t)(\t)24:23(\n)1(\n)7(\n)8
//Try Input as: 12:23:14        12/8/9(\n)
    int hr,min,sec;
    int yr,mon,day;
    if ((scanf ("%d%*c%d%*c%d", &hr, &min, &sec)) == 3)
        printf ("Correct Format!\n");
    if ((scanf ("%d%*c%d%*c%d", &yr, &mon, &day)) == 3)
        printf ("Correct Format!\n");
    printf ("%d/%d/%d\t%d:%d:%d\n", yr, mon, day, hr, min, sec);
//9/12/24	23:24:25
/*9/12/24	23:24:25
"*" operator with %c reads a character and discards it. So, irrespective of whatever character appears in the input, the scanf() reads all the values successfully.*/
/*12/25/22	23:24:22
"*" operator with %c reads a character and discards it. So, irrespective of whatever character appears in the input, the scanf() reads all the values successfully.*/
//1/7/8	12:24:23
//All the scanf() here return the value as '3' and not '5' although there are 2 "%*c" in the scanf() which are read successfully.
//%d or %f ignores " " (space), "\n" (enter key) and "\t" (tabs) or a combination of these while taking input from the buffer through scanf().
//Similarly, %*d or %*f or %*s will read the integer or float value or a string and discard it. The read and discarded input is not counted as successful input taken in scanf().
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char str[10];
    printf("Enter an Upper-case string: ");
    scanf("%[A-Z]", str);
    printf("You entered: %s\n", str);
    printf("Enter an Lower-case string: ");
    scanf("%[a-z]", str);
    printf("You entered: %s\n", str);
    printf("Enter a Digit: ");
    scanf("%[0-9]", str);
    printf("You entered: %s\n", str);
    printf("Enter a Digit or Lower-case string: ");
    scanf("%[a-z,0-9]", str);
    printf("You entered: %s\n", str);
    printf("Enter anything other than Upper-case string: ");
    scanf("%[^A-Z]", str);
    printf("You entered: %s\n", str);
    printf("Enter anything other than Space or Enter key: ");
    scanf("%[^ \n]", str);
    printf("You entered: %s\n", str);
    printf("Enter anything other than Space or Enter key: ");
    scanf("%[^o]", str);
    printf("You entered: %s\n", str);

    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i; float f; char c;
    int ret = scanf ("%d%f%c", &i, &f, &c);
    printf ("%d %f %c\n%d\n", i, f, c, ret);
    return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
    int i;
    scanf ("%f", &i);   //warning: format ‘%f’ expects argument of type ‘float *’, but argument 2 has type ‘int *’ [-Wformat=]
    printf ("%d\n", i);
//Take Input as: 2.3
//The Output came as: 1075000115 [Runtime Error]
    return 0;
}
#endif
