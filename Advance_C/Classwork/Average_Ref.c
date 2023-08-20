#include <stdio.h>

double avg (int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return ((double) sum / (double) n);
}

int main()
{
    int n;
    printf ("Enter the number of elements: ");
    scanf    ("%d", &n);
    int arr[n];
    printf ("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &arr[i]);
    }

    double average = avg (arr, n);
    printf ("The Average of the elements of the array is = %lf\n", average);
    return 0;
}
