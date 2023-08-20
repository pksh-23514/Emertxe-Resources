#include <stdio.h>
#include <stdlib.h>

/*-------------------------------------------------------Static Array Declaration (Both Static)-------------------------------------------------------*/
#if 0
//note: declaration of ‘a’ as multidimensional array must have bounds for all dimensions except the first.
void print (int a[][], int r, int c)      //error: array type has incomplete element type ‘int[]’.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    print (a, 3, 2);        //error: type of formal parameter 1 is incomplete
    return 0;
}
#endif

#if 0
void print (int a[][2], int r)      //In case of 2-D array, column size must be mentioned while catching the 2-D array in the function definition.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 2; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    print (a, 3);
    return 0;
/*1	2	
  3	4	
  5	6*/
}
#endif

#if 0
//note: declaration of 'c' must be before the declaration of 'a' i.e. 2-D array. Otherwise, it will throw error of 'c' undeclared.
void print (int r, int c, int a[][c])      //In case of 2-D array, column size must be mentioned while catching the 2-D array in the function definition. Another way to do this!
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    print (3, 2, a);
    return 0;
/*1	2	
  3	4	
  5	6*/
}
#endif

#if 0
//note: declaration of 'r' and 'c' must be before the declaration of 'a' i.e. 2-D array. Otherwise, it will throw error of 'r' and 'c' undeclared.
void print (int r, int c, int a[r][c])      //Another way to catch a 2-D array in the function definition!
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    print (3, 2, a);
    return 0;
/*1	2	
  3	4	
  5	6*/
}
#endif

#if 0
void print (int a[3][2])      //You can use the definition of the 2-D array in function definition as it was defined in the main().
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    print (a);
    return 0;
/*1	2	
  3	4	
  5	6*/
}
#endif

#if 0
void print (int* a[3], int c)      //note: expected ‘int **’ but argument is of type ‘int (*)[2]’.
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    print (a, 2);           //warning: passing argument 1 of ‘print’ from incompatible pointer type [-Wincompatible-pointer-types].
    return 0;
//Segmentation fault (core dumped)
}
#endif

#if 0
void print (int (*a) [2], int r)        //You can use the definition of Pointer to the Array (having column number of elements) in function definition.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 2; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    print (a, 3);
    return 0;
/*1	2	
  3	4	
  5	6*/
}
#endif

#if 0
void print (int** a, int r, int c)      //note: expected ‘int **’ but argument is of type ‘int (*)[2]’.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    print (a, 3, 2);        //warning: passing argument 1 of ‘print’ from incompatible pointer type [-Wincompatible-pointer-types].
    return 0;
//Segmentation fault (core dumped)
}
#endif

#if 0
void print (int r, int c, int* a)       //You can use the definition of a single pointer as we are passing the address of 0th element of the 2-D array.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", *((a + (i * c)) + j));      //Navigation will be element to element; so inside the row: (... + j) and next row: (a + (i*column_size)).
        printf ("\n");
    }
}

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    print (3, 2, (int*) a);         //Type-casting a 2-D array is same as dereferencing it. So, after dereferencing; we are passing the 0th element address of the 0th 1-D array.
//We can also pass it as: &a[0][0].
    return 0;
/*1	2	
  3	4	
  5	6*/
}
#endif

#if 0
void print (int r, int c, int a[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%p\t", &a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    print (3, 2, a);
    return 0;
//Memory allocation is Contiguous. This is a Static 2-D Array stored on the Stack.
/*0x7ffcda90ca70	0x7ffcda90ca74	
0x7ffcda90ca78		0x7ffcda90ca7c	
0x7ffcda90ca80		0x7ffcda90ca84*/
}
#endif

/*-------------------------------------------------------FSSD Array Declaration (First Static Second Dynamic)-------------------------------------------------------*/
#if 0
void print (int* a[], int c)        //You can use the definition of an Array of Pointers. The number of Rows need not be mentioned while catching the 2-D array in the function definition.
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int* a[3];
    for (int i = 0; i < 3; i++)
        a [i] = (int*) malloc (2 * sizeof (int));       //Dynamic Memory allocation for the Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (a, 2);
    for (int i = 0; i < 3; i++)
        free (a[i]);            //Free the address of Columns allocated dynamically.
    return 0;
/*0	1	
  1	2	
  2	3*/
}
#endif

