#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
int main()
{
	int ch;

#if 0
	for ( ; (ch = getc(stdin)) != EOF; )
	{
		putc(toupper(ch), stdout);
	}
#else
	while (1)
	{
		putc('A', stdout);
		sleep(1);
	}
#endif

	puts("EOF Received");

	return 0;
}







