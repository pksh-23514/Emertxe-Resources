#include <stdio.h>

int main()
{
    int option = 25;
    
    switch (option)
    {
        case option + 10:
            printf("10\n");
            break;
        
        case option + 20:
            printf("20\n");
            break;
        
        default:
            printf("Try again\n");
    }
    
    return 0;
}

/*
Ans:

Q24_Row2.c: In function ‘main’:
Q24_Row2.c:9:9: error: case label does not reduce to an integer constant
         case option + 10:
         ^~~~
Q24_Row2.c:13:9: error: case label does not reduce to an integer constant
         case option + 20:
         ^~~~
*/
