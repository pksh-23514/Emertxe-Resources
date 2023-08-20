#include <stdio.h>

int main()
{
    int count = 0;
    unsigned char iter = 0xA5;
    
    while (iter != 0)
    {
        if (iter & 0x01)
        {
            count++;
        }
        iter >>= 1;
    }
    
    printf("%d\n", count);

    return 0;
}


// Ans: 4
