#include <stdio.h>
#define PRINT(x)   x##_val
int main()
{
		int int1_val = 100;
		float float1_val = 20.5;

		printf("num = %d\n", PRINT(int1));
		printf("num2 = %f\n", PRINT(float1));
		return 0;
}
