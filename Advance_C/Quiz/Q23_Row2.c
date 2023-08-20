#include <stdio.h>

int main()
{
    int option = 25;
    
    switch (option)
    {
        case 25:
            printf("10\n");
            break;
        
        case 20 + 5:
            printf("20\n");
            break;
        
        default:
            printf("Try again\n");
    }
    
    return 0;
}


/*
Ans:

Q23_Row2.c: In function ‘main’:
Q23_Row2.c:13:9: error: duplicate case value
         case 20 + 5:
         ^~~~
Q23_Row2.c:9:9: note: previously used here
         case 25:
         ^~~~
 */
