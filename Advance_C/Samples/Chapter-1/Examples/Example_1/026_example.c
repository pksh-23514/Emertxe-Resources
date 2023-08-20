#include <stdio.h>

#if 1
int main()
{
	int num1 = 10;
	int num2 = 20;
	int num3;

	if (num1 > num2)
	{
		num3 = num1;
	}
	else
	{
		num3 = num2;
	}
	printf("%d\n", num3);

	return 0;
}
#endif 
#if 0
int main()
{
	int num1 = 10;
	int num2 = 20;
	int num3;

	num3 = num1 > num2 ? num1 : num2;
	printf("Greater num is %d\n", num3);

	return 0;
}
#endif

#if 0
int main()
{
	int num1 = 10;
	int num2 = 20;
	int num3;

	num1 > num2 ? num3 = num1 : num3 = num2;
	printf("Greater num is %d\n", num3);

	return 0;
}
#endif
#if 0
int main()
{
	int num1 = 10;
	int num2 = 20;
	int num3;

	num1 > num2 ? (num3 = num1) : (num3 = num2);
	printf("Greater num is %d\n", num3);

	return 0;
}
#endif


#if 0
int main()
{
	int num1 = 10;
	int num2 = 20;
	int num3;

	num1 > num2 ? return num1 : return  num2;
	printf("Greater num is %d\n", num3);

	return 0;
}
#endif

#if 0
int main()
{
	int num1 = 10;
	int num2 = 20;
	int num3;

	return num1 > num2 ? num1 : num2; // return num1 for TRUE; OR return num2; for FALSE
	printf("Greater num is %d\n", num3);

	return 0;
}
#endif
#if 1
int main()
{
	int num1 = 10;
	int num2 = 20;
	int num3;

	num1 > num2 ? printf("num1 is greater\n"): printf("num2 is greater\n");

	return 0;
}
#endif
















