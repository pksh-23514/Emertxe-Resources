#if 0
#include <stdio.h>

struct Nibble
{
	unsigned char lower	: 4;
	unsigned char upper	: 4;
};

int main()
{
	struct Nibble nibble;

	printf("%zu\n", sizeof(nibble));

	return 0;
}
#endif

#if 0
#include <stdio.h>

struct Nibble
{
	unsigned char lower	: 5;
	unsigned char upper	: 4;
};

int main()
{
	struct Nibble nibble;

	printf("%zu\n", sizeof(nibble));

	return 0;
}
#endif
#if 0
#include <stdio.h>

struct Nibble
{
	unsigned char lower	: 9;
	unsigned char upper	: 4;
};

int main()
{
	struct Nibble nibble;

	printf("%zu\n", sizeof(nibble));

	return 0;
}
#endif
#if 0
#include <stdio.h>

struct Nibble
{
	float lower	: 9;
	unsigned char upper	: 4;
};

int main()
{
	struct Nibble nibble;

	printf("%zu\n", sizeof(nibble));

	return 0;
}
#endif
#if 1
#include <stdio.h>

struct Nibble
{
	unsigned char lower	: 4;
	unsigned char upper	: 4;
};

int main()
{
	struct Nibble nibble;

	printf("%zu\n", sizeof(nibble));
	printf("%p\n", &nibble);
	printf("%p\n", &nibble.lower);
	printf("%p\n", &nibble.upper);

	return 0;
}
#endif


