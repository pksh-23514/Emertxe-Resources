#if 0
#include <stdio.h>

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array;

	printf("%d\n", *ptr);

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array;

	printf("%d\n", *ptr);
	ptr = ptr + 1;
	printf("%d\n", *ptr);

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array;
	int i;
	for (i = 0; i < 5; i++)
	{
			printf("%d at %u\n", *ptr, ptr);
			ptr = ptr + 1;
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	char array[5] = {10, 20, 30, 40, 50};
	char *ptr = array;
	int i;
	for (i = 0; i < 5; i++)
	{
			printf("%d at %u\n", *ptr, ptr);
			ptr = ptr + 1;
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	double array[5] = {10.5 , 20.25, 30.35, 40.45, 50.55};
	double *ptr = array;
	int i;
	for (i = 0; i < 5; i++)
	{
			printf("%lf at %u\n", *ptr, ptr);
			ptr = ptr + 1;
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array;
	int i;
	for (i = 0; i < 5; i++)
	{
			printf("%d at %u\n", *ptr, ptr);
			ptr++;
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array;
	int i;
	for (i = 0; i < 5; i++)
	{
			printf("%d\n", *ptr);
			ptr++;
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array;
	int i;
	for (i = 0; i < 5; i++)
	{
			printf("%d\n", *ptr++);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array;
	int i;
	for (i = 0; i < 5; i++)
	{
			printf("%d\n", *(ptr + i));
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array;
	int i;
	for (i = 0; i < 5; i++)
	{
			printf("%d\n", *(i + ptr));
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array;
	int i;
	for (i = 0; i < 5; i++)
	{
			printf("%d ", array[i]);
			printf("%d ", i[array]);
			printf("%d ", i[ptr]);
			printf("%d \n", ptr[i]);
	}
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array;
	int i;
	for (i = 0; i < 5; i++)
	{
			printf("%d ", *(array + i));
			printf("%d\n", *(i + array));
	}
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array;
	int i;
	for (i = 0; i < 5; i++)
	{
			printf("%d\n", *array);
			array++;
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int array[5];
	int *ptr = array;
	int i;
	for (i = 0; i < 5; i++)
	{
			//scanf("%d", &array[i]);
			scanf("%d", &*(array + i));
			//scanf("%d", (array + i));
			//scanf("%d", (ptr + i));
			//scanf("%d", &ptr[i]);
			//scanf("%d", ptr++);
	}
	//ptr = ptr - 5;
	for (i = 0; i < 5; i++)
	{
			//printf("%d\n", array[i]);
			printf("%d\n", ptr[i]);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array, *sptr = &array[4];
	int i = sptr - ptr;
	printf("i = %d\n", sptr - ptr);
	return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array, *sptr = &array[4];
	int i = (char *)sptr - (char *)ptr;
	printf("i = %d\n", i);
	return 0;
}
#endif













