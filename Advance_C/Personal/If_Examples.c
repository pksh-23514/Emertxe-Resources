#if 0
#include <stdio.h>

int main()
{
    int x;
    if (x=5)
        printf ("Hello\n");
    printf ("%d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x;
    if (x=5);           //Although If-block is terminated here, the value of 'x' is assigned '5' in the memory and is printed in the next statement.
    printf ("%d\n", x);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    if (10)     //Condition is True! Any non-zero value inside if is always True.
        printf ("10\n");
    if (-10)    //Condition is True! Any non-zero value inside if is always True.
        printf ("-10\n");
    if (0)      //Condition is False! Zero value inside if is always False.
        printf ("0\n");
    else
        printf ("False\n");     //Hence, this statement gets executed.
    return 0;
}
#endif

#if 0 
#include <stdio.h>

int main()
{
    int x = 0;
    if (x < 5)
        printf ("Hello ");      //Only this statement is a part of If-block as there are no curly brackets.
    printf ("World\n");         //This is a regular statement and not a part of the If-block.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int x = 0;
    if (x < 5);     	    //If is terminated here only due to the ';' at the end.
    printf ("Hello ");      //This is a regular statement and not a part of the If-block.
    printf ("World\n");     //This is a regular statement and not a part of the If-block.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int marks;
    printf ("Enter the marks: ");
    scanf ("%u", &marks);
    if (marks > 50)
        printf ("Third Class\n");
    else if (marks > 60)
        printf ("Second Class\n");
    else if (marks > 70)
        printf ("First Class\n");
    else if (marks > 80)
        printf ("Distinction\n");
    return 0;                           //If marks is (<=50): No output is given as there is no else case. If marks is (>50): Third Class is printed.
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int marks;
    printf ("Enter the marks: ");
    scanf ("%u", &marks);
    if (marks > 80)                 //If marks is (>80): Distinction is printed.
        printf ("Distinction\n");
    else if (marks > 70)            //If marks is (>70): First Class is printed.
        printf ("First Class\n");
    else if (marks > 60)            //If marks is (>60): Second Class is printed.
        printf ("Second Class\n");
    else if (marks > 50)            //If marks is (>50): Third Class is printed.
        printf ("Third Class\n");
    return 0;                       //If marks is (<=50): No output is given as there is no else case.
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i = 0;
    if (i = !i)             //The assignment happens first. Based on the value assigned to 'i', the condition is checked. Also, the value assigned to 'i' is updated in the Memory too.
        printf ("Hi\n");
    else if (i = !!i)
        printf ("Hello\n");
    else if (1)             //This condition is always TRUE. But it is executed only if the above 2 conditions are FALSE.
        printf ("Bye\n");
    else
        printf ("Enough man\n");
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int i=0;
    if (i == 0)
        int a = i;                  //error: expected expression before ‘int’
    printf ("%d\n", a);             //error: ‘a’ undeclared (first use in this function)
    return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
    int i=0;
    if (i == 0)
    {
        int a = i;                  //No error when this statement is written inside {...}
    }
    printf ("%d\n", a);             //error: ‘a’ undeclared (first use in this function)
    return 0;
}
#endif
