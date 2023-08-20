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
	printf("4 byte x is %x bytes\n", x); 
	printf("2 byte x is %hx bytes\n", x); 
	printf("1 byte x is %hhx bytes\n", x); 
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	long int x = 0x12345678abcdefff;
	printf("8 byte x is %lx bytes\n", x); 
	printf("4 byte x is %x bytes\n", x); 
	printf("2 byte x is %hx bytes\n", x); 
	printf("1 byte x is %hhx bytes\n", x); 
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	unsigned  int x = -1;
	printf("8 byte x is %lu bytes\n", x); 
	printf("4 byte x is %u bytes\n", x); 
	printf("2 byte x is %hu bytes\n", x); 
	printf("1 byte x is %hhu bytes\n", x); 
	return 0;
}
#endif
