#include <stdio.h>

void reverse (char str[], int i, int n)
{
    if (i == (n / 2))
    {
        return;
    }
    else
    {
        char temp = str [i];
        str [i] = str [n - i - 1];
        str [n - i - 1] = temp;
        reverse (str, (i + 1), n);
    }
}

int main()
{
    char str[50];
    printf ("Enter the string: ");
    scanf ("%s", str);

    int count = 0;
    while (str [++count] != '\0');
    
    reverse (str, 0, count);
    printf ("Reverse string is: %s\n", str);
    return 0;
}
