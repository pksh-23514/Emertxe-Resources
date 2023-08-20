#include <stdio.h>

int main()
{
    int num = -1;
    
    if (++num)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}


// Ans: No



/*
Extra Note:

-------------------------

Q2_Row2.c

unsigned int num = -1;
    if (num < 1)
        Ans: No
   
-------------------------

Q12_Row.c

int num = 0;
    if (num++)
        Ans: No

-------------------------        

Q18_Row.c
   
int num = 1;
    if (--num)
        Ans: No
-------------------------

Q37_Row.c

int num = -1;
    if (++num)
        Ans: No

-------------------------

Q32_Row.c
   
int num = -1
    if (!num)
        Ans: No

-------------------------

Q29_Row.c

unsigned char num = 0x7F;
    if (~num)
        Ans: Yes

-------------------------

*/
