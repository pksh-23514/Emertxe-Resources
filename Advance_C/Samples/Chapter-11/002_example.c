#include <stdio.h>
#include <stdlib.h>

int main()
{
		FILE *input_fp;

		input_fp = fopen("text.txt", "r");

		if (input_fp == NULL)
		{
				printf("FILE doesnot exists\n");
				return 1;
		}
		printf("FILE exists\n");

		fclose(input_fp);

		return 0;
}
