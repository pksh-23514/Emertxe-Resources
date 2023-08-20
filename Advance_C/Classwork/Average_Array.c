#include <stdio.h>

int main()
{
    int n;
    printf ("Enter the number of elements to be stored in the array: ");
    scanf ("%d", &n);
    int a[n];
    printf ("Enter the %d number of elements in the array one by one: ", n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
        sum += a[i];
    }
    printf ("The average of all the elements is: %0.2f\n", ((float) sum / (float)  n));
    return 0;
}
