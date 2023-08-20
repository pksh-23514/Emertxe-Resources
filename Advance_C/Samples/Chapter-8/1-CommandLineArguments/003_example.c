#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char *envp[])
{
		int i = 0;


		printf("List of Environment variables(s):\n");
		
		while (envp[i])
		{
				printf("\t%d - \"%s\"\n", i + 1, envp[i]);
				i++;
		}
		
		return 0;
}
