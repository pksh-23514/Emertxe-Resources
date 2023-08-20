#include <stdio.h>

#if 0
int main()
{
	int hours;
	int mins;
	int secs;

	printf("Please enter Time as HH:MM:SS\n");

	scanf("%d%*c%d%*c%d", &hours, &mins, &secs);
	printf("%d:%d:%d\n", hours, mins, secs);

	return 0;
}
#endif
#if 1
int main()
{
    int sum = 0;
    int num1, num2, num3;

    printf("Enter the numbers to be added [Eg. 1 + 2 + 3]: ");
    scanf("%d%*c%d%*c%d", &num1, &num2, &num3); /* Skips a char */

    sum = num1 + num2 + num3;
    printf("Sum = %d\n", sum);

    return 0;
}
#endif
