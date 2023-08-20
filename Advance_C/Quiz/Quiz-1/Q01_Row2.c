#include<stdio.h>

int main()
{
    int a, b;

    a = -1;

    b = a << 31;

    printf("%x\n", b);

    return 0;
}


// Ans: 80000000
