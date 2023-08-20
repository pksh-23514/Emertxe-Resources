#include <stdio.h>
#include <string.h>

struct Student
{
	int id;
	char name[30];
	char address[150];
};

void data(struct Student *s)
{
	s->id = 10;
	strcpy(s->name, "vikas");
}

int main()
{
	struct Student s1;

	data(&s1);

	printf("%d\n", s1.id);
	printf("%s\n", s1.name);
	return 0;
}