#if 0
void print (int* a[3], int c)        //You can use the definition of an Array of Pointers. The number of Rows can be mentioned while catching the 2-D array in the function definition.
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int* a[3];
    for (int i = 0; i < 3; i++)
        a [i] = (int*) malloc (2 * sizeof (int));       //Dynamic Memory allocation for the Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (a, 2);
    for (int i = 0; i < 3; i++)
        free (a[i]);            //Free the address of Columns allocated dynamically.
    return 0;
/*0	1	
  1	2	
  2	3*/
}
#endif

#if 0
//note: declaration of 'r' must be before the declaration of 'a' i.e. Array of Pointers. Otherwise, it will throw error of 'r' undeclared.
void print (int r, int* a[r], int c)        //You can use the definition of an Array of Pointers. The number of Rows can be declared before catching the 2-D array in the function definition.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int* a[3];
    for (int i = 0; i < 3; i++)
        a [i] = (int*) malloc (2 * sizeof (int));       //Dynamic Memory allocation for the Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (3, a, 2);
    for (int i = 0; i < 3; i++)
        free (a[i]);            //Free the address of Columns allocated dynamically.
    return 0;
/*0	1	
  1	2	
  2	3*/
}
#endif

#if 0
void print (int r, int c, int** a)        //You can use the definition of a Double Pointer. The number of Rows and Columns are declared separately in the function definition.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int* a[3];
    for (int i = 0; i < 3; i++)
        a [i] = (int*) malloc (2 * sizeof (int));       //Dynamic Memory allocation for the Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (3, 2, a);
    for (int i = 0; i < 3; i++)
        free (a[i]);            //Free the address of Columns allocated dynamically.
    return 0;
/*0	1	
  1	2	
  2	3*/
}
#endif

#if 0
void print (int c, int a[][c])        //note: expected ‘int (*)[(sizetype)(c)]’ but argument is of type ‘int **’.
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int* a[3];
    for (int i = 0; i < 3; i++)
        a [i] = (int*) malloc (2 * sizeof (int));       //Dynamic Memory allocation for the Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (2, a);       //warning: passing argument 2 of ‘print’ from incompatible pointer type [-Wincompatible-pointer-types].
    for (int i = 0; i < 3; i++)
        free (a[i]);            //Free the address of Columns allocated dynamically.
    return 0;
/*-976104864	22047	
  -976104832	22047	
  -976104800	22047*/
}
#endif

#if 0
void print (int r, int c, int a[r][c])        //note: expected ‘int (*)[(sizetype)(c)]’ but argument is of type ‘int **’.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int* a[3];
    for (int i = 0; i < 3; i++)
        a [i] = (int*) malloc (2 * sizeof (int));       //Dynamic Memory allocation for the Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (3, 2, a);        //warning: passing argument 3 of ‘print’ from incompatible pointer type [-Wincompatible-pointer-types].
    for (int i = 0; i < 3; i++)
        free (a[i]);            //Free the address of Columns allocated dynamically.
    return 0;
/*-63802784	22038	
  -63802752	22038	
  -63802720	22038*/
}
#endif

#if 0
void print (int a[3][2])        //note: expected ‘int (*)[2]’ but argument is of type ‘int **’.
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int* a[3];
    for (int i = 0; i < 3; i++)
        a [i] = (int*) malloc (2 * sizeof (int));       //Dynamic Memory allocation for the Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (a);        //warning: passing argument 1 of ‘print’ from incompatible pointer type [-Wincompatible-pointer-types].
    for (int i = 0; i < 3; i++)
        free (a[i]);            //Free the address of Columns allocated dynamically.
    return 0;
/*-825580960	22067	
  -825580928	22067	
  -825580896	22067*/
}
#endif

