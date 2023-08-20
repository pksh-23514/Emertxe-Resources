#include <stdio.h>

struct College
{	
	struct Student
	{	
		int id;
		char name[20];
		char address[60];
	} student;

	struct
	{	
		int id;
		char name[20];
		char address[60];
	} faculty;
};

int main()
{
	struct College member; // 168 Bytes
	struct Student member1; // 84 Bytes
	struct faculty member2; // ERROR
	member1.id = 1234;	
	member.student.id = 10;
	member.faculty.id = 20;

	printf("%d\n", member.student.id);
	printf("%d\n", member.faculty.id);
	printf("%d\n", member1.id);

	return 0;
}
