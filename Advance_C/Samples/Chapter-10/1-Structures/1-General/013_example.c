#if 0
#include <stdio.h>

struct Student
{	
	int id;
	char name[30];
	char address[50];
};

int main()
{
	struct Student s[5];
	int i;
	printf("%d\n", sizeof(s));
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &s[i].id);
	}

	for (i = 0; i < 5; i++)
	{
		printf("s[%d].id is %d\n", i, s[i].id);
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

struct Student
{	
	int id;
	char name[30];
	char address[50];
};

int main()
{
	struct Student s[5];
	int i;
	printf("%zu\n", sizeof(s));
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &s[i].id);
	}

	for (i = 0; i < 5; i++)
	{
		printf("s[%d].id is %d at %lu\n", i, s[i].id, &s[i].id);
	}

	return 0;
}
#endif
#if 0
#include <stdio.h>

struct Student
{	
	int id;
	char name[30];
	char address[50];
};

int main()
{
	struct Student s[5];
	int i;
	printf("%zu\n", sizeof(s));
	for (i = 0; i < 5; i++)
	{
		scanf("%d %s %s", &s[i].id, s[i].name, s[i].address);
	}

	for (i = 0; i < 5; i++)
	{
		printf("s[%d].id is %d, s[%d].name is %s, s[%d].address is %s\n", i, s[i].id, i, s[i].name, i, s[i].address);
	}

	return 0;
}
#endif
#if 1
#include <stdio.h>

struct Student
{	
	int id;
	char name[30];
	char address[50];
};
void populate(struct Student *s, int size);
void print(struct Student *s, int size);

int main()
{
	struct Student s[2];
	int i;
	printf("%zu\n", sizeof(s));
	populate(s, 2);
	print(s, 2);
	return 0;
}
void populate(struct Student *s, int size)
{
	for (int i = 0; i < size; i++)
	{
		scanf("%d %s %s", &s[i].id, s[i].name, s[i].address);
	}
}
void print(struct Student s[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("s[%d].id is %d, s[%d].name is %s, s[%d].address is %s\n", i, s[i].id, i, s[i].name, i, s[i].address);
	}
}
#endif

