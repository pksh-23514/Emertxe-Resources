#if 0
#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;

	for ( ; (ch = getchar()) != EOF; )
	{
			putchar(toupper(ch));
	}

	puts("EOF Received");

	return 0;
}
#endif
#if 1
#include <stdio.h>
#include <ctype.h>

int main()
{
		char ch;

		ch = getchar();
		putchar(toupper(ch));

		puts("EOF Received");

		return 0;
}
#endif

