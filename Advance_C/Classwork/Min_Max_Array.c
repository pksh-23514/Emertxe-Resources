#include <stdio.h>
#include <stdlib.h>

void max_min (int** a, int r, int c)
{
    int max = a[0][0], min = a[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < a[i][j])
                max = a[i][j];
            if (min > a[i][j])
                min = a[i][j];
        }
    }
    printf ("The maximum value of the array is = %d\n", max);
    printf ("The minimum value of the array is = %d\n", min);
}

int main()
{
    int** a;
    int row, col;
    printf ("Enter the number of Rows in the matrix: ");
    scanf ("%d", &row);
    a = (int**) malloc (row * sizeof (int*));
    printf ("Enter the number of Columns in the matrix: ");
    scanf ("%d", &col);
    for (int i = 0; i < row; i++)
    {
        a[i] = (int*) malloc (col * sizeof (int));
    }
    printf ("Enter the %d elements in the Matrix:\n", (row * col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }

    max_min (a, row, col);
    free (a);
    return 0;
}
