/* To perform Postfix Increment on an Integer without using '++' or '+' Operator.
 */

#include <stdio.h>

int postfix_inc (int* num)
{
	int mask = 1;
	while (*num & mask)						//The loop shall run to find the first '0' from the LSB side.
	{
		*num = *num ^ mask;					//If the Bit encountered is '1', XOR it with 'mask' to change it to '0'
		mask = mask << 1;					//To Left Shift the Mask for checking if the Next Bit is '0' or not.
	}
	
	*num = *num | mask;						//To OR the updated value of 'num' with the 'mask' for getting the Final incremented value.
	return (*num - 1);						//Being a Postfix Increment, the old value shall be returned from the Function.
}

int main()
{
	int i = 2;
	printf ("%d\n", postfix_inc (&i));		//To print the Original Value as per the rules of Postfix Increment.
	printf ("%d\n", i);						//To print the Updated Value in the Second use of the Variable.
	return 0;
}
