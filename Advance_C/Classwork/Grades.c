#include <stdio.h>

int main ()
{
    int marks;
    printf ("Enter the marks received: ");
    scanf ("%d", &marks);

    if (marks >= 90)
    {
        printf ("Grade received is A.\n");
    }
    else if (marks >=80)
    {
        printf ("Grade received is B.\n");
    }
    else if (marks >= 70)
    {
        printf ("Grade received is C.\n");
    }
    else if (marks >= 60)
    {
        printf ("Grade received is D.\n");
    }
    else if (marks >= 50)
    {
        printf ("Grade received is E.\n");
    }
    else if (marks >= 40)
    {
        printf ("Grade received is Pass.\n");
    }
    else
    {
        printf ("Grade received is Fail.\n");
    }
    return 0;
}
