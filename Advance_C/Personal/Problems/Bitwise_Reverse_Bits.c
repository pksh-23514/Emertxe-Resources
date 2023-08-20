#include <stdio.h>
#define SIZE (sizeof (int) * 8)

int main()
{
	int n, res = 0;
	printf ("Enter the Number (in Hexadecimal format) whose Bits need to be reversed: ");
	scanf ("%X", &n);

	for (int i = 0; i < SIZE; i++)					//'SIZE' is a Macro whose expansion yields the number of Bits being used by the given Number.
	{
		if (n & (1 << i))							//If the Bit is Set; place it at the Mirror reflection Position in the Number. Eg.- {2,30}.
			res = res | (1 << (SIZE - i - 1));

		//No changes are required if the Bit is Clear as originally all the Bit positions are '0' (res = 0).
	}

	printf ("The Number with it's Bits reversed is: %X\n", res);

	return 0;
}
