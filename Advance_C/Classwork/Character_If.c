#include <stdio.h>

int main()
{
    char ch;
    printf ("Enter the Character to be checked: ");
    scanf ("%c", &ch);

    if (ch >= 48)
    {
        if (ch <= 57)
        {
            printf ("%c is a Digit.\n", ch);
        }
        else if (ch <= 90)
        {
            if (ch >=65)
            {
                printf ("%c is an Upper-Case character.\n", ch);
            }
            else
            {
                printf ("Character %c is not a Digit or Upper-Case character or Lower-Case character.\n", ch);
            }
        }
        else if (ch <= 122)
        {
            if (ch >= 97)
            {
                printf ("%c is a Lower-Case character.\n", ch);
            }
            else
            {
                printf ("Character %c is not a Digit or Upper-Case character or Lower-Case character.\n", ch);
            }
        }
        else
        {
            printf ("Character %c is not a Digit or Upper-Case character or Lower-Case character.\n", ch);
        }
    }
    else
        {
            printf ("Character %c is not a Digit or Upper-Case character or Lower-Case character.\n", ch);
        }
    return 0;
}
