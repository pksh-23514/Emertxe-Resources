#include <stdio.h>

int length (char* str)
{
    int count = 0;
    while (*str != '\0')
    {
        count += 1;
        str += 1;
    }
    return count;
}

int main()
{
    char str[50];
    printf ("Enter the String: ");
    fgets (str, 50, stdin);
    int count = length (str);
    printf ("The length of the String is: %d\n", count);
    return 0;
}
