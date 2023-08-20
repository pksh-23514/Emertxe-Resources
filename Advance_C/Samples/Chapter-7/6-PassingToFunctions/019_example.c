#include <stdio.h>

void print_array(int row, int col, int *p)
{
	int i, j;

	for (i = 0; i < row * col; i++)
	{   
			printf("%d\n", *p++);
	}   
}

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print_array(2, 3, (int *) a);

	return 0;
}
