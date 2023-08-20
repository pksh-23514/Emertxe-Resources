/*
Name         : Prabhat Kiran
Date         : 19th Jan 2022
Description  : To Compare 2 Strings without considering their Case (i.e. Treat Uppercase and Lowercase as same).
Sample Input : "hello World" and "HELLO WORLD"
Sample Output: 0
*/

#include <stdio.h>

/* Case-insensitive Comparision */
int cmp (char a, char b)
{
    if (a >= 65 && a <= 90)
    a += 32;
    if (b >= 65 && b <= 90)
    b += 32;

    if (a == b)
    return 0;
    else if (a > b)
    return 1;
    else
    return -1;
}

/* String Comparision */
int my_strcmp (char* a, char* b)
{
    int i = 0;
    while ((a [i] != '\0') && (b [i] != '\0') && (cmp (a [i], b [i]) == 0))
    {
        i++;
    }
    printf ("%d\n", i);
    return (cmp (a [i], b [i]));
}

int main()
{
    char a[] = "ABCdE";
    char b[] = "aBcDE";
    printf("%d\n", my_strcmp (a,b));

    return 0;
}
