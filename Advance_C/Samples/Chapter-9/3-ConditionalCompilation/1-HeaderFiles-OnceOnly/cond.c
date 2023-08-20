#include <stdio.h>
#define HELLO1
int main()

{
#ifdef HELLO
		printf("HELLO\n");
#endif
		printf("WORLD\n");
		return 0;
}
