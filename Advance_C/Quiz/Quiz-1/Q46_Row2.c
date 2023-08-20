#include <stdio.h>

int main()
{
    int i;
    
    i = 0;
    
    do
    {
        break;        
        printf("%d\n", i++);
    } while (i++ < 10);
    
    printf("%d\n", ++i);
    
    return 0;
}



// Ans: 1
