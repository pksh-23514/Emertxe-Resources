#include <stdio.h>

int main()
{
    float a = 1.5;
    
    int b = 0x30;
    
    char c = 0;
    
    c += b += a;
    
    printf("%c\n", c);
    
    return 0;
}

// Ans: 1
