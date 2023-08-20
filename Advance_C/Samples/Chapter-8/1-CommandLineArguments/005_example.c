#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char *envp[])
{
		char *p;
		
		setenv("Arr", "24 20 9 27 5 6", 0);
		printf("%s\n", getenv("Arr"));
		unsetenv("Arr");
		printf("%s\n", getenv("Arr"));
		return 0;
}
