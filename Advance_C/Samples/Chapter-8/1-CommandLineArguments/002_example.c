#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
		int i = 0;

		printf("No of argument(s): %d\n", argc);

		printf("List of argument(s):\n");
#if 0
		for (i = 0; argv[i]; i++)
		{   
				printf("\t%d - \"%s\"\n", i + 1, argv[i]);
		}   
#else
		while (argv[i])
		{
				printf("\t%d - \"%s\"\n", i + 1, argv[i]);
				i++;
		}
#endif
		return 0;
}
