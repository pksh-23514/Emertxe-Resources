#if 0 

#include <stdio.h>

int main()
{
	int count;
	unsigned char iter = 0xFF;

	for (count = 0; iter != 0; iter >>= 1)
	{
		if (iter & 01)
		{
			count++;
		}
	}

	printf("count is %d\n", count);

	return 0;
}
#endif
#if 1
#include <stdio.h>

int main()
{
	int count;
	unsigned char iter = 0x21;

	for (count = 0; iter != 0; iter >>= 1)
	{
		if (iter & 01)
		{
			count++;
		}
	}

	printf("count is %d\n", count);

	return 0;
}
#endif
#if 0 
#include <stdio.h>

int main()
{
	int count;
	char iter = 0xFF;

	for (count = 0; iter != 0; iter >>= 1)
	{
		if (iter & 01)
		{
			count++;
		}
	}

	printf("count is %d\n", count);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int count;
	char iter = 0x7F;

	for (count = 0; iter != 0; iter >>= 1)
	{
		if (iter & 01)
		{
			count++;
		}
	}

	printf("count is %d\n", count);

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int count;
	char iter = 0xF7;

	for (count = 0; iter != 0; iter >>= 1)
	{
		if (iter & 01)
		{
			count++;
		}
	}

	printf("count is %d\n", count);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int count;
	char iter = 0xAA;

	for (count = 0; iter != 0; iter >>= 1)
	{
		if (iter & 01)
		{
			count++;
		}
	}

	printf("count is %d\n", count);

	return 0;
}
#endif
