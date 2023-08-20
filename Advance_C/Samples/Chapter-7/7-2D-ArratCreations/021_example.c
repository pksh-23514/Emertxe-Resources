#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **a;

	int i, j, r = 2, c = 3;
	a = malloc(2 * sizeof(int *));

	for (i = 0; i < 2; i++)
	{
			a[i] = malloc(3 * sizeof(int));
	}
	for (i = 0; i < r; i++)
	{
			for (j = 0; j < c; j++)
			{
					//scanf("%d", &a[i][j]);
					scanf("%d", &(*(a + i))[j]);
					//scanf("%d", *(a + i) + j);
					//scanf("%d", a[i] + j);
			}
	}
	printf("array elements are\n");
	for (i = 0; i < r; i++)
	{
			for (j = 0; j < c; j++)
			{
					printf("%d  ", a[i][j]);
			}
			putchar('\n');
	}


	return 0;
}
