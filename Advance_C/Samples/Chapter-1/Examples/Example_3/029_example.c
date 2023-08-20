#include <stdio.h>

int main()
{
		int num_array[5];
		int index;

		for (index = 0; index < 5; index++)
		{
				scanf("%d", &num_array[index]);
		}

		index = 0;
		do
		{
				printf("Index %d has Element %d\n", index, num_array[index]);
				index++;
		} while (index < 5);

		return 0;
}
