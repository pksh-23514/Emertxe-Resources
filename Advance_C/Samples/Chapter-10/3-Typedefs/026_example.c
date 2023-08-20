#if 0
#include <stdio.h>

typedef int * int_ptr;
typedef float * float_ptr;

int main()
{
	int_ptr ptr1, ptr2, ptr3;
	float_ptr fptr;
	printf("%zu, %zu, %zu\n", sizeof (ptr1), sizeof (ptr2), sizeof (ptr3));
	return 0;
}
#endif

#if 0
#include <stdio.h>

typedef int * int_ptr;
typedef float * float_ptr;

int main()
{
	int * ptr1, ptr2, ptr3;
	printf("%zu, %zu, %zu\n", sizeof (ptr1), sizeof (ptr2), sizeof (ptr3));
	return 0;
}
#endif
#if 1
#include <stdio.h>
typedef int * int_ptr;
#define int_ptr int *

int main()
{
	int_ptr ptr1, ptr2, ptr3;
	printf("%zu, %zu, %zu\n", sizeof (ptr1), sizeof (ptr2), sizeof (ptr3));
	return 0;
}
#endif













