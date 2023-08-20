//There is a compiler optimization technique called as Short Circuit.
// if (A || B): A = True, then irrespective of B's value; the condition is always True. So, B is completely ignored by the compiler.
// if (A && B): A = False, then irrespective of B's value; the condition is always False. So, B is completely ignored by the compiler.
//Have the ability to “short circuit” a calculation, if the result is definitely known; this can improve efficiency.

#if 0
#include <stdio.h>

int main()
{
    int x = 2, y = 0;
    if (x++ || ++y)     //Since x != 0, x++ = True. So, short circuit occurs and the '++y' is ignored by the compiler as irrespective of second operand, the condition is always True.
        printf ("%d %d\n", x, y);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x = 2, y = 0;
    if (++x || y++)     //Since x != 0, ++x = True. So, short circuit occurs and the 'y++' is ignored by the compiler as irrespective of second operand, the condition is always True.
        printf ("%d %d\n", x, y);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x = 0, y = 2;
    if (++x && ++y)     //No Short circuit scenario. Both the expressions '++x' and '++y' are evaluated.
        printf ("%d %d\n", x, y);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x = 0, y = 2;
    if (x++ && ++y)     //Since x = 0, x = False. So, short circuit occurs and the '++y' is ignored by the compiler as irrespective of second operand, the condition is always False.
        ;
    printf ("%d %d\n", x, y);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    if (x || ++y)       //No Short circuit scenario. Both the expressions 'x' and '++y' are evaluated.
        printf ("%d %d\n", x, y);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    if (x++ && ++y)     //Since x = 0, x++ = False. So, short circuit occurs and the '++y' is ignored by the compiler as irrespective of second operand, the condition is always False.
        ;
    printf ("%d %d\n", x, y);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x = 16;
    int y = 0;
    int z = 0;
    int a = !x + !~y + !z;  //Remember the condition: '!(Non-Zero value)' is '0' and '!(Zero value)' is '1'.
    printf ("%d\n", a);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float f = 0.7;

    //The binary equivalent of 0.7 can be written as (0.10110011001100110…) which goes up to infinity.
    //Since the precision of float is less than the double therefore after a certain point (23 in float and 52 in double), it would truncate the result.
    //Hence, after promotion of float into double(at the time of comparison) compiler will pad the remaining bits with zeroes.
    //Hence, we get the different result in which decimal equivalent of both would be different.
    //This scenario happens only if the mantissa part after multiple multiplication with '2' gives a recurring series.

    if (f == 0.7)   //Here, the variable is float type while '0.7' is inherently double type. So, while comparing the mantissa; due to higher precision of double, the values come unequal.
        printf ("YES %zu %zu\n", sizeof (f), sizeof (0.7));
    else
        printf ("NO %zu %zu\n", sizeof (f), sizeof (0.7));
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float f = 0.7;
    if (f == 0.7f)  //Here, the variable is float type while '0.7f' is explicit float type. So, while comparing the mantissa; the values come equal as both are float types.
        printf ("YES %zu %zu\n", sizeof (f), sizeof (0.7f));
    else
        printf ("NO %zu %zu\n", sizeof (f), sizeof (0.7f));
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float f = 0.7;
    if (f == (float) 0.7)   //Here, the variable is float type while '0.7f' is explicit float type. So, while comparing the mantissa; the values come equal as both are float types.
        printf ("YES %zu %zu\n", sizeof (f), sizeof ((float) 0.7));
    else
        printf ("NO %zu %zu\n", sizeof (f), sizeof ((float) 0.7));
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float f = 0.7;
    if ((double) f == 0.7)  //Here, although we are doing explicit conversion of float value, the results are still not matching as compiler again pads up 0's for type promotion to double.
        printf ("YES %zu %zu\n", sizeof ((double) f), sizeof (0.7));
    else
        printf ("NO %zu %zu\n", sizeof ((double) f), sizeof (0.7));
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    double f = 0.7;
    if (f == 0.7)  //Here, we are storing the value in a double type, the results will match as compiler will not do any type promotion or demotion in such case.
        printf ("YES %zu %zu\n", sizeof (f), sizeof (0.7));
    else
        printf ("NO %zu %zu\n", sizeof (f), sizeof (0.7));
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float f = 0.5;
    if (f == 0.5)   //Since, there is no recurring mantissa part, conversion of float to double by padding 0's won't have any effect on the value. The condition will match as all are 0's.
        printf ("YES %zu %zu\n", sizeof (f), sizeof (0.5));
    else
        printf ("NO %zu %zu\n", sizeof (f), sizeof (0.5));
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float f = 0.625;
    if (f == 0.625)//Since, there is no recurring mantissa part, conversion of float to double by padding 0's won't have any effect on the value. The condition will match as all are 0's.
        printf ("YES %zu %zu\n", sizeof (f), sizeof (0.625));
    else
        printf ("NO %zu %zu\n", sizeof (f), sizeof (0.625));
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float num = 0;
    if (num = 1)    //Since, it is an assignment operator inside if; it can be noted as 'if (1)' which is always True.
        printf ("Equal %f\n", num);
    else
        printf ("Not Equal %f\n", num);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float num = 1;
    if (num = 0)    //Since, it is an assignment operator inside if; it can be noted as 'if (0)' which is always False.
        printf ("Equal %f\n", num);
    else
        printf ("Not Equal %f\n", num);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float num = 0;
    if (num == 0)    //Since, it is a relational operator inside if; condition is checked and it is found to be True.
        printf ("Equal %f\n", num);
    else
        printf ("Not Equal %f\n", num);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float num = 0;
    if (0 == num)    //Since, it is a relational operator inside if; condition is checked and it is found to be True. The order of operands doesn't matter here!
        printf ("Equal %f\n", num);
    else
        printf ("Not Equal %f\n", num);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    float num = 0;
    //Error: lvalue required as left operand of assignment.
    if (2 = num)    //Since, it is a relational operator inside if; it throws an error. The order of operands does matter here!
        printf ("Equal %f\n", num);
    else
        printf ("Not Equal %f\n", num);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int a;
    int b = (a=2, a+3);         //The expression 'a=2' is executed but returned as void. The expression 'a+3' is executed with previous value of 'a' i.e. '2' and the value '5' is returned to 'b'.
    printf ("%d %d\n", a, b);   //The value of 'a' is '2' as executed in the 'a=2' expression. The value of 'b' is '5'. This is Comma as an operator.
    return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
    int a = (3, 5);     //The expression has '()' with highest precedence. So, 3 is executed but returned as void. The expression '5' is executed and is returned to 'a'.
    int b;
    b = 2, 3;       //The expression 'b=2' is executed as '=' has higher precedence over ','. The expression '3' is executed and returned as void.
    printf ("%d %d\n", a, b);   //The value of 'a' is '5' as executed in the 'a=2' expression. The value of 'b' is '2'. This is Comma as an operator.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int a = 3;
    int b = ++a + a++ + --a + a--;      //Undefined behavior being shown by the compiler.
    printf ("%d %d\n", a, b);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i=0;
    for(i==0; i < 10; i++)  //'i==0' is evaluated but there is no variable to catch the value returned by the expression. So, the loop starts with 'i=0' as initialised above and goes to 'i < 10'.
        printf ("%d ", i);
    printf ("\n");
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i = 11, j;
    for (j = i == 11; j < 11; j++)      //'==' has more prcedence over '=' and therefore 'j' is initialised with '1' and the loop runs till 'j < 11'.
        printf ("%d ",j);
    printf ("\n");
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i=0;
    for (i = i == 0; i < 10; i++)       //'==' has more prcedence over '=' and therefore 'i' is initialised with '1' and the loop runs till 'i < 10'.
        printf ("%d ", i);
    printf ("\n");
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int k = 1;
    printf ("%d==1 is %s\n", k, k == 1 ? "True" : "False");     //Ternary operator can return String values which is caught by the '%s' in the printf("").
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char a = 187;
    int expr = a + ~a + !a + ++a;       //Here, the main operation is '+' and therefore, the expression is evaluated from L -> R.
//If there are multiple unary operators (Eg.- !~++a); then the expression goes from R -> L. Otherwise, search for the main operation and apply its assosciativity.
    printf ("%d\n", expr);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char a = 250;
    int expr = !a + -a + ~a + ++a;      //Here, the main operation is '+' and therefore, the expression is evaluated from L -> R.
//If there are multiple unary operators (Eg.- !~++a); then the expression goes from R -> L. Otherwise, search for the main operation and apply its assosciativity.
    printf ("%d\n", expr);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char a = 187;
    int expr = -a + ~a + !a + ++a;      //Here, the main operation is '+' and therefore, the expression is evaluated from L -> R.
//If there are multiple unary operators (Eg.- !~++a); then the expression goes from R -> L. Otherwise, search for the main operation and apply its assosciativity.
    printf ("%d\n", expr);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int y = 12, z = 0;
    z = ((y + y) + (y = 10));   //Since, the () are the highest precedence, the expression to be evaluated from L -> R. So, the addition happens first and then 'y' is assigned 10.
    printf ("%d %d\n", y, z);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int num1 = 20, num2 = 10, num3 = 0;
    (num1 > num2) ? num3 = num1 : num3 = num2;  //Error: lvalue required as left operand of assignment. It is shown irrespective whether the condition (num1>num2) is TRUE or FALSE.
    return 0;
}
#endif
