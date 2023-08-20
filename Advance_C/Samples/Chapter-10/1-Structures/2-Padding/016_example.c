#if 0
#include <stdio.h>

#pragma pack(1)

struct Student
{
	char ch1;
	int num;
	char ch2;
};

int main()
{
	struct Student s1;

	printf("%zu\n", sizeof(struct Student));

	return 0;
}
#endif
#if 0
#include <stdio.h>

#pragma pack(2)

struct Student
{
	char ch1;
	int num;
	char ch2;
};

int main()
{
	struct Student s1;

	printf("%zu\n", sizeof(struct Student));

	return 0;
}
#endif
#if 0
#include <stdio.h>

#pragma pack(3)

struct Student
{
	char ch1;
	int num;
	char ch2;
};

int main()
{
	struct Student s1;

	printf("%zu\n", sizeof(struct Student));

	return 0;
}
#endif
#if 1
#include <stdio.h>

#pragma pack(4)

struct Student
{
	char ch1;
	int num;
	char ch2;
};

int main()
{
	struct Student s1;

	printf("%zu\n", sizeof(struct Student));

	return 0;
}
#endif

