#include <stdio.h>

union Test
{
	char option;
	int id; 
	double height;
};

int main()
{
	union Test temp_var;

	temp_var.height = 7.2;
	printf("%lf\n\n", temp_var.height);

	temp_var.id = 0x1234;
	printf("%lf\n", temp_var.height);
	printf("%x\n\n", temp_var.id);
	
	temp_var.option = '1';
	printf("%lf\n", temp_var.height);
	printf("%x\n", temp_var.id);
	printf("%c\n", temp_var.option);

	return 0;
}
