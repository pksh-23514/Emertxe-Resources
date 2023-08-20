#if 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];     //Size of the array is 20. All the elements are assigned as garbage values.
    
    //int a[3] = {1, 2, 3};       //Size of the array is 12. The elements are 1, 2 & 3.
    
    //int a[] = {10, 20};     //Size of the array is 8 as 2 elements are initialised to the array. The elements are 10 & 20.
    
    //int a[3] = {4};         //Size of the array is 12. The first element of the array is initialised as 4 and rest of the elements are assinged 0.
    
    //int a[3] = {10, 20, 30, 40};        //Size of the array is 12. Warning: excess elements in array initializer. The first 3 elements are stored in the array and displayed in the output.
    
    //int a[];        //Error: The array size is missing.
    
    //int a[5] = {0};         //Size of the array is 20. The first element of the array is initialised as 0 and rest of the elements are assigned 0.
    
    //int a[] = {};       //Size of the array is 0. It is a valid declaration but since no elements are initialised to the array, it is an empty array with size 0.

    /*int a[3];             //This is a valid statement but the below 2 initialisation techniques throw error.
    a = {10, 20, 30};       //Error: Expected expression before '{' token.
    a[] = {10, 20, 30};     //Error: Expected expression before ']' token.*/
    
    /*int a[3];
    a[0] = 1, a[1] = 2, a[2] = 3;       //This initialisation technique is valid. Size of the array is 12 and the elements initialised to each index is displayed in the output.*/

    /*int size = 3;
    int a[size] = {1, 2, 3};        //Error: Variable-sized object may not be initialised. In case of an Initialisation statement, the array size must be a constant value.*/

    /*int size = 3;
    int a[size];        //This is a valid statement. In case of a Declaration statement, the array size can be a constant or variable. All the elements are assigned as garbage values.*/

    printf ("Size of the array is : %zu\n", sizeof (a));
    for (int i = 0; i < (sizeof (a) / sizeof (int)); i++)
        printf ("Element at a[%d]: %d\n", i, a[i]);
    printf ("\n");

    int* p = NULL;
    p = (int*) malloc (5 * sizeof (int));   //Dynamic Memory allocation can also be used to form 1-D array. Just take care to free the memory after use!
    printf ("Dynamically allocated 1-D array with size 5 : ");
    for (int i = 0; i < 5; i++)
        p[i] = i + 1;
    for (int i = 0; i < 5; i++)
        printf ("%d ", p[i]);
    printf ("\n");
    free (p);
    return 0;
}
#endif
