#include <stdio.h>

int main()
{
    int i;
    
    for (i = -1; i < sizeof(i); i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}


// Ans: (No output display) Nothing will display in terminal, because for loop condition is false.
