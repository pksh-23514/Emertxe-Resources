#if 0
#include <stdio.h>

int main()
{
		int num1 = 10, num2 = 20;
		int num3, num4;
		FILE *fptr, *fptr1;

		if ((fptr = fopen("text2.txt", "w+")) == NULL)
		{   
				fprintf(stderr, "Can't open input file text2.txt!\n"); return 1;
		}
		scanf("%d%d", &num1, &num2);
		
		fwrite(&num1, sizeof(num1), 1, fptr);
		fwrite(&num2, sizeof(num2), 1, fptr);
		rewind(fptr);
		fread(&num3, sizeof(num3), 1, fptr);
		fread(&num4, sizeof(num4), 1, fptr);

		printf("%d %d\n", num3, num4);
		

		fclose(fptr);

		return 0;
}
#endif
#if 1
#include <stdio.h>

int main()
{
		int num1 = 10, num2 = 20;
		int num3, num4;
		FILE *fptr, *fptr1;

		if ((fptr = fopen("text2.txt", "w+")) == NULL)
		{   
				fprintf(stderr, "Can't open input file text2.txt!\n"); return 1;
		}
		scanf("%x%x", &num1, &num2);
		
		fwrite(&num1, sizeof(num1), 1, fptr);
		fwrite(&num2, sizeof(num2), 1, fptr);
		rewind(fptr);
		fread(&num3, sizeof(num3), 1, fptr);
		fread(&num4, sizeof(num4), 1, fptr);

		printf("%x %x\n", num3, num4);
		

		fclose(fptr);

		return 0;
}
#endif

