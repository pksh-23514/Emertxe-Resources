#include <stdio.h>

int main()
{
		int ret, num1;
		char ch;
		float num2;
		char string[10];

		ret = scanf("%d %c %f %s", &num1 , &ch, &num2, string);
		printf("%d %c %f %s\n", num1 , ch, num2, string);

		printf("ret = %d\n", ret);

		return 0;
}
