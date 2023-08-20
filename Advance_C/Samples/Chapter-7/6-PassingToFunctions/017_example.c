#if 0
#include <stdio.h>

void print_array( int row, int col, int (*p)[col])
{
	int i, j;

	for (i = 0; i < row; i++)
	{   
		for (j = 0; j < col; j++)
		{
			printf("%d\n", p[i][j]);
		}
	}   
}

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print_array(2, 3, a);

	return 0;
}
#endif

#if 0
#include <stdio.h>

void print_array(int (*p)[col], int row, int col) 
{
	int i, j;

	for (i = 0; i < row; i++)
	{   
		for (j = 0; j < col; j++)
		{
			printf("%d\n", p[i][j]);
		}
	}   
}

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print_array(a, 2, 3);

	return 0;
}
#endif
#if 1
#include <stdio.h>

void print_array(int (*p)[3], int row, int col) 
{
	int i, j;

	for (i = 0; i < row; i++)
	{   
		for (j = 0; j < col; j++)
		{
			printf("%d\n", p[i][j]);
		}
	}   
}

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print_array(a, 2, 3);

	return 0;
}
#endif








