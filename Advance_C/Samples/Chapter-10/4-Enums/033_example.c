#include <stdio.h>

typedef enum
{
	e_red = 9,
	e_blue = -4,
	e_green 
} Color;

int main()
{
	Color e_white = 0, e_black;
	printf("e_red %d\n", e_red);
	printf("e_blue %d\n", e_blue);
	printf("e_green %d\n", e_green);
	printf("e_white %d\n", e_white);
	printf("e_black %d\n", e_black);

	return 0;
}
