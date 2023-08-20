#include <stdbool.h>
#include <stdio.h>

bool checkPangram(char str[])
{
    bool mark[26];
    for (int i = 0; i < 26; i++)
        mark[i] = false;

    int index = 0, size = 0;

    while (str [size] != '\0')
    {
        size++;
    }
    for (int i = 0; i < size; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            index = str[i] - 'A';
        }
        else if ('a' <= str[i] && str[i] <= 'z')
        {
            index = str[i] - 'a';
        }
        else
        {
            continue;
        }
        mark[index] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (mark[i] == false)
            return (false);
    }
    return (true);
}

int main()
{
    char str[100];
    printf ("Enter the String: ");
    scanf ("%[^\n]", str);

    if (checkPangram(str) == true)
        printf("It is a pangram\n", str);
    else
        printf("It is not a pangram\n", str);

    return (0);
}