#if 0
void print (int c, int (*a) [c])        //note: expected ‘int (*)[(sizetype)(c)]’ but argument is of type ‘int **’.
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int* a[3];
    for (int i = 0; i < 3; i++)
        a [i] = (int*) malloc (2 * sizeof (int));       //Dynamic Memory allocation for the Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (2, a);       //warning: passing argument 2 of ‘print’ from incompatible pointer type [-Wincompatible-pointer-types].
    for (int i = 0; i < 3; i++)
        free (a[i]);            //Free the address of Columns allocated dynamically.
    return 0;
/*-397241760	22092	
  -397241728	22092	
  -397241696	22092*/
}
#endif

#if 0
void print (int r, int* a[r], int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%p\t", &a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int* a[3];
    for (int i = 0; i < 3; i++)
        a [i] = (int*) malloc (2 * sizeof (int));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (3, a, 2);
    for (int i = 0; i < 3; i++)
        free (a[i]);
    return 0;
//Memory allocation is not Contiguous. Each pointer returned by the malloc() is pointing to different memory segments in Heap.
/*0x55c2238cf260	0x55c2238cf264	
0x55c2238cf280		0x55c2238cf284	
0x55c2238cf2a0		0x55c2238cf2a4*/
}
#endif

/*-------------------------------------------------------FDSS Array Declaration (First Dynamic Second Static)-------------------------------------------------------*/
#if 0
void print (int (*a)[2], int r)     //You can use the definition of Pointer to an Array. The number of Columns need to be mentioned while catching the 2-D array in the function definition.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 2; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int (*a) [2];
    a = (int (*)[]) malloc (3 * sizeof (*a));      //Dynamic Memory allocation for the Rows. Size of each Row will be equal to the size of 1-D Array with 2 Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (a, 3);
    free (a);       //Free the address of Rows allocated dynamically.
    return 0;
/*0	1	
1	2	
2	3*/
}
#endif

#if 0
//note: declaration of 'c' must be before the declaration of 'a' i.e. Pointer to an Array. Otherwise, it will throw error of 'c' undeclared.
void print (int c, int (*a)[c], int r)     //You can use the definition of an Pointer to Array. The number of Columns need to be mentioned while catching the 2-D array in the function definition.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int (*a) [2];
    a = (int (*)[]) malloc (3 * sizeof (*a));      //Dynamic Memory allocation for the Rows. Size of each Row will be equal to the size of 1-D Array with 2 Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (2, a, 3);
    free (a);       //Free the address of Rows allocated dynamically.
    return 0;
/*0	1	
1	2	
2	3*/
}
#endif

#if 0
void print (int a[3][2])     //You can use the definition of a Static Array. The number of Rows & Columns need to be mentioned while catching the 2-D array in the function definition.
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int (*a) [2];
    a = (int (*)[]) malloc (3 * sizeof (*a));      //Dynamic Memory allocation for the Rows. Size of each Row will be equal to the size of 1-D Array with 2 Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (a);
    free (a);       //Free the address of Rows allocated dynamically.
    return 0;
/*0	1	
1	2	
2	3*/
}
#endif

#if 0
//note: declaration of 'r' and 'c' must be before the declaration of 'a' i.e. 2-D array. Otherwise, it will throw error of 'r' and 'c' undeclared.
void print (int c, int r, int a[r][c])     //You can use the definition of a Static Array. The number of Rows & Columns need to be mentioned while catching the 2-D array in the function definition.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int (*a) [2];
    a = (int (*)[]) malloc (3 * sizeof (*a));      //Dynamic Memory allocation for the Rows. Size of each Row will be equal to the size of 1-D Array with 2 Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (2, 3, a);
    free (a);       //Free the address of Rows allocated dynamically.
    return 0;
/*0	1	
1	2	
2	3*/
}
#endif

#if 0
void print (int c, int r, int* a[r])     //note: expected ‘int **’ but argument is of type ‘int (*)[2]’.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int (*a) [2];
    a = (int (*)[]) malloc (3 * sizeof (*a));      //Dynamic Memory allocation for the Rows. Size of each Row will be equal to the size of 1-D Array with 2 Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (2, 3, a);    //warning: passing argument 3 of ‘print’ from incompatible pointer type [-Wincompatible-pointer-types].
    free (a);       //Free the address of Rows allocated dynamically.
    return 0;
