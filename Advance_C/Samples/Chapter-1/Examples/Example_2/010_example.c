#if 0
#include <stdio.h>

int *modify_array(int *array, int size);
void print_array(int array[], int size);

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *new_array_val;
	printf("Before\n");
	print_array(array, 5);
	new_array_val = modify_array(array, 5);
	printf("AFTER\n");
	print_array(array, 5);
	//print_array(new_array_val, 5);

	return 0;
}

int *modify_array(int *array, int size)
{
	int	iter;

	for (iter = 0; iter < size; iter++)
	{
		*(array + iter) += 10;
	}

	return array;
}

void print_array(int array[], int size)
{
	int	iter;

	for (iter = 0; iter < size; iter++)
	{
		printf("Index %d has Element %d\n", iter, array[iter]);
	}
	printf("\n");
}
#endif

#if 1
#include <stdio.h>

int *modify_array(int *array, int size);
void print_array(int array[], int size);

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	printf("Before\n");
	print_array(array, 5);
	modify_array(array, 5);
	printf("AFTER\n");
	print_array(array, 5);

	return 0;
}

int *modify_array(int *array, int size)
{
	int	iter;

	for (iter = 0; iter < size; iter++)
	{
		*(array + iter) += 10;
	}

	return array;
}

void print_array(int array[], int size)
{
	int	iter;

	for (iter = 0; iter < size; iter++)
	{
		printf("Index %d has Element %d\n", iter, array[iter]);
	}
	printf("\n");
}
#endif


