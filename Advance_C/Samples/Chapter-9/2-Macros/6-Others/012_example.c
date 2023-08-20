#include <stdio.h>

#define WARN_IF(EXP)								\
		printf("%d\n", EXP)

int main()
{
	int x = 5;

	WARN_IF(x);

	return 0;
}
