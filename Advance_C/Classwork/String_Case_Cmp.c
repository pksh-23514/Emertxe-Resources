#include <stdio.h>

int cmp_case (char* str1, char* str2)
{
    int i = 0;
//To ignore the case means we have to check all the possibilities for 'str1' and 'str2' i.e. UC/LC = UC/LC or UC = LC or LC = UC. The loop runs till the condition is True or 'str1' reaches it's end.
    while (((str1[i] == str2[i]) || (str1[i] + 32 == str2[i]) || (str1[i] == str2[i] + 32) || (str1[i] - 32 == str2[i]) || (str1[i] == str2[i] - 32)) && str1[i] != '\0')
    {
        i++;
    }
    
//To make the comparision, characters shall be made in the same case.The unmatched 'str1[i]' and 'str2[i]' are converted to Lower-case characters and their difference tells which string is greater.
    if (str1[i] >= 65 && str1[i] <= 90)
    {
        str1[i] = str1[i] + 32;
    }
    if (str2[i] >= 65 && str2[i] <= 90)
    {
        str2[i] = str2[i] + 32;
    }
    return (str1[i] - str2[i]);
}

int main()
{
    char str1[50], str2[50];
    printf ("Enter the String: ");
    fgets (str1, 50, stdin);
    printf ("Enter the String: ");
    fgets (str2, 50, stdin);

    int res = cmp_case (str1, str2);
    printf ("The Comparision value of the 2 Strings is: %d\n", res); 
    return 0;
}
