#include <stdio.h>

int main()
{
    char i = 0377;
    
    for ( ; i; )
    {
        for ( ; i--; )
        {
            break;
        }
    }
    
    printf("%d\n", i);
    
    return 0;
}


// Ans: 0
