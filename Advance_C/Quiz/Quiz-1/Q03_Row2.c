#include<stdio.h>

int main()
{
    int num = 0;

    while (num == 0);
    if (num++)
    {
        break;
    }
    else
    {
        printf("No\n");
    }

    return 0;
}


/*
Ans: 

Q3_Row2.c: In function ‘main’:
Q3_Row2.c:10:9: error: break statement not within loop or switch
         break;
         ^~~~~
*/
