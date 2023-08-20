#if 0
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr;
	char ch; 

	fptr = fopen("text.txt", "r");

	/* Need to do error checking on fopen() */
	if (fptr == NULL)
	{
			printf("FILE doesnot exists\n");
			return -1;
	}

	while (ch = fgetc(fptr))
	{
		if (feof(fptr))
			break;

		fputc(ch, stdout);
	}

	fclose(fptr);

	return 0;
}
#endif

#if 0
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr, *fcopy;
	char ch; 

	fptr = fopen("text.txt", "r");

	/* Need to do error checking on fopen() */
	if (fptr == NULL)
	{
			printf("FILE doesnot exists\n");
			return -1;
	}
	fcopy = fopen("fc018a.txt", "w");
	if (fcopy == NULL)
	{
			printf("File not created\n");
			return -1;
	}
	while (ch = fgetc(fptr))
	{
		if (feof(fptr))
			break;

		fputc(ch, fcopy);
	}
	printf("Copied\n");	
	//fclose(fptr);
	//fclose(fcopy);
	fcloseall();
	return 0;
}
#endif



#if 1
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

void file_copy(FILE *f1, FILE * f2);
int main()
{
	FILE *fptr, *fcopy;
	char ch; 

	fptr = fopen("text.txt", "r");

	/* Need to do error checking on fopen() */
	if (fptr == NULL)
	{
			printf("FILE doesnot exists\n");
			return -1;
	}
	fcopy = fopen("fc018a.txt", "w");
	if (fcopy == NULL)
	{
			printf("File not created\n");
			return -1;
	}
	file_copy(fptr, fcopy);
	printf("Copied\n");	
	fcloseall();
	return 0;
}
void file_copy(FILE *f1, FILE * f2)
{
		char ch;
	while (ch = fgetc(f1))
	{
		if (feof(f1))
			break;

		fputc(ch, f2);
	}
}
#endif




