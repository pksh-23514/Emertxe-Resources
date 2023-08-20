#if 0
#include <stdio.h>

enum bool
{
	e_false,
	e_true
};
enum bool foo2()
{
		return e_false;
}
enum bool foo1()
{
		return e_true;
}
int main()
{
		switch (0)
		{
				case e_true :
						break ;
				case e_false :
						break ;
		}
	printf("%d\n", foo1());
	printf("%d\n", foo2());

	return 0;
}
#endif


#if 1
#include <stdio.h>

enum bool
{
	e_false,
	e_true
};

int main()
{
		int x;
		printf("Enter 0 or 1\n");
		scanf("%d", &x);
		switch (x)
		{
				case e_true :
						printf("TRUE\n");
						break ;
				case e_false :
						printf("FALSE\n");
						break ;
				default :
						printf("ERROR\n");
		}

	return 0;
}
#endif


