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
	struct Student s1;

	printf("%d\n", s1.id);
	s1.id = 10;
	printf("%d\n", s1.id);
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
	struct Student s1;

	s1.id = 10;
	s1.name = "Vikas";
	s1.address = "Banglore";

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
	char *name;
	char *address;
};

int main()
{
	struct Student s1;

	s1.id = 10;
	s1.name = "Vikas";
	s1.address = "Banglore";

	printf("%d\n", s1.id);
	printf("%s\n", s1.name);
	printf("%s\n", s1.address);
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <string.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

int main()
{
	struct Student s1;

	s1.id = 10;
	strcpy(s1.name, "Vikas");
	strcpy(s1.address, "Banglore");

	printf("%d\n", s1.id);
	printf("%s\n", s1.name);
	printf("%s\n", s1.address);
	return 0;
}
#endif
#if 1
#include <stdio.h>
#include <string.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

int main()
{
	struct Student s1;

	printf("Enter ID Name Address\n");
	scanf("%d%s%s", &s1.id, s1.name, s1.address);
	printf("%d\n", s1.id);
	printf("%s\n", s1.name);
	printf("%s\n", s1.address);
	return 0;
}
#endif




