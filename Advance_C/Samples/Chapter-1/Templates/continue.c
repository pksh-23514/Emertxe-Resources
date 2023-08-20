#if 0
#include <stdio.h>

int main()
{
	int iter;

	for (iter = 0; iter < 10; iter++)
	{
		if (iter == 5)
		{
			continue;
		}
		printf("%d\n", iter);
	}

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int iter;

	{
		if (iter == 5)
		{
			continue;
		}
		printf("%d\n", iter);
	}

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		int iter;

		for (iter = 0; iter < 10; iter++)
		{
				if (iter == 5)
				{
						break;
				}
				printf("Inside %d\n", iter);
		}
		printf("Outside %d\n", iter);

		return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
		int iter;

		for (iter = 0; iter < 10; iter++)
		{
				if (iter == 5)
				{
						continue;
				}
				printf("Inside %d\n", iter);
		}
		printf("Outside %d\n", iter);

		return 0;
}
#endif
