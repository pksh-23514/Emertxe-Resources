#include <stdio.h>

int main()
{
    char i = 1;
    
    for ( ; i--; )
    {
        do
        {
        } while (i--);
        break;
    }
    
    printf("%d\n", i);
    
    return 0;
}

// Ans: -1

