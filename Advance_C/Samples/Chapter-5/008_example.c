#if 0
#include <stdio.h>

void print(const char *str)
{
	while (*str)
	{
		putchar(*str++);
		//printf("%c", *str++);
		
	}
}

int main()
{
	char *str = "Hello World";

	print(str);

	return 0;
}
#endif
#if 0
#include <stdio.h>

void print(const char *str)
{
	while (*str)
	{
			putchar(*str++);
	}
}

int main()
{
	print("Hello World");

	return 0;
}
#endif

#if 1
#include <stdio.h>

void print(const char *str)
{
		while (*str)
		{
				putchar(*str++);
		}
}

int main()
{
		char str[] = "Hello World";
		print(str);

		return 0;
}
#endif











