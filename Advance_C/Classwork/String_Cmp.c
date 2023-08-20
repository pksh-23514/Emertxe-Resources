#include <stdio.h>

int cmp (char* str1, char* str2)
{
    int i = 0;
//The characters of 'str1' and 'str2' are compared till all their characters are exactly equal including the case (i.e. LC/UC). The loop runs until the condition is True or 'str1' reaches its end.
    while (str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }
    
//The difference between the unmatched character tells which string is greater.
    return (str1[i] - str2[i]);
}

int main()
{
    char str1[50], str2[50];
    printf ("Enter the String: ");
    fgets (str1, 50, stdin);
    printf ("Enter the String: ");
    fgets (str2, 50, stdin);

    int res = cmp (str1, str2);
    printf ("The Comparision value of the 2 Strings is: %d\n", res);
    return 0;
}
