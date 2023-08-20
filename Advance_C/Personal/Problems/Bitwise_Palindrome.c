#include <stdio.h>

int print_bits (unsigned int num)		//The function to Print the Binary representation of the Number and return the Number of Bits required to represent the Number.
{
	printf ("Binary Representation of the Number: LSB -> ");

	if ((num == 0) || (num == 1))		//If the Number is '1' or '0', only 1 Bit is enough to represent the Number.
	{
		printf ("%d <- MSB\n", num);
		return 1;
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

	return count;
}

int main()
{
	int num;
	printf ("Enter the number whose Binary representation needs to be checked for being Palindrome or not: ");
	scanf ("%d", &num);

	unsigned int orig = num;
	int flag;														//To check if the Number is Palindrome or not.
	int count = print_bits (orig);

	if (count == 1)													//If only 1 Bit is required to represent the Number in Binary, it is Palindrome.
		flag = 1;
	else
	{
		for (int i = 0; i < (count / 2); i++)						//The loop shall run to check if the Mirror reflection Bit positions are same or not.
		{
			unsigned char b1 = (orig & (1 << i)) >> i;
			unsigned char b2 = (orig & (1 << (count - i - 1))) >> (count - i - 1);
			//printf ("%hhu\t%hhu\n", b1, b2);

			if (b1 == b2)
				flag = 1;
			else													//If the Mirror reflection Bit positions are not same, it is not Palindrome.
			{
				flag = 0;
				break;
			}
		}
	}

	if (flag == 1)
		printf ("The Number's Binary representation is Palindrome.\n");
	else
		printf ("The Number's Binary representation is not Palindrome.\n");

	return 0;
}
