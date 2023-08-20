#include <stdio.h>
#include <stdlib.h>
size_t my_strlen(char *str);
void my_strcpy(char *s2, char *s1);
void my_strrev(char *s1);
int my_atoi(char *s1);
char *my_strdup(char *s1); 
int main()
{
		char str1[50];
		char str2[50];
		unsigned int len;
		printf("ENter the string\n");
		scanf("%[^\n]", str1);
		char *ptr = my_strdup(str1);
		printf("dulplicate string = %s\n", ptr);
		free(ptr);
		//len = my_strlen(str1);
		//printf("The string is: %s and length = %d\n", str1, len);
		//my_strcpy(str2, str1);

		//printf("string2 is %s\n", str2);

		//my_strrev(str1);
		//printf("string1 reverse is %s\n", str1);
		//int x;
		//x = my_atoi(str1);
		//printf("%d\n", x);

		return 0;
}
char *my_strdup(char *s1)
{
		char *p = malloc(my_strlen(s1) + 1);
		if (p == NULL)
		{
				printf("mystrdup failed\n");
				return NULL;
		}
		my_strcpy(p, s1);
		return p;
}
int my_atoi(char *s1)
{
		int n = 0, flag = 1;
		if (*s1 == '-')
		{
				flag = -1;
				s1++;
		}
		while (*s1)
		{
				n = n * 10 + (*s1++ - '0');
		}
		return n * flag;
}
void my_strrev(char *s1)
{
		char ch;
		char *p = s1 + my_strlen(s1) - 1;
		while (p > s1)
		{
				ch = *p;
				*p = *s1;
				*s1 = ch;
				p--;
				s1++;
		}
}
void my_strcpy(char *s2, char *s1)
{
		while (*s2++ = *s1++);
}
size_t my_strlen(char *str)
{
		char *p = str;
		while (*str++);
		return str - p - 1;
}

