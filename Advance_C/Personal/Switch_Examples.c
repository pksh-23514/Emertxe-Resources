#if 0
#include <stdio.h>

int main()
{
    int opt;
    scanf ("%d", &opt);
    switch (opt)
    {
        case 1 ... 10 : printf ("Range: 1 - 10\n");
                        break;
        case 11 ... 20 : printf ("Range: 11 - 20\n");
                         break;
        default: printf ("Range Out-of-Bounds\n");
    }
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int opt;
    scanf ("%d", &opt);
    switch (opt)
    {
        case 1 ... 10 : printf ("Range: 1 - 10\n");
                        break;
        case 10 ... 20 : printf ("Range: 11 - 20\n");
                         break;
        default: printf ("Range Out-of-Bounds\n");
    }
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int opt, n;
    scanf ("%d", &opt);
    switch (opt)
    {
        int x = 100;    //This statement throws a warning as 'statement will never be get executed [-Wswitch-unreachable]'.
        n = 50;         //This statement throws a warning as 'statement will never be get executed [-Wswitch-unreachable]'.
        case 1: printf ("Hi %d\n", x);  //Garbage value is printed. 'x' is a variable whose memory is created, but no initialisation as the statement is not executed.
                break;
        case 2: printf ("Hello %d\n", x);
                break;
        default: printf ("Bye\n");
    }
    printf ("%d\n", n);     //Garbage value is printed.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int opt, n;
    scanf ("%d", &opt);
    switch (opt)
    {
        static int x = 100;    //This statement should work because the actual storage will not be in the switch-frame code. It will be in the static storage area and will be bound to the same RAM.
        n = 50;         //This statement throws a warning as 'statement will never be get executed [-Wswitch-unreachable]'.
        case 1: printf ("Hi %d\n", x);  //Correct value is printed. 'x' is a static variable whose memory is created in the static storage area and is available for execution.
                break;
        case 2: printf ("Hello %d\n", x);
                break;
        default: printf ("Bye\n");
    }
    printf ("%d\n", n);     //Garbage value is printed.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int opt, n;
    scanf ("%d", &opt);
    switch (opt)
    {
        case 1: int x = 100;    //This statement throws an error as 'a label can only be a part of a statement and declaration is not a statement'.
                printf ("Hi %d\n", x);
                break;
        case 2: x = 200;
                printf ("Hello %d\n", x);
                break;
        default: printf ("Bye\n");
    }
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int opt, n;
    scanf ("%d", &opt);
    switch (opt)
    {
        case 1: static int x = 100;    //This statement throws an error as 'a label can only be a part of a statement and declaration is not a statement' even with static keyword.
                printf ("Hi %d\n", x);
                break;
        case 2: x = 200;
                printf ("Hello %d\n", x);
                break;
        default: printf ("Bye\n");
    }
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int opt, n;
    scanf ("%d", &opt);
    switch (opt)
    {
        printf ("Emertxe\n");//This statement throws a warning as 'statement will never be get executed [-Wswitch-unreachable]'.
        case 1: n = 100;    //This statement works as 'n' is already initialised outside of Switch. Declaration is not a statement but initialisation is a statement.
                printf ("Hi %d\n", n);
                break;
        case 2: n = 200;    //This statement works as 'n' is already initialised outside of Switch. Declaration is not a statement but initialisation is a statement.
                printf ("Hello %d\n", n);
                break;
        default: n = 300;   //This statement works as 'n' is already initialised outside of Switch. Declaration is not a statement but initialisation is a statement.
                 printf ("Bye\n");
    }
    printf ("%d\n", n);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int opt, n;
    scanf ("%d", &opt);
    switch (opt)
    {
        case 1: 
            {
                int x = 100;    //This statement now works in the braced blocks, within a braced case statement.However, the variable scope is limited to the brace pair and not visible anywhere else.
                n = 50;         
                printf ("Hi %d\n", x);  //Correct value is printed.
            }
            break;
        case 2: n = 100;
                printf ("Hello\n");     //'x' is not accessible here as the variable scope ends with the braces in 'case-1'.
                break;
        default: printf ("Bye\n");
    }
    printf ("%d\n", n);     //Garbage value is printed only in situation where the 'default' case is executed.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int opt, n;
    scanf ("%d", &opt);
    switch (opt)
    {
        {
            int x = 100;    //This statement throws a warning as 'statement will never be get executed [-Wswitch-unreachable]'.
            n = 50;         //This statement throws a warning as 'statement will never be get executed [-Wswitch-unreachable]'.
        }
        case 1: printf ("Hi\n");  //Error: 'x' is undeclared is shown if we try to print 'x' as the variable scope is limited to the braces after switch().
                break;
        case 2: printf ("Hello\n");
                break;
        default: printf ("Bye\n");
    }
    printf ("%d\n", n);     //Garbage value is printed as the initialisation of 'n' is not executed.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int opt;
    scanf ("%d", &opt);
    switch (opt)
    {
        case 1: ;               //This is a valid statement.
                int x = 100;    //This statement doesn't throw a warning due to the above ';' being the first statement.
                printf ("Hi %d\n", x);      //Correct value is printed.
                break;
        case 2: printf ("Hello %d\n", x);   //Garbage value is printed.
                break;
        default: printf ("Bye\n");
    }
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int opt = 10;
    switch (opt)
    {
        case opt + 10: printf ("Hi\n");         //Error: case label does not reduce to integer constant.
                       break;
        case opt + 20: printf ("Hello\n");      //Error: case label does not reduce to integer constant.
                       break;
        default: printf ("Bye\n");
    }
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int opt = 25;
    switch (opt)
    {
        case 5 + 10: printf ("Hi\n");       //The case label evaluates the expression '5 + 10 = 15'. Therfore, this can be rewritten as: 'case 15:'.
                       break;
        case 5 + 20: printf ("Hello\n");    //The case label evaluates the expression '5 + 20 = 25'. Therfore, this can be rewritten as: 'case 25:'.
                       break;
        default: printf ("Bye\n");
    }
    return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
    char c = 163;       //The value is greater than the limit of signed char (+127). Therefore, it is stored as '163-256 = -93'.
    switch (c)
    {
        case 163: ;                 //Although char c = 163 will be stored as -93, value 163 in 'case' statement is not a char but an int value. So, this is not a duplicate case scenario.
                  printf ("163\n");
                  break;
        case -93: ;                 //Since, this case statememt matches with the value in 'c', this case is executed by the compiler.
                  printf ("-93\n");
                  break;
        default: printf ("No Surprises\n");
    }
    return 0;
}
#endif
