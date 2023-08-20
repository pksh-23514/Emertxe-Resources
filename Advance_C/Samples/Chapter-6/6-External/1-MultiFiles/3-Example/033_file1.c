#include <stdio.h>
#include <unistd.h>

int num;

int func_1();
int main()
{
	while (1)
	{
		num++;
		printf("num is %d from main\n", num);
		func_1();
		sleep(1);
	}

	return 0;
}
