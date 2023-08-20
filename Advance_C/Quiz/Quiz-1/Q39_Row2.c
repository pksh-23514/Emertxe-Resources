#include <stdio.h>

int main()
{
    int option = 25;
    
    switch (option)
    {
        default:
            printf("Try again\n");
        
        case 10:
            printf("10\n");
            break;
        
        case 20:
            printf("20\n");
            break;
    }
    
    return 0;
}



/* 
Ans: Try again
     10
*/
