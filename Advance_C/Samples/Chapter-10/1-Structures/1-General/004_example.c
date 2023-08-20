#if 0
#include <stdio.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

int main()
{
	struct Student s1 = {10, "Tingu", "Bangalore"};

	printf("%d\n", s1.id);
	printf("%s\n", s1.name);
	printf("%s\n", s1.address);
	return 0;
}
#endif
#if 0
#include <stdio.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

int main()
{
	struct Student s1 = {"Tingu", 10, "Bangalore"};

	printf("%d\n", s1.id);
	printf("%s\n", s1.name);
	printf("%s\n", s1.address);
	return 0;
}
#endif

#if 0
#include <stdio.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

int main()
{
	struct Student s1 = {.name = "Tingu", .id = 10, .address = "Bangalore"};

	printf("%d\n", s1.id);
	printf("%s\n", s1.name);
	printf("%s\n", s1.address);
	return 0;
}
#endif
#if 0
#include <stdio.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

int main()
{
	struct Student s1[2] = {10, "Tingu", "Bangalore", 20, "vikas", "emertxe"};

	printf("%d\n", s1[0].id);
	printf("%s\n", s1[0].name);
	printf("%s\n\n", s1[0].address);
	printf("%d\n", s1[1].id);
	printf("%s\n", s1[1].name);
	printf("%s\n", s1[1].address);
	return 0;
}
#endif
#if 1
#include <stdio.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

int main()
{
	struct Student s1[2] = {10, "Tingu", "Bangalore"};

	printf("%d\n", s1[0].id);
	printf("%s\n", s1[0].name);
	printf("%s\n\n", s1[0].address);

	s1[1] = s1[0];
	printf("%d\n", s1[1].id);
	printf("%s\n", s1[1].name);
	printf("%s\n", s1[1].address);
	return 0;
}
#endif







