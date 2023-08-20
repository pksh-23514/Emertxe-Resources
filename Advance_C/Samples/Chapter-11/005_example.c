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
				printf("File is not present\n");
				return 0;
		}
		printf("File offset is at -> %ld\n\n", ftell(fptr));
		printf("--> The content of file is <--\n");

		while ((ch = fgetc(fptr)) != EOF)
		{
				fputc(ch, stdout);
				printf("\nFile offset is at -> %ld\n", ftell(fptr));

		}

		printf("\nFile offset is at -> %ld\n", ftell(fptr));

		fclose(fptr);

		return 0;
}
#endif
#if 1
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
		FILE *fptr;
		char ch; 

		fptr = fopen(argv[1], "r");

		/* Need to do error checking on fopen() */
		if (fptr == NULL)
		{
				printf("File is not present\n");
				return 0;
		}
		printf("File offset is at -> %ld\n\n", ftell(fptr));

		while ((ch = fgetc(fptr)) != EOF);

		printf("\nFile size is at -> %ld\n", ftell(fptr));

		fclose(fptr);

		return 0;
}
#endif


