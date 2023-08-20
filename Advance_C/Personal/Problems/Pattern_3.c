#include <stdio.h>
#include <stdlib.h>     //To use the abs() in the code.

int main()
{
    int n;
    printf ("Enter the number of lines the pattern needs to be printed: ");
    scanf ("%d", &n);

    for (int i = 1; i <= ((2 * n) - 1); i++)
    {
        for (int j = 1; j <= ((2 * n) - 1); j++)
        {
            printf ("%d ", ((abs(i - n) > abs(j - n)) ? ((abs(i - n)) + 1) : ((abs(j - n)) + 1)));
        }
        printf ("\n");
    }
    return 0;
}
/* -3 -2 -1  0  1  2  3     <--- (i - n) / (j - n)
    4  4  4  4  4  4  4  -3                 |
    4  3  3  3  3  3  3  -2                 |
    4  3  2  2  2  3  4  -1                 v
    4  3  2  1  2  3  4   0
    4  3  2  2  2  3  4   1
    4  3  3  3  3  3  4   2
    4  4  4  4  4  4  4   3

Divide the matrix in form of a graph. So, the center of the matrix will have coordinates as (0,0).
For each element position, check the absolute distance from the X-axis and Y-axis.

Since the matrix is 7*7; and all the positions are having printed integers. So; i & j both variables will go 7 times i.e. (1 to 7).
Eg.- For, the 1st position: The distance from Y-axis is |i - n| = |1 - 4| = 3. The distance from X-axis is |j - n| = |1 - 4| = 3.
So, the pattern is in such a way that whichever distance is greater in absolute terms, that (absolute distance value + 1) is being printed in the corresponding position.
Eg.- For, the (-2,-1) position: The distance from Y-axis is |i - n| = |3 - 4| = 1. The distance from X-axis is |j - n| = |2 - 4| = 2. So, (|2|>|1|); hence the value printed is |2|+1 = 3.
*/
