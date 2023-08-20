#include <stdio.h>
int main()
{
		//printf("Hello world\n" + 3);
		//if (!printf("Hello "))
		if (fork())
		{
				printf("Hello ");
		}
		else
		{
				printf("World\n");
		}
		return 0;
}
