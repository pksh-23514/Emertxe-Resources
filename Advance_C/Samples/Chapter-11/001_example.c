#if 0
#include <stdio.h>
int main()
{
	FILE *fp;

	fp = fopen("text.txt", "r");
	fclose(fp);
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	FILE *fp;

	fp = fopen("text.txt", "r");
	if (fp == NULL)
	{
			//printf("File doesn't exists\n");
			perror("");
			return -1;
	}
	fclose(fp);
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	FILE *fp;

	fp = fopen("text.txt", "w");
	if (fp == NULL)
	{
			printf("File doesn't exists\n");
			//perror("");
			return -1;
	}
	fclose(fp);
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	FILE *fp;

	fp = fopen("text.txt", "a");
	if (fp == NULL)
	{
			printf("File doesn't exists\n");
			//perror("");
			return -1;
	}
	fclose(fp);
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	printf("%zu, %zu\n", sizeof (FILE), sizeof (FILE *));
	return 0;
}
#endif

#if 1
#include <stdio.h>
struct stu
{
};
int main()
{
	printf("%zu\n", sizeof (struct stu));
	return 0;
}
#endif


