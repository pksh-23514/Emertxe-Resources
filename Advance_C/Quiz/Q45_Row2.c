#include <stdio.h>

int main()
{
    int a, b, c, d;
    
    a = 1;
    b = -1;
    c = 0;
    
    d = !a + !~b + ~c;
    
    printf("%d\n", d);
    
    return 0;
}



// Ans: 0
