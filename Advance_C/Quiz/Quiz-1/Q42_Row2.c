#include <stdio.h>

int main()
{
    int a = 5;
    
    int b;
    
    b = ++a, a++, --a, a--;
    
    printf("%d %d\n", a, b);
    
    return 0;
}



// Ans: 5 6
