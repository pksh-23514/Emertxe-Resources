#include <stdio.h>

int main()
{
    int option = 25;
    
    switch (option)
    {
        case 10 + 15:
            printf("10\n");
            break;
        
        case 20:
            printf("20\n");
            break;
        
        default:
            printf("Try again\n");
    }
    
    return 0;
}

// Ans: 10
