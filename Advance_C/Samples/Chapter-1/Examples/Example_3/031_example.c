#if 0
#include <stdio.h>

int main()
{
	int array_org[5] = {1, 2, 3, 4, 5};
	int array_bak[5];
	int index;

	array_bak = array_org;

	if (array_bak == array_org)
	{
		printf("Copied\n");
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int array_org[5] = {1, 2, 3, 4, 5};
	int array_bak[5];
	int index;

	for (index = 0; index < 5; index++)
	{
			array_bak[index] = array_org[index];
	}
	for (index = 0; index < 5; index++)
	{
			printf("%d ", array_bak[index]);
	}
	printf("\n");
	printf("Copied\n");

	return 0;
}
#endif
#if 1
#include <stdio.h>

int main()
{
	int array_org[5] = {1, 2, 3, 4, 5};
	int array_bak[5];
	int index;

	for (index = 0; index < 5; index++)
	{
			array_bak[index] = array_org[index];
	}
	for (index = 0; index < 5; index++)
	{
			printf("%d ", array_bak[index]);
	}
	printf("\n");

	if (array_bak == array_org)
	{
		printf("Copied\n");
	}
	return 0;
}
#endif









