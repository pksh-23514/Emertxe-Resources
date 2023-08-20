#if 0
#include <stdio.h>

int main()
{
	int array1[5] = {1, 2, 3, 4, 5};
	int array2[5] = {1, 2};
	int array3[] = {1, 2};
	// int array4[]; /* Invalid */

	printf("%zu\n", sizeof(array1));
	printf("%zu\n", sizeof(array2));
	printf("%zu\n", sizeof(array3));

	int number_of_elements;
	number_of_elements = sizeof(array3) / sizeof(int);
	printf("array3 contains %d elements\n", number_of_elements);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
		int array1[5] = {11, 22, 33, 44, 55}, i;
		for (i = 0; i < 5; i++)
		{
				printf("%d at address %u\n", array1[i], &array1[i]);
		}
		return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
		char array1[5] = {11, 22, 33, 44, 55}, i;
		for (i = 0; i < 5; i++)
		{
				printf("%d at address %u\n", array1[i], &array1[i]);
		}
		return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
		double array1[5] = {11.5, 22.5, 33.5, 44.5, 55.5};
		int i;
		for (i = 0; i < 5; i++)
		{
				printf("%lf at address %u\n", array1[i], &array1[i]);
		}
		return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
		int array1[5] = {11, 22, 33, 44, 55}, i;
		for (i = -1; i < 4; i++)
		{
				printf("%d at address %u\n", array1[i + 1], &array1[i + 1]);
		}
		return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
		int array1[] = {11, 22, 33, 44, 55}, i;
		int size = sizeof (array1) / sizeof (array1[0]) - 1;
		for (i = -1; i < size; i++)
		{
				printf("%d at address %u\n", array1[i + 1], &array1[i + 1]);
		}
		return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
		int array1[] = {11, 22, 33, 44, 55}, i;
		for (i = -1; i < (sizeof (array1) / sizeof (array1[0]) - 1); i++)
		{
				printf("%d at address %u\n", array1[i + 1], &array1[i + 1]);
		}
		printf("%d\n",  (sizeof (array1) / sizeof (array1[0])) - 1);
		return 0;
}

#endif

#if 0
#include <stdio.h>
int main()
{
		int array1[] = {11, 22, 33, 44, 55}, i;
		for (i = -1; i < (signed)(sizeof (array1) / sizeof (array1[0]) - 1); i++)
		{
				printf("%d at address %p\n", array1[i + 1], &array1[i + 1]);
		}
		printf("%zu\n",  (sizeof (array1) / sizeof (array1[0])));
		return 0;
}

#endif
#if 0
#include <stdio.h>
int main()
{
		int size = 5;
		//int array1[size] = {11, 22, 33, 44, 55}, i;
		int array1[size] , i;
		for (i = 0; i < 5; i++)
		{
				printf("%d at address %u\n", array1[i], &array1[i]);
		}
		return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
		int size;
		printf("Enter the number of elements\n");
		scanf("%d", &size);
		int array1[size] , i;
		for (i = 0; i < size; i++)
		{
				printf("%d at address %u\n", array1[i], &array1[i]);
		}
		return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
		int size;
		printf("Enter the number of elements\n");
		scanf("%d", &size);
		int array1[size] , i;
		printf("Enter %d elements\n", size);
		for (i = 0; i < size; i++)
		{
				scanf("%d", &array1[i]);
		}
		printf("Array Elements are : ");
		for (i = 0; i < size; i++)
		{
				printf("%d ", array1[i]);
		}
		putchar('\n');
		return 0;
}
#endif

#if 1
#include <stdio.h>
int main()
{
		int size;
		printf("Enter the number of elements\n");
		scanf("%d", &size);
		int a[size], b[size], i;
		printf("Enter %d elements 1st array\n", size);
		for (i = 0; i < size; i++)
		{
				scanf("%d", &a[i]);
		}
		printf("Enter %d elements 2nd array\n", size);
		for (i = 0; i < size; i++)
		{
				scanf("%d", &b[i]);
		}
		printf("A array : ");
		for (i = 0; i < size; i++)
		{
				printf("%d ", a[i]);
		}
		putchar('\n');
		printf("B array : ");
		for (i = 0; i < size; i++)
		{
				printf("%d ", b[i]);
		}
		putchar('\n');
		return 0;
}
#endif




















