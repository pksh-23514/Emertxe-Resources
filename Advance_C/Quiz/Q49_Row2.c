#include <stdio.h>

int main()
{
    float option = 25;
    
    switch ((int) option)
    {
        case 10:
            printf("10\n");
            continue;
        
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

Q49_Row2.c: In function ‘main’:
Q49_Row2.c:11:13: error: continue statement not within a loop
             continue;
             ^~~~~~~~
*/
