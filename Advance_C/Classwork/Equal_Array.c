#include <stdio.h>

int main()
{
    int n;
    printf ("Enter the size of the 2 arrays: ");
    scanf ("%d", &n);
    int a[n], b[n];
    printf ("Enter the elements to be stored in the array 'A': ");
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    printf ("Enter the elements to be stored in the array 'B': ");
    for (int i = 0; i < n; i++)
        scanf ("%d", &b[i]);

    int temp = 0;
    for (int i = 0; i < n; i++)     //Using bubble sort, the 2 arrays are sorted in the ascending order.
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (a[j] > a[j + 1])    //Condition for sorting Array 'A'.
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            if (b[j] > b[j + 1])    //Condition for sorting Array 'B'.
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    int flag = 0;
    for (int i = 0; i < n; i++)     //One-on-one checking the array indices if the elements are equal or not.
    {
        if (a[i] == b[i])
        {
            flag = 1;
        }
        else        //If for any of the given values of 'i', the elements are unequal, the loop is broken with 'flag' as 0.
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)      //If 'flag' is 1, means all the array elements are equal.
    {
        printf ("EQUAL\n");
    }
    else
    {
        printf ("NOT EQUAL\n");
    }
    return 0;
}
