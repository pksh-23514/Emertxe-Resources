#include <stdio.h>

int main()
{
    float option = 25;
    
    switch ((int) option)
    {
        case 10.0:
            printf("10\n");
            break;
        
        case 25:
            printf("20\n");
            break;
        
        default:
            printf("Try again\n");
    }
    
    return 0;
}



/*
Ans:

Q41_Row2.c: In function ‘main’:
Q41_Row2.c:9:9: error: case label does not reduce to an integer constant
         case 10.0:
         ^~~~
*/
