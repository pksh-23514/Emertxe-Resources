#include <stdio.h>

union Nibble
{
	unsigned char lower	: 4;
	unsigned char upper	: 4;
};

int main()
{
	union Nibble nibble;

	nibble.upper = 0x0A;
	nibble.lower = 0x02;

	return 0;
}
