#if 0
#include <stdio.h>

int main()
{
	short int count1;
	int long count2;
	short count3;
	long double d;
	printf("short is %zu bytes\n", sizeof(short int));
	printf("long int is %zu bytes\n", sizeof(int long));
	printf("short is %zu bytes\n", sizeof(short));
	printf("long double is %zu bytes\n", sizeof(long double));

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	short long int count1;
	short char count2;
	short float count3;
	long float  d;
	printf("short is %zu bytes\n", sizeof(short int));
	printf("long int is %zu bytes\n", sizeof(int long));
	printf("short is %zu bytes\n", sizeof(short));
	printf("long double is %zu bytes\n", sizeof(long double));

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	short int count1;
	printf("short is %zu bytes\n", sizeof(short int));
	printf("short is %lu bytes\n", sizeof(short int));
	printf("short is %u bytes\n", sizeof(short int));
	printf("short is %d bytes\n", sizeof(short int));
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int x = 0x12345678;
	printf("4 byte x is %x bytes\n", x); // 12345678
	printf("2 byte x is %hx bytes\n", x); // 5678
	printf("1 byte x is %hhx bytes\n", x); // 78
	return 0;
}
#endif

#if 1
#include <stdio.h>

int main()
{
	long int x = 12345678abcdefff;
	printf("8 byte x is %lx bytes\n", x); // 12345678absedfff
	printf("4 byte x is %x bytes\n", x); // abcdefff 
	printf("2 byte x is %hx bytes\n", x); // efff
	printf("1 byte x is %hhx bytes\n", x); // ff
	return 0;
}
#endif