//Segmentation fault (core dumped)
}
#endif

#if 0
void print (int c, int r, int** a)     //note: expected ‘int **’ but argument is of type ‘int (*)[2]’.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int (*a) [2];
    a = (int (*)[]) malloc (3 * sizeof (*a));      //Dynamic Memory allocation for the Rows. Size of each Row will be equal to the size of 1-D Array with 2 Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (2, 3, a);    //warning: passing argument 3 of ‘print’ from incompatible pointer type [-Wincompatible-pointer-types].
    free (a);       //Free the address of Rows allocated dynamically.
    return 0;
//Segmentation fault (core dumped)
}
#endif

#if 0
void print (int c, int r, int* a)       //You can use the definition of a single pointer as we are passing the address of 0th element of the 2-D array.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", *((a + (i * c) + j)));      //Navigation will be element to element; so inside the row: (... + j) and next row: (a + (i*column_size)).
        printf ("\n");
    }
}

int main()
{
    int (*a) [2];
    a = (int (*)[]) malloc (3 * sizeof (*a));      //Dynamic Memory allocation for the Rows. Size of each Row will be equal to the size of 1-D Array with 2 Columns.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (2, 3, (int*) a);    //Type-casting a 2-D array is same as dereferencing it. So, after dereferencing; we are passing the 0th element address of the 0th 1-D array.
//We can also pass it as: &a[0][0].
    free (a);       //Free the address of Rows allocated dynamically.
    return 0;
/*0	1	
1	2	
2	3*/
}
#endif

#if 0
void print (int c, int (*a)[c], int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%p\t", &a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int (*a) [2];
    a = (int (*)[]) malloc (3 * sizeof (*a));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (2, a, 3);
    free (a);
    return 0;
//Memory allocation is Contiguous. The pointer returned by the malloc() is pointing to a Block of memory segment (3x8=24) in Heap.
/*0x5641bbdb1260	0x5641bbdb1264	
0x5641bbdb1268		0x5641bbdb126c	
0x5641bbdb1270		0x5641bbdb1274*/
}
#endif

/*-------------------------------------------------------Dynamic Array Declaration (Both Dynamic)-------------------------------------------------------*/
#if 0
void print (int** a)     //You can use the definition of a Double Pointer.
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int** a;
    a = (int**) malloc (3 * sizeof (int*));         //Dynamic Memory allocation for the Rows. Size of each Row will be equal to the size of a Pointer.
    for (int i = 0; i < 3; i++)                     //Dynamic Memory allocation for the Columns. Size of each Column will be equal to the size of an Integer.
        a[i] = (int*) malloc (2 * sizeof (int));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (a);
    for (int i = 0; i < 3; i++)
        free (a[i]);    //Free the address of Columns allocated dynamically.
    free (a);           //Free the address of Rows allocated dynamically.
    return 0;
/*0	1	
1	2	
2	3*/
}
#endif

#if 0
void print (int r, int c, int** a)     //You can use the definition of a Double Pointer. The number of Rows & Columns can be mentioned while catching the 2-D array in the function definition.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int** a;
    a = (int**) malloc (3 * sizeof (int*));         //Dynamic Memory allocation for the Rows. Size of each Row will be equal to the size of a Pointer.
    for (int i = 0; i < 3; i++)                     //Dynamic Memory allocation for the Columns. Size of each Column will be equal to the size of an Integer.
        a[i] = (int*) malloc (2 * sizeof (int));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (3, 2, a);
    for (int i = 0; i < 3; i++)
        free (a[i]);    //Free the address of Columns allocated dynamically.
    free (a);           //Free the address of Rows allocated dynamically.
    return 0;
/*0	1	
1	2	
2	3*/
}
#endif

