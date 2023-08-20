#if 0
#include <stdio.h>

int main()
{
		int num1 = 1, num2 = 0;

#if 0	
		if (++num1 || num2++)
		{
				printf("num1 is %d num2 is %d\n", num1, num2);
		}
#else

		num1 = 1, num2 = 0;

		if (num1++ && ++num2)
		{
				printf("IF num1 is %d num2 is %d\n", num1, num2);
		}
		else
		{
				printf("ELSE num1 is %d num2 is %d\n", num1, num2);
		}
#endif
		return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
		int num1, num2;

		num1 = 0, num2 = 1;

		if (num1++ && ++num2)
		{
				printf("IF num1 is %d num2 is %d\n", num1, num2);
		}
		else
		{
				printf("ELSE num1 is %d num2 is %d\n", num1, num2);
		}
		return 0;
}
#endif
#if 1
#include <stdio.h>

int main()
{
		int num1, num2;

		num1 = 1, num2 = 0;

		if (num1++ && num2++)
		{
				printf("IF num1 is %d num2 is %d\n", num1, num2);
		}
		else
		{
				printf("ELSE num1 is %d num2 is %d\n", num1, num2);
		}
		return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
		char x = 10;
		printf("sizeof x = %zu\n", sizeof(x));
		printf("sizeof +x = %zu\n", sizeof(+x));
		printf("sizeof !x = %zu\n", sizeof(!x));
		printf("sizeof ~x = %zu\n", sizeof(~x));
}
#endif
#if 0
#include <stdio.h>
int main()
{
		short x = 10;
		printf("sizeof x = %zu\n", sizeof(x));
		printf("sizeof +x = %zu\n", sizeof(+x));
		printf("sizeof !x = %zu\n", sizeof(!x));
		printf("sizeof ~x = %zu\n", sizeof(~x));
}
#endif













