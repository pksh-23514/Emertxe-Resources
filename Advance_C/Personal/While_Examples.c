#if 0
#include <stdio.h>

int main()
{
    int i = 0;
    while ()
    {
        printf ("%d\n", i);
        i++;
    }
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int num = 0;
    while (num == 0)
    {
        if (num++)
            break;
        else
            printf ("NO\n");
    }
    return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
    int a = 1;
    while (a-- >= 1)
        while (a-- >=0);        //Single line statement for the outer loop. The ';' ensures the inner loop ends here.
    printf ("%d\n", a);         //This statement is outside of the nested loops.
    return 0;
}
#endif
