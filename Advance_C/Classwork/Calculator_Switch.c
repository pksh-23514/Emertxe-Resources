#include <stdio.h>

int main()
{
    int a,b;
    char opt;
    printf ("Enter the first operand: ");
    scanf ("%d", &a);
    printf ("Enter the second operand: ");
    scanf ("%d", &b);
    printf ("Enter the operator: ");
    scanf (" %c", &opt);
    
    //scanf("%c", &opt); will consider the previously entered ENTER key press. ENTER key press generates a '\n' which is a valid input for '%c' format specifier.
    //Adding a space before '%c' tells scanf() to ignore all the leading whitespace-like inputs (including previously stored '\n') and read the first non-whitespace character from stdin.

    switch (opt)
    {
        case '+' :
            printf ("The sum of the 2 operands: %d %c %d = %d\n", a , opt, b, (a+b));
            break;
        case '-' :
            printf ("The difference of the 2 operands: %d %c %d = %d\n", a, opt, b, (a-b));
            break;
        case '*':
            printf ("The product of the 2 operands: %d %c %d = %d\n", a, opt, b, (a*b));
            break;
        case '/':
            printf ("The quotient of the 2 operands: %d %c %d = %d\n", a, opt, b, (a/b));
            break;
        case '%':
            printf ("The remainder of the 2 operands: %d %c %d = %d\n", a, opt, b, (a%b));
            break;
        default :
            printf ("The entered operator %c is invalid\n", opt);
    }
    return 0;
}
