#include <stdio.h>

#if 0
void print_array(int **p)
{
	int i;

	for (i = 0; i < 3; i++)
	{   
		printf("%d ", *p[i]);
		printf("at %p\n", p[i]);
	}   
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int *ptr[3] = {&a, &b, &c};

	print_array(ptr);			

	return 0;
}
#else
void print_array(int **p)
{
		int i, j;

		for (i = 0; i < 3; i++)
		{   
				for (j = 0; j < 2; j++)
				{
						printf("%d ", p[i][j]);
						printf("at %p\n", &p[i][j]);
				}   
		}
}

int main()
{
		int a[2] = {10, 11};
		int b[2] = {20, 21};
		int c[2] = {30, 31};
		int *ptr[3] = {a, b, c};

		print_array(ptr);			

		return 0;
}
#endif








