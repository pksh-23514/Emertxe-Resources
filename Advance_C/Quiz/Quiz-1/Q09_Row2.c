#include <stdio.h>

int main()
{
    int i = 019;
    
    printf("%d\n", i++);
    printf("%x\n", i++);
    printf("%o\n", i++);

    return 0;
}

/*
Ans:

Q9_Row2.c: In function ‘main’:
Q9_Row2.c:5:13: error: invalid digit "9" in octal constant
     int i = 019;
*/
