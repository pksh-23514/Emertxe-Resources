#include <stdio.h>

int main()
{
    int n;
    printf ("Enter the number of elements to be stored in the array: ");
    scanf ("%d", &n);
    int a[n];
    printf ("Enter the %d number of elements in the array one by one: ", n);
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        if (i == 0)
        {
            max = a[i];
        }
        else
        {
            if (a[i] > max)
            {
                max = a[i];
            }
        }
    }
    printf ("The Largest element of the array is: %d\n", max);
    return 0;
}
