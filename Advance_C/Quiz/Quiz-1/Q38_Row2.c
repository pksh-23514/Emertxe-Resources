#include <stdio.h>

int main()
{
    int a;
    
    int b;
    
    b = (a = 2, a + 3);
    
    printf("%d %d\n", a, b);
    
    return 0;
}



// Ans: 2 5 
