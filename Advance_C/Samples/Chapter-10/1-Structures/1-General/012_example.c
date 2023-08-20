#if 0
#include <stdio.h>
#include <stdlib.h>

struct Student
{	
	int id;
	char *name;
	char *address;
};

struct Student data(void)
{
	struct Student s;
	s.name = (char *) malloc(30 * sizeof(char));
	s.address = (char *) malloc(150 * sizeof(char));

	return s;
}

int main()
{
	struct Student s1;
	
	s1 = data();
	return 0;
}
#endif

#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{	
	int id;
	char *name;
	char *address;
};

struct Student data(void)
{
	struct Student s;
	s.name = (char *) malloc(30 * sizeof(char));
	s.address = (char *) malloc(150 * sizeof(char));

	return s;
}

int main()
{
	struct Student s1;
	strcpy(s1.name, "vikas");
	strcpy(s1.address, "Banglore");
	printf("%s\n", s1.name);
	printf("%s\n", s1.address);
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{	
	int id;
	char *name;
	char *address;
};

struct Student data(void)
{
	struct Student s;
	s.name = (char *) malloc(30 * sizeof(char));
	s.address = (char *) malloc(150 * sizeof(char));

	return s;
}

int main()
{
	struct Student s1;
	
	s1 = data();
	strcpy(s1.name, "vikas");
	strcpy(s1.address, "Banglore");
	printf("%s\n", s1.name);
	printf("%s\n", s1.address);
	free(s1.name);
	free(s1.address);
	return 0;
}
#endif

#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{	
	int id;
	char *name;
	char *address;
};

int main()
{
	struct Student s1;
	
	s1.name = "vikas";
	s1.address =  "Banglore";
	printf("%s\n", s1.name);
	printf("%s\n", s1.address);
	return 0;
}
#endif

#if 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{	
	int id;
	char *name;
	char *address;
};

struct Student data(void)
{
	struct Student s = {10, "Vikas", "Banglore"};

	return s;
}

int main()
{
	struct Student s1;
	
	s1 = data();
	printf("%d\n", s1.id);
	printf("%s\n", s1.name);
	printf("%s\n", s1.address);
	return 0;
}
#endif


