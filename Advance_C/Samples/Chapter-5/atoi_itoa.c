#include <stdio.h>
#include <ctype.h>
#include <string.h>
void reverse (char *s);
int my_atoi(char *s);
void my_itoa(int n, char *s);
//#define ATOI
int main()
{
#ifdef ATOI
		int x;
		char str[10];
		printf("Enter the string of digits\n");
		scanf("%s", str);
		x = my_atoi(str);
		printf("ATOI res = %d\n", x);
#else
		int x;
		char str[10];
		printf("Enter the Number\n");
		scanf("%d", &x);
		my_itoa(x, str);
		printf("ITOA resultant string is = %s\n", str);

#endif
		return 0;
}
int my_atoi(char *s)
{
		int n = 0, flag = 1;
		if (*s == '-')
		{
				flag = -1;
				s++;
		}
		while (*s && isdigit(*s))
		{
				n = n * 10 + (*s++ - '0');
		}
		return n * flag;
}
void my_itoa(int n, char *s)
{
		int i = 0;
		if (n < 0)
		{
				n = n * -1;
				s[i++] = '-';
		}
		while (n)
		{
				s[i++] = n % 10 + '0';

				n = n / 10;
		}
		s[i] = '\0';
		if (*s == '-')
		{
				reverse(s + 1);
		}
		else
		{
				reverse(s);
		}
}
void reverse (char *s)
{
		char ch, *p = s + strlen(s) - 1;
		while (p > s)
		{
				ch = *p;
				*p = *s;
				*s = ch;
				s++; p--;
		}
}

