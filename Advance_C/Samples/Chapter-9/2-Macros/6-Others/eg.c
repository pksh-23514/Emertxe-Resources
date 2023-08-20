#include <stdio.h>

#define WARN_IF(x)     #x	

int main()
{
	int x = 5;

	printf("%s\n", WARN_IF(my_message));

	return 0;
}