#if 0
void print (int r, int c, int a[r][c])     //note: expected ‘int (*)[(sizetype)(c)]’ but argument is of type ‘int **’.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int** a;
    a = (int**) malloc (3 * sizeof (int*));         //Dynamic Memory allocation for the Rows. Size of each Row will be equal to the size of a Pointer.
    for (int i = 0; i < 3; i++)                     //Dynamic Memory allocation for the Columns. Size of each Column will be equal to the size of an Integer.
        a[i] = (int*) malloc (2 * sizeof (int));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (3, 2, a);    //warning: passing argument 3 of ‘print’ from incompatible pointer type [-Wincompatible-pointer-types].
    for (int i = 0; i < 3; i++)
        free (a[i]);    //Free the address of Columns allocated dynamically.
    free (a);           //Free the address of Rows allocated dynamically.
    return 0;
/*-368209280	22057	
-368209248	22057	
-368209216	22057*/
}
#endif

#if 0
void print (int r, int c, int* a[])    //You can use the definition of an Array of Pointers. The number of Rows & Columns can be mentioned while catching the 2-D array in the function definition.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int** a;
    a = (int**) malloc (3 * sizeof (int*));         //Dynamic Memory allocation for the Rows. Size of each Row will be equal to the size of a Pointer.
    for (int i = 0; i < 3; i++)                     //Dynamic Memory allocation for the Columns. Size of each Column will be equal to the size of an Integer.
        a[i] = (int*) malloc (2 * sizeof (int));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (3, 2, a);
    for (int i = 0; i < 3; i++)
        free (a[i]);    //Free the address of Columns allocated dynamically.
    free (a);           //Free the address of Rows allocated dynamically.
    return 0;
/*0	1	
1	2	
2	3*/
}
#endif

#if 0
void print (int r, int c, int* a[r])    //You can use the definition of an Array of Pointers. The number of Rows & Columns can be mentioned while catching the 2-D array in the function definition.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int** a;
    a = (int**) malloc (3 * sizeof (int*));         //Dynamic Memory allocation for the Rows. Size of each Row will be equal to the size of a Pointer.
    for (int i = 0; i < 3; i++)                     //Dynamic Memory allocation for the Columns. Size of each Column will be equal to the size of an Integer.
        a[i] = (int*) malloc (2 * sizeof (int));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (3, 2, a);
    for (int i = 0; i < 3; i++)
        free (a[i]);    //Free the address of Columns allocated dynamically.
    free (a);           //Free the address of Rows allocated dynamically.
    return 0;
/*0	1	
1	2	
2	3*/
}
#endif

#if 0
void print (int r, int c, int (*a)[c])    //note: expected ‘int (*)[(sizetype)(c)]’ but argument is of type ‘int **’.
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%d\t", a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int** a;
    a = (int**) malloc (3 * sizeof (int*));         //Dynamic Memory allocation for the Rows. Size of each Row will be equal to the size of a Pointer.
    for (int i = 0; i < 3; i++)                     //Dynamic Memory allocation for the Columns. Size of each Column will be equal to the size of an Integer.
        a[i] = (int*) malloc (2 * sizeof (int));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (3, 2, a);    //warning: passing argument 3 of ‘print’ from incompatible pointer type [-Wincompatible-pointer-types].
    for (int i = 0; i < 3; i++)
        free (a[i]);    //Free the address of Columns allocated dynamically.
    free (a);           //Free the address of Rows allocated dynamically.
    return 0;
/*-733162880	21865	
-733162848	21865	
-733162816	21865*/
}
#endif

#if 1
void print (int r, int c, int** a)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf ("%p\t", &a[i][j]);
        printf ("\n");
    }
}

int main()
{
    int** a;
    a = (int**) malloc (3 * sizeof (int*));
    for (int i = 0; i < 3; i++)
        a[i] = (int*) malloc (2 * sizeof (int));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            a[i][j] = i + j;
    }
    print (3, 2, a);
    for (int i = 0; i < 3; i++)
        free (a[i]);
    free (a);
    return 0;
//Memory allocation is not Contiguous. Each pointer returned by the malloc() is pointing to different memory segments in Heap.
/*0x556e55cd4280	0x556e55cd4284	
0x556e55cd42a0		0x556e55cd42a4	
0x556e55cd42c0		0x556e55cd42c4*/
}
#endif
