#include <stdio.h>

int main()
{
    char ch;
    printf ("Enter the Character to be checked: ");
    scanf ("%c", &ch);

    switch (ch)
    {
        case '0' ... '9' :
            printf ("%c is a Digit.\n", ch);
            break;
        case 'A' ... 'Z' :
            printf ("%c is an Upper-Case character.\n", ch);
            break;
        case 'a' ... 'z' :
            printf ("%c is a Lower-Case character.\n", ch);
            break;
        default :
            printf ("Character %c is not a Digit or Upper-Case character or Lower-Case character.\n", ch);
    }
    return 0;
}
