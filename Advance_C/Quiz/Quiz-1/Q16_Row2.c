#include <stdio.h>

int main()
{
    int i, j;
    
    i = j = 0;
    
    for ( ; i < 2, j < 5; )
    {
        printf("%d %d\n", i++, j++);
    }
    
    return 0;
}

/* 
Ans: 0 0
     1 1
     2 2
     3 3
     4 4
*/
