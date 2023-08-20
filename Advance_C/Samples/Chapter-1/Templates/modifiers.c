#if 0
#include <stdio.h>

int main()
{
	unsigned int count1 = 10;
	signed int count2 = -1;

	if (count1 > count2)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int count1 = 10;
	signed int count2 = -1;

	if (count1 > count2)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
	unsigned int count1 = 10;
	signed int count2 = -1;

	if ((signed)count1 > count2)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}
#endif















