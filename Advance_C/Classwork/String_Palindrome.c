#include <stdio.h>
#include <string.h>

void palindrome (char* str)
{
    int len = strlen(str) - 1, flag = 0;
    for (int i = 0; i < (len/2); i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf ("String is Palindrome\n");
    }
    else
    {
        printf ("String is not Palindrome\n");
    }
}

int main()
{
    char str[50];
    printf ("Enter the String: ");
    fgets (str, 50, stdin);
    palindrome (str);
    return 0;
}
