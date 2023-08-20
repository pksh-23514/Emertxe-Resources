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
		printf("%d\n", iter);
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int iter, j;

		for (iter = 0; iter < 5; iter++)
		{
				for (j = 0; j < 2; j++)
				{
						if (iter == 2)
						{
								break;
						}
						printf("%d  ", iter);
				}
	i			printf("\n");
		}

		return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
		int iter, j;

		for (iter = 0; iter < 5; iter++)
		{
				for (j = 0; j < 2; j++)
				{
						printf("%d  ", iter);
				}
				if (iter == 2)
				{
						break;
				}
				printf("\n");
		}

		return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
		int iter;

		{
				if (iter == 5)
				{
						break;
				}
				printf("%d\n", iter);
		}

		return 0;
}
#endif
