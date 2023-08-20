#if 0
#include <stdio.h>

int main()
{
    int x = 5;
//All the below 3 declarations are valid for declaring a Pointer variable.
    int* p1 = &x;
    int * p2 = &x;
    int *p3 = &x;
    
    printf ("%d\n", x);
    printf ("%p\n", p1);
    printf ("%p\n", p2);
    printf ("%p\n", p3);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    long double ld = 256.12, *ldp = &ld;       //This type of Pointer declaration along with a normal data-type variable is also valid.
    double d = 32.61, *dp = &d;
    float f = 7.5f, *fp = &f;
    long l = 256, *lp = &l;
    int i = 32, *ip = &i;
    short s = 8, *sp = &s;    
    char c = 'A', *cp = &c;

/*
The order of memory allocation is: 
Char -> Short -> Float -> Int -> Long Double* -> Double ->  Double* -> Float* -> Long -> Long* -> Int* -> Short* -> Char* -> Long Double
*/
    printf ("Long Double:          %p\n", ldp);
    printf ("Double:               %p\n", dp);
    printf ("Float:                %p\n", fp);
    printf ("Long:                 %p\n", lp);
    printf ("Int:                  %p\n", ip);
    printf ("Short:                %p\n", sp);
    printf ("Char:                 %p\n", cp);

    printf ("Long Double Pointer:  %p\n", &ldp);
    printf ("Double Pointer:       %p\n", &dp);
    printf ("Float Pointer:        %p\n", &fp);
    printf ("Long Pointer:         %p\n", &lp);
    printf ("Int Pointer:          %p\n", &ip);
    printf ("Short Pointer:        %p\n", &sp);
    printf ("Char Pointer:         %p\n", &cp);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x = 10;
//Both the below declarations are valid for "Referencing" an address to the Pointer.
    int* p1 = &x;       //Declaration & Initialisation in a single line.
    int* p2;            //Declaration in one line.
    p2 = &x;            //Initialisation in the second line.

    printf ("p1: %p\n", p1);
    printf ("p2: %p\n", p2);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x = 10;
    printf ("Value of x: %d\n", x);
    int* ptr = &x;
    *ptr = 20;                      //This is the statement for "De-Referencing" a Pointer.
//It tells the compiler to go-to the address stored in the Pointer and fetch the number of bytes equal to the size of the data type under which the Pointer is declared.
    printf ("Value of x: %d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x = 10;
    int* ptr = &x;
    *ptr = 20;
    int* p = 0X230796;      //Warning generated as the variable 'p' is of 'int*' type. But the value it is being initialised is of 'int' type. So, it is a Type-mismatch!
//We can correct this error by doing Explicit Type-casting of (int*) data type.
    printf ("ptr: %p\n", ptr);
    printf ("p: %p\n", p);
    printf ("x: %d\n", *ptr);
//If you print the value stored at the address stored in 'p' i.e (printf ("%d\n",*p);): It will be Segmentation default (core dumped).
//The reason being you can only access the values stored in the addresses assigned to your program.
//You can initialise the pointer to an address not allocated to your code.
//But you cannot fetch the value stored at that address. If you are able to fetch the value, then it is a security breach.
//"You should only be able to access the memory allocated to your program and any other memory access should be strictly restricted by your system."
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int* p = NULL;
    int* q = 0;
    if (p)
        printf ("p\n");
    else
        printf ("Null p\n");
    if (q)
        printf ("q\n");
    else
        printf ("Null q\n");
    return 0;
/*Null p
  Null q*/
//The value of '0' and the macro 'NULL' inside if() is False.
}
#endif

#if 0
#include <stdio.h>

int* f();
int main()
{
    int* p = f();
    printf ("%d\n", *p);
    return 0;
}
int* f()
{
    int j = 10;
    return &j;      //warning: function returns address of local variable [-Wreturn-local-addr]
}
//Segmentation fault (core dumped)
#endif

#if 0
#include <stdio.h>

int* f();
int main()
{
    int* p = f();
    printf ("%d\n", *p);
    return 0;
}
int* f()
{
    int j = 10;
    int* p = &j;
    return p;
}
//10
//No Warning thrown by the Compiler. So, we cannot directly return the address of the variable. But we can store it in a pointer and return that pointer to the calling function.
//This is kind of cheating the Compiler to return a local variable's address. Although, the stack frame is deleted for the function, the memory is still allocated to this program.
#endif

#if 0
#include <stdio.h>

int* p;     //The global declaration of the pointer causes it to be initialised with a default value of "NULL".
int main()
{
    if (p == 0)
        printf ("True\n");
    return 0;
}
//True (Only in some cases as the macro NULL defined as ((void*)0), 0 or 0L depending on the compiler vendor).
#endif

#if 0
#include <stdio.h>

int* p;     //The global declaration of the pointer causes it to be initialised with a default value of "NULL".
int main()
{
    if (p == NULL)
        printf ("True\n");
    return 0;
}
//True (Always).
#endif

#if 0
#include <stdio.h>

int main()
{
    const int num = 100;
    int* ptr = &num;        //warning: initialization discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
    *ptr = 200;
    printf ("%d\n", num);
    return 0;
//200
//We are not using 'num' to change the value (as that would have caused a compiler error), we are using the pointer variable (i.e. the address of 'num') to change its value.
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i = 10, j = 20;
    int* const p = &i;      //Constant pointer.
    p = &j;                 //error: assignment of read-only variable ‘p’. You cannot change the address being stored in the constant pointer.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i = 10, j = 20;
    int* const p = &i;      //Constant pointer.
    *p = j;                 //You can change the value being pointed by the constant pointer.
    printf ("%d\n", i);
    return 0;
//20
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i = 10;
    const int* p = &i;      //Pointer to Constant.
    *p = 20;                //error: assignment of read-only location ‘*p’. You cannot change the value being pointed by the pointer to constant. You can change it directly using variable name.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i = 10, j = 20;
    const int* p = &i;      //Pointer to Constant.
    printf ("%p\n", p);
    p = &j;                 //You can change the address being stored in the pointer to constant.
    i = 20;                 //You can change the value directly using the variable name.
    printf ("%p\n", p);
    printf ("%d\n", i);
    return 0;
/*0x7ffc128c71d8
  0x7ffc128c71dc
  20*/
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i = 10, j = 20;
    const int* const p = &i;        //Constant Pointer to a Constant.
    *p = 20;                        //error: assignment of read-only location ‘*p’. You cannot change the value being pointed by the constant pointer to constant.
    p = &j;                         //error: assignment of read-only variable ‘p’. You cannot change the address being stored in the constant pointer to constant.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i = 1, j = 2, k = 3;
    int* const const const p1 = &i;         //No matter how many 'const' you use after 'int*'; it won't throw any compiler error. They are valid declarations.
    const const const int* p2 = &j;         //No matter how many 'const' you use before 'int*'; it won't throw any compiler error. They are valide declarations.
    const const int* const const p3 = &k;   //No matter how many 'const' you use before and after 'int*'; it won't throw any compiler error. They are valid declarations.
    printf ("%p\t%p\t%p\n", p1, p2, p3);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int d;
    long* s = 0;
    d = (int)(s + 1);         //warning: cast from pointer to integer of different size [-Wpointer-to-int-cast].
    printf ("%d\n", d);
    return 0;
//8
//Although the Type-cast is happening to an integer type, s is increased by the value of the Data-type it is initially declared. So, '(s+1)' increases the address by 8 and then converted to int.
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int d;
    long* s = 0;
    d = (int)s + 1;         //warning: cast from pointer to integer of different size [-Wpointer-to-int-cast].
    printf ("%d\n", d);
    return 0;
//8
//Although the Type-cast is happening to an integer type, here s is not increased by the value of the Data-type it is initially declared as there is no '(...)' to make it as higher precedence.
//So, 's' is converted to an int value and then then increases by 1 as a normal Arithmetic operation.
}
#endif
