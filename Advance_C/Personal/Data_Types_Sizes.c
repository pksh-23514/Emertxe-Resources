#include <stdio.h>
#include <stdint.h>     //The <stdint.h> header defines integer types, limits of specified width integer types, limits of other integer types and macros for integer constant expressions.

int main()
{
    printf ("Size of Data Types in C :\n");
    printf ("Int           : %lu\n", sizeof (int));
    printf ("Char          : %lu\n", sizeof (char));
    printf ("Short         : %lu\n", sizeof (short));
    printf ("Long Int      : %lu\n", sizeof (long int));
    printf ("Long Long Int : %lu\n", sizeof (long long int));
    printf ("Float         : %lu\n", sizeof (float));
    printf ("Double        : %lu\n", sizeof (double));
    printf ("Long Double   : %lu\n", sizeof (long double));
    printf ("\n");

    printf ("Size of Fixed Width Data Types in C:\n");
    printf ("Signed Int_8    : %zu\n", sizeof (int8_t));
    printf ("Signed Int_16   : %zu\n", sizeof (int16_t));
    printf ("Signed Int_32   : %zu\n", sizeof (int32_t));
    printf ("Signed Int_64   : %zu\n", sizeof (int64_t));
    printf ("Unsigned Int_8  : %zu\n", sizeof (uint8_t));
    printf ("Unsigned Int_16 : %zu\n", sizeof (uint16_t));
    printf ("Unsigned Int_32 : %zu\n", sizeof (uint32_t));
    printf ("Unsigned Int_64 : %zu\n", sizeof (uint64_t));
    printf ("\n");

    printf ("Size of Pointers in C : \n");
    printf ("Int Pointer           : %lu\n", sizeof (int *));
    printf ("Char Pointer          : %lu\n", sizeof (char *));
    printf ("Short Pointer         : %lu\n", sizeof (short *));
    printf ("Long Int Pointer      : %lu\n", sizeof (long int *));
    printf ("Long Long Int Pointer : %lu\n", sizeof (long long int *));
    printf ("Float Pointer         : %lu\n", sizeof (float *));
    printf ("Double Pointer        : %lu\n", sizeof (double *));
    printf ("Long Double Pointer   : %lu\n", sizeof (long double *));
    printf ("\n");

    return 0;
}
