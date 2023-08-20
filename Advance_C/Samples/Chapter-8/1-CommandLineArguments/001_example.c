#if 0
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
		int i;

		printf("No of argument(s): %d\n", argc);

		printf("List of argument(s):\n");
		for (i = 0; i < argc; i++)
		{   
				printf("\t%d - \"%s\"\n", i + 1, argv[i]);
		}   

		return 0;
}
#endif
#if 1
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
		int i;

		printf("No of argument(s): %d\n", argc);

		printf("List of argument(s):\n");
		for (i = 0; argv[i] != NULL; i++)
		{   
				printf("\t%d - \"%s\"\n", i + 1, argv[i]);
		}   

		return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[])
{
		int i;


		printf("List of Environmental variabes :\n");
		for (i = 0; envp[i] != NULL; i++)
		{   
				printf("\t%d - \"%s\"\n", i + 1, envp[i]);
		}   

		return 0;
}
#endif

