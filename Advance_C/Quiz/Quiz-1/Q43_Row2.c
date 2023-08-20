#include <stdio.h>

int main()
{
    int i;
    
    i = 0;
    
    for ( ; --i ; )
    {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}


/*
Ans: -1
     -1
     -1
     -1
     -1
      .
      .
      .
      .
      Infinite
*/
