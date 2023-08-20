#if 0
#include <stdio.h>

union Endian
{
		unsigned int value;
		unsigned char byte[40];
};
int main()
{
		union Endian e;
		printf("size of union = %zu\n", sizeof(e));
		return 0;
}
#endif
#if 1
#include <stdio.h>

struct Endian
{
		unsigned int value;
		unsigned char byte[40];
};
int main()
{
		struct Endian e;
		printf("size of union = %zu\n", sizeof(e));
		return 0;
}
#endif

