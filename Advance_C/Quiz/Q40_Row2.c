#include <stdio.h>

int main()
{
    const short i;
    
    i = 20;
    
    printf("%d\n", i);
    
    return 0;
}


/*
Ans:

Q40_Row2.c: In function ‘main’:
Q40_Row2.c:7:7: error: assignment of read-only variable ‘i’
     i = 20;
       ^
*/
