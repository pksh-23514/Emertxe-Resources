#include <stdio.h>

int main()
{
    int m,n;
    char a,b;
    printf ("Enter the number of pattern characters to be printed in the line: ");
    scanf ("%d", &n);
    
    if (n % 2 == 1)
    {
        printf ("Enter the number of pattern characters to be printed in the middle of the line: ");
        scanf ("%d", &m);
        
        if (m % 2 == 1)
        {
            printf ("Enter the character to be printed in the middle of the line: ");
            scanf (" %c", &b);
            printf ("Enter the second character to be printed in the line: ");
            scanf (" %c", &a);

            for (int i = 1; i <= n; i++)
            {
                if (i > ((n - m) / 2))
                {
                    if (i <= ((n + m) / 2))
                    {
                        printf ("%c", b);
                    }
                    else
                    {
                        printf ("%c", a);
                    }
                }
                else
                {
                    printf ("%c", a);
                }
            }
            printf("\n");
        }
        else
        {
            printf ("The number of pattern characters to be printed in the middle of the line should be odd.\n");
        }
    }
    else
    {
        printf ("The number of pattern characters to be printed in the line should be odd.\n");
    }
    return 0;
}

