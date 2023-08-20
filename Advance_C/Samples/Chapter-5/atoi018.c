#include <stdio.h>
#include <stdlib.h>
int main()
{
		int x;
		char str[10];
		printf("Enter the string of digits\n");
		scanf("%s", str);
		x = atoi(str);
		printf("ATOI res = %d\n", x);
		return 0;
}
