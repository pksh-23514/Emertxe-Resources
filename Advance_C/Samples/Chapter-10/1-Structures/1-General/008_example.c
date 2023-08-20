#if 0
#include <stdio.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

static struct Student s1;

int main()
{
	struct Student *sptr = &s1;

	(*sptr).id = 10;

	printf("%d\n", (*sptr).id);
	printf("%d\n", s1.id);
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

static struct Student s1;

int main()
{
	struct Student *sptr = &s1;

	*sptr.id = 10;

	printf("%d\n", (*sptr).id);
	printf("%d\n", s1.id);
	return 0;
}
#endif






