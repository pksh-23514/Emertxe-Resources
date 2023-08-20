#include <stdio.h>

int main()
{
    unsigned char num = 0x7F;
    
    if (~num)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}


// Ans: Yes
