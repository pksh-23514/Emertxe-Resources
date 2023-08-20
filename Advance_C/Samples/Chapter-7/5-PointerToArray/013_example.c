#if 0
#include <stdio.h>
#include <stdlib.h>

int main()
{
		int (*p)[3];

		p = malloc(sizeof(*p) * 3);

		(*(p + 0))[0] = 1;
		(*(p + 1))[1] = 2;
		(*(p + 2))[2] = 3;
		printf("%2d ", p[0][0]);
		printf("%2d ", p[1][1]);
		printf("%2d ", p[2][2]);
		return 0;
}
#endif

#if 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
#if 0
		int (*a)[3];
		a = malloc(sizeof(*a) * 3);
#else	
		int a[3][3];
#endif
		int i, j;
		int r = 3, c = 3;
		for (i = 0; i < r; i++)
		{
				for (j = 0; j < c; j++)
				{
						//scanf("%d", &a[i][j]);
						//scanf("%d", (a[i] + j));
						//scanf("%d", (*(a + i) + j));
						scanf("%d", &(*(a + i))[j]);
				}
		}
		for (i = 0; i < r; i++)
		{
				for (j = 0; j < c; j++)
				{
						printf("%d\t", a[i][j]);
						//printf("%d\t", *(a[i] + j));
						//printf("%d\t", (*(a + i))[j]);
						//printf("%d\t", *(*(a + i) + j));
				}
				putchar('\n');
		}
		return 0;
}
#endif
