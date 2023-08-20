#if 0
#include <stdio.h>

int main()
{
    int iter = 0;
    for (; iter < 10; )
    {
        printf ("iter: %d\n", iter++);
    }
    printf ("iter = %d\n", iter);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int iter = 0;
    for (; iter < 10; )
    {
        printf ("iter: %d\n", ++iter);
    }
    printf ("iter = %d\n", iter);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int iter = -1;
    for (; iter < sizeof (int); iter++)     //In the condition, 'sizeof' returns an unsigned long type value. So, 'iter' which is signed int is type promoted.
    {
        printf ("Hello\n");
    }
    printf ("%zu\n", sizeof (int));
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i = -1;
    for (; i;)
    {
        for (; i--;)    //The loop will run from -1 to (-2^(-31)) and will go to 0. At 0, the outer loop will break and that is the final value of 'i'.
            break;
    }
    printf ("%d\n", i);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i;                        //This 'i' controls the loop execution.
    for (i = 3; i > 0; i--)
    {
        int i = 4;      //In this scope, this declaration of 'i' overshadows the declaration of 'i' outside the loop {}. So, the value of 'i' fetched and used in the block.
        --i;
        printf ("%d..", i);     //Everytime the loop executes, 'i' is initialised to 4, 'i' is reduced by '1' and so '3..' is printed irrespective of the value of loop variable 'i'.
    }
    printf ("\n");
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (i > 07) break;      //This is a valid statement. The compiler takes 'break' as the immediate first-line and executes it if the condition is TRUE.
        printf ("A\n");
    }
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 500; i++)      //This set of loop will run slower.
        for (int j = 1; j <= 50; j++);

    for (int i = 1; i <= 50; i++)       //This set of loop will run faster.
        for (int j = 1; j <= 500; j++);
    return 0;

//The reason behind the logic is as follows:
//In the 1st scenario; the variable 'i' is going to be initialised 1 time while the variable 'j' is going to be initialised and destroyed 500 times in the stack frame.
//In the 2nd scenario; the variable 'i' is going to be initialised 1 time while the variable 'j' is going to be initialised and destroyed 50 times in the stack frame.
//The compiler can perform the second code faster than the first one due to less number of operations.
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 5; i++)
        int a = i;                  //error: expected expression before ‘int’
    printf ("%d\n", a);             //error: ‘a’ undeclared (first use in this function)
    return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        int a = i;                  //No error when this statement is written inside {...}
    }
    printf ("%d\n", a);             //error: ‘a’ undeclared (first use in this function)
    return 0;
}
#endif
