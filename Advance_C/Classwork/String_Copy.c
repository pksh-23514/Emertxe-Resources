#include <stdio.h>

void copy (char* str1, char* str2)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i += 1;
    }
    str2[i] = '\0'; //Since we are running the loop till '\0' is encountered, the '\0' character is not copied to 'str2' through the loop. So, we have to add the '\0' at the end of 'str2' manually.
}

int main()
{
    char str1[30], str2[30];
    printf ("Enter the String: ");
    fgets (str1, 30, stdin);
    copy (str1, str2);
    printf ("The Original String: %s\n", str1);
    printf ("The Copied String: %s\n", str2);
    return 0;
}
