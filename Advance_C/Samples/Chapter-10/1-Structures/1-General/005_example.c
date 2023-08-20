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
	struct Student s2;

	printf("%d\n", s2.id);
	printf("%s\n", s2.name);
	printf("%s\n\n", s2.address);

	s2 = s1;
	
	printf("%d\n", s2.id);
	printf("%s\n", s2.name);
	printf("%s\n", s2.address);
	
	return 0;
}
