#include <stdio.h>

int main()
{
    signed char num;
    printf ("Enter the number: ");
    scanf (" %hhd", &num);  //To take the input from user in signed format. The size of '%hhd' is equivalent to signed char (1 byte).

    unsigned char swp;
    //We use the Bitwise-AND on the number and choose the mask such that at one time, the 4 bits of the number are retained and the other 4 bits are made 0.
    //Then we shift those retained 4 bits to the location of the destroyed 4 bits using left/right shift operators.
    //However, for the purpose of right shift; the number should be specifically in "unsigned" format, otherwise the sign bit can create problem.
    //Then we use Bitwise-OR to combine both the 4-bit parts to create the final number.
    
    swp = (((num & 0x0F) << 4) | ((num & 0xF0) >> 4));  //We can also use ((num << 4) | (num >> 4)) if 'num' is type-casted as 'unsigned char' during initialisation.
    printf ("Real Number: 0X%hhX\n", num);  //The '%hhX' is to print the 'num' of 1 byte in Hex. If we use '%X', 'num' will be size promoted to signed int and 32 bits will be displayed.
    printf ("Swap Number: 0X%hhX\n", swp);
    return 0;
}
