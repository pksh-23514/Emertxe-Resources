#include <stdio.h>

int main()
{
    int limit;
    printf ("Enter a number: ");
    scanf ("%d", &limit);
    
    if (limit <= 0)
    {
        int first = 0, second = 1, third = 0;
        char flag = 1;
        while (flag == 1)
        {
            printf ("%d", third);
            first = second;
            second = third;
            third = first - second;

            //If the value of the updated Fibonacci term lies in the range of (-limit) to (+limit) both included, then only the loop should continue through the value of 'flag'.
            if ((third <= 0 && third >= limit) || (third > 0 && third <= (0-limit)))
            {
                printf (", ");
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        printf ("\n");
    }
    else
    {
        printf ("Invalid input\n");
    }
    return 0;
}
