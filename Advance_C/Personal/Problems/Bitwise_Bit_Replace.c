#include <stdio.h>

void print_bits (unsigned int num)		//The function to Print the Binary representation of the Number and return the Number of Bits required to represent the Number.
{
	printf ("Binary Representation of the Number: LSB -> ");

	if ((num == 0) || (num == 1))		//If the Number is '1' or '0', only 1 Bit is enough to represent the Number.
	{
		printf ("%d <- MSB\n", num);
		return;
	}

	int count = 0;
	char ch;
	while (num != 0)
	{
		ch = (num & 1) ? '1' : '0';		//To check if the Bit is Set or Clear.
		printf ("%c ", ch);				//Print the Binary representation of the Number.
		count += 1;						//Count the Number of Bits required to represent the Number in Binary.
		num = num >> 1;					//To remove the Bit already printed.
	}
	printf ("<- MSB\n");
}

int main()
{
	int num1, num2, pos, bit;
	printf ("Enter the Number whose Bit needs to be replaced: ");
	scanf ("%d", &num1);
	printf ("Enter the Bit Position which needs to be replaced: ");
	scanf ("%d", &pos);
	printf ("Enter the Number whose Bit needs to be extracted for replacing: ");
	scanf ("%d", &num2);

	if (pos > 31)
		printf ("The Bit Position is Invalid.\n");
	else
	{
		printf ("Number whose Bit needs to be replaced: ");
		print_bits (num1);
		printf ("Number from where Bit to be extracted: ");
		print_bits (num2);

		num1 = num1 & (~(1 << pos));		//Clear the Bit position 'pos' from the 'num1'.
		bit = num2 & (1 << pos);			//Get the Bit from the Bit position 'pos' from the 'num2'.
		num1 = num1 | bit;					//Set the Bit extracted from the 'num2' and replace in the 'num1'.

		printf ("The Updated Number after Replacement:  ");
		print_bits (num1);
		printf ("The Updated Number (in Decimal) after Replacement: %d\n", num1);
	}

	return 0;
}
