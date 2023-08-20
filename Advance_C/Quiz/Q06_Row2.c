#include<stdio.h>

int main()
{
    int a = 10;
    int b = 10;
    int c;

    c = a++ > b ? 1 : 2;
    printf("%d\n", c);

    return 0;
}

// Ans: 2

