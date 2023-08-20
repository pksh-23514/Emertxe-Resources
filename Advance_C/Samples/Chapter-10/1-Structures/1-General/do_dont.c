#if 0
#include <stdio.h>
struct Student
{
		int id = 0;
		int DOB;
};

int main()
{
		struct Student s;
		return 0;
}
#endif

#if 0
#include <stdio.h>
struct Student
{
		int id;
		int DOB;
};

int main()
{
		struct Student s;
		struct Student arr[10];
		return 0;
}
#endif
#if 0
#include <stdio.h>
struct Student
{
		static int id;
		int DOB;
};

int main()
{
		struct Student s;
		return 0;
}
#endif
#if 0
#include <stdio.h>
struct Student
{
		int id;
		int DOB;
};

int main()
{
		struct Student s;
		static struct Student s1;
		return 0;
}
#endif
#if 0
#include <stdio.h>
struct
{
		int id;
		int DOB;
};

int main()
{
		return 0;
}
#endif
#if 0
#include <stdio.h>
struct
{
		int id;
		int DOB;
}s;

int main()
{
		s.id = 10;
		s.DOB = 4;
		printf("id = %d\n", s.id);
		printf("DOB = %d\n", s.DOB);
		return 0;
}
#endif

#if 0
#include <stdio.h>
struct
{
		int id;
		int DOB;
}s = {10, 20};

int main()
{
		printf("id = %d\n", s.id);
		printf("DOB = %d\n", s.DOB);
		return 0;
}
#endif
#if 0
#include <stdio.h>
struct
{
		int id;
		int DOB;
}s1, s2, s3;

int main()
{
		s1.id = 10;
		s2.DOB = 4;
		printf("id = %d\n", s1.id);
		return 0;
}
#endif
#if 0
#include <stdio.h>
struct
{
		int id;
		int DOB;
}s[10];

int main()
{
		s[1].id = 10;
		s[2].DOB = 4;
		printf("id = %d\n", s[1].id);
		return 0;
}
#endif











