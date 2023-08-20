#include <stdio.h>

typedef int * int_ptr;
#define iptr int *

int main()
{
	int_ptr ptr1, ptr2, ptr3;
	iptr i1, i2, i3;

	printf("%zu\n",sizeof(ptr1));
	printf("%zu\n",sizeof(ptr2));
	printf("%zu\n\n",sizeof(ptr3));
	printf("%zu\n",sizeof(i1));
	printf("%zu\n",sizeof(i2));
	printf("%zu\n",sizeof(i3));
	
	return 0;
}
