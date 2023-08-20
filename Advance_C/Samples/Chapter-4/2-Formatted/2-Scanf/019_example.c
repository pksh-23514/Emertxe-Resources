#if 0
#include <stdio.h>

int main()
{
	int age;
	char array_1[10];
	char array_2[10];

	sscanf("I am 30 years old", "%s %s %d", array_1, array_2, &age);
	sscanf("I am 30 years old", "%*s %*s %d", &age);
	printf("OK you are %d years old\n", age);
	printf("%s\n%s\n", array_1, array_2);
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int age;
	char array_1[10];
	char array_2[10];
	char array_3[] = "I am 30 years";

	sscanf(array_3, "%s %s %d", array_1, array_2, &age);
	
	printf("OK you are %d years old\n", age);
	printf("%s\n%s\n", array_1, array_2);
	return 0;
}
#endif
#if 1
#include <stdio.h>

int main()
{
	int age;
	char array_1[10];
	char array_2[10];
	char array_3[] = "Hi I am 30 years";

	sscanf(array_3, "%s %s %d", array_1, array_2, &age);
	
	printf("OK you are %d years old\n", age);
	printf("%s\n%s\n", array_1, array_2);
	return 0;
}
#endif













