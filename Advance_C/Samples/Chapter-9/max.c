#include <stdio.h>
#define MAX(a,b)  a > b? a: b
int main()
{
		int x = 100, y = 20;
		printf("%d is greater\n", MAX(x, y));
		return 0;
}
