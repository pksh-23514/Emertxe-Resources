#include <stdio.h>

int main()
{
	int (*p)[3];
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
	p = a;
	int i, j;
	int r = 2, c = 3;
	
	for (i = 0; i < r; i++)
	{
			for (j = 0; j < c; j++)
			{
					printf("%d\t", p[i][j]);
					printf("%d\t", *(p[i] + j));
					printf("%d\t", (*(p + i))[j]);
					printf("%d\t", *(*(p + i) + j));
			}
			putchar('\n');
	}
	return 0;
}
