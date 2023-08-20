#if 0
#include <stdio.h>

int main()
{
   if ("good" == "good")    //All the identical string literals are stored in the same memory location of Read-only memory i.e. Text segment. They are duplicated whenever required from same address.
      printf ("Same address: %p\n", "good");
   else
      printf ("Different address\n");
   return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
//This creates a char array of size 5 and initialises it with the values 'g', 'o', 'o', 'd' and '\0' in the stack. So, 2 separate arrays are created in the stack.
   char arr1[] = "good";
   char arr2[] = "good";
   if (arr1 == arr2)        //The 2 addresses are of arr1 and arr2 which are stored in the stack memory. So, they are different addresses although they contain the same string.
       printf ("Same address: %p\n", arr1);
   else
       printf ("Different address: %p %p\n", arr1, arr2);
   return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char str[] = "hello";       //Assignment of string to an array is a Modifiable string.
    printf ("%s\n", str);
    str[0] = 'H';               //You can modify the characters in the string by accessing the index of the array and assigning a character to that position to replace the existing character.
    printf ("%s\n", str);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char str[] = "hello";       //Assignment of string to an array is a Modifiable string.
    printf ("%s\n", str);
    str = "Hello";              //You cannot modify the string by directly assigning another string to the array. You have to use indices for making any changes in the string.
    printf ("%s\n", str);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char str[] = "hello";
    printf ("%c\n", ++str);     //Error: lvalue required as increment operator.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char* ptr = "hello";        //Assignment of string to a pointer is a Constant string.
    printf ("%s\n", ptr);
    *ptr = 'H';                 //You cannot modify the string by accessing the memory location of the string thorugh pointer as the address stored in the pointer is from Text segment.
    printf ("%s\n", ptr);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char* ptr = "hello";        //Assignment of string to a pointer is a Constant string.
    printf ("%s\n", ptr);
    ptr = "Hello";              //You can change the address to which the pointer is referring by reassigning the pointer to another string directly.
    printf ("%s\n", ptr);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char* ptr = "hello";
    printf ("%c\n", *++ptr);     //Valid statement. Since, '*' and '++' are both unary operands of same precedence, the expression is evaluated as *(++ptr).
    return 0;
}
#endif

#if 0
#include <stdio.h>
void fun (char* str)
{
    str[0] = 'H';       //You cannot modify the Constant string whose address is stored in 'str'. It leads to segmentation fault (core dumped).
}
int main()
{
    char* str = "hello";
    printf("%s", str);
    fun (str);
    printf ("%s", str);
    return 0;
}
#endif

#if 0
#include <stdio.h>
void fun (char* str)
{
    *str = 'H';         //You cannot modify the Constant string whose address is stored in 'str'. It leads to segmentation fault (core dumped).
}
int main()
{
    char* str = "hello";
    printf("%s", str);
    fun (str);
    printf ("%s", str);
    return 0;
}
#endif

#if 0
#include <stdio.h>
void fun (const char* str)
{
    str[0] = 'H';           //You cannot modify a Constant string. Error: assignment of read-only location of '*str'. 
}
int main()
{
    char* str = "hello";
    printf("%s", str);
    fun (str);
    printf ("%s", str);
    return 0;
}
#endif

#if 0
#include <stdio.h>
void fun (const char* str)
{
    *str = 'H';             //You cannot modify a Constant string. Error: assignment of read-only location of '*str'.
}
int main()
{
    char* str = "hello";
    printf("%s", str);
    fun (str);
    printf ("%s", str);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char* str;      //The pointer is only declared. So, it can be pointing to any random address and we cannot use it to store the string being read.
    int c = 0;
    printf ("Enter the string: ");
    scanf ("%s", str);      //This will cause the program to terminate as we do not have a valid address to store the string read from user.
    while (*str != '\0')
    {
        c++;
        str++;
    }
    printf ("Count = %d\n", c);
//Segmentation fault (core dumped).
    return 0;
}
#endif

#if 0
#include <stdio.h>
#include <string.h>

int main()
{
    char str [6] = "hello";
    char* str1 = "world";
    strncat (str, str1, 9);
    printf ("%s\n", str);
//No Compile time error.
/*helloworld
*** stack smashing detected ***: <unknown> terminated
Aborted (core dumped)*/
//Runtime error occurs.
    return 0;
}
#endif

#if 0
#include <stdio.h>
#include <string.h>

int main()
{
    char* str = "hello, world";
    char str1[9];
    strncpy (str1, str, 9);     //9 characters from 'str' will be copied to 'str1'. But then there will not be any index left to place the '\0'. So, it can lead to Undefined behavior.
    printf ("%s %ld\n", str1, strlen (str1));
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char* s1 = "Hello";
    char* s2 = "Hello";
    printf ("%lu\t%s\n", s1 - s2, s1 - s2);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char str[] = "abc"; int i = 0;
    while (str[i] != '\0')      //The loop will run for 3 times.
    {
        printf ("%s\n", str);   //'str' has the base address of "abc" and %s prints till the '\0' is encountered. So, each time the loop is executed; "abc" is printed.
        i++;
    }
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char str[] = "abc"; int i = 0;
    while(str[i] = '\0')    //Initialising the first character of 'str' as '\0' will cause the loop to terminate.
    {
        printf("%s", str);
        i++;
    }
    printf ("%d\n", i);     //'i' will be retained as '0' as the loop never executes.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char str[] = "abcd"; int i = 0;
    while(str[i] != '\0')
    {
        printf("%s", str[i]);   //warning: format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘int’ [-Wformat=].
        i++;                         
    }
//Segmentation fault (core dumped).
    return 0;
}
#endif

#if 0
#include<stdio.h>
int main()
{
    char str[] = "hello"; int i = 0;
    while( str[i] != '\0')
    {
        printf("%s\n", str+i);  //'str+i' is equal to '&str[i]'. So, %s will print from 'str[i]' to the null character in each iteration.
        i++;
    }
    return 0;
}
#endif

#if 0
#include<stdio.h>

int main()
{
    char str[] = "hello"; int i = 0;
    while( str[i] != '\0')
    {
        printf("%s\n", (str+i)+1);  //(str+i) = &str[i]. So, adding 1 will be moving 1 more address ahead i.e. &str[i+1]. %s will go from str[i+1] to null character in each iteration.
        i++;
    }
/*
ello
llo
lo
o

*/
    return 0;
}
#endif

#if 0
#include<stdio.h>

int main()
{
    char str[] = "1234";
    printf("%d\n", str + 1);    //warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘char *’ [-Wformat=]. 'str+1' is an address (&str [1]).
    return 0;
//Undefined Behavior.
}
#endif

#if 0
#include<stdio.h>

int main()
{
    char str[] = "1234";
    printf("%c\n", str + 1);    //warning: format ‘%c’ expects argument of type ‘int’, but argument 2 has type ‘char *’ [-Wformat=]. str+1' is an address (&str [1]).
    return 0;
//Undefined Behavior.
}
#endif

#if 0
#include<stdio.h>

int main()
{
    char str[] = "abcd"; int i = 0;
    while(str[i] != '\0')
    {
        i++;    //Since i++ is before printf(), it will print the ASCII values of characters from the second position of the character array. The loop runs for 4 times. (Same for ++i).
        printf("%d\n", str[i]);
    }
/*
98
99
100
0 (0 is the ASCII value of '\0')
*/
    return 0;
}
#endif

#if 0
#include<stdio.h>

int main()
{
    char str[] = "abcd"; int i = 0;
    while(str[i] != '\0')
    {
        printf("%d", str[i]);
        i++;    //Since i++ is after printf(), it will print the ASCII values of characters from the first position of the character array. The loop runs for 4 times. (Same for ++i).
    }
/*
97
98
99
100
*/
    return 0;
}
#endif

#if 0
#include<stdio.h>

int main()
{
    printf("Hello" - "Hello");
//warning: passing argument 1 of ‘printf’ makes pointer from integer without a cast [-Wint-conversion].
//note: expected ‘const char * restrict’ but argument is of type ‘long int’.
//warning: null argument where non-null required (argument 1) [-Wnonnull].
//The output is nothing. (If you pass a zero value to printf() without any format specifier, it prints nothing.) {However, with %d or %s; it gives output as: 0	(null)}
    return 0;
}
#endif

#if 0
#include<stdio.h>

int main()
{
    char *str = "Hello";
    char *str1 = "Hello";
    printf("str" - "str1");
//warning: passing argument 1 of ‘printf’ makes pointer from integer without a cast [-Wint-conversion]
//note: expected ‘const char * restrict’ but argument is of type ‘long int’
//warning: format not a string literal and no format arguments [-Wformat-security]
//Segmentation fault (core dumped). (If you pass any non-zero value to printf() without any format specifier, it causes segmentation fault.)
    return 0;
}
#endif

#if 0
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Hello";
    char* s2 = "Hello";
    printf ("%ld\t%lu\n", strlen (s1), sizeof (s1));
    printf ("%ld\t%lu\n", strlen (s2), sizeof (s2));
    return 0;
//5	6
//5	8
//s1[] : strlen() counts the number of characters excluding the '\0'. But sizeof() counts the total memory occupied including '\0'.
//*s2 : strlen() counts the number of characters excluding the '\0'. But sizeof() returns the memory occupied by the character pointer.
}
#endif

#if 0
#include <stdio.h>

int main()
{
    if ((sizeof ("Hello" "World")) == ((sizeof ("Hello")) + (sizeof ("World"))))
        printf ("True - %lu\n", sizeof ("Hello" "World"));
    else
        printf ("False - %lu %lu\n", sizeof ("Hello" "World"), ((sizeof ("Hello")) + (sizeof ("World"))));
    return 0;
//False - 11 12
//"Hello" "World" is combined as "HelloWorld" consisting of 11 characters. Individually, "Hello" and "World" are 6 characters each. So, If (11 == (6 + 6)) is False.
}
#endif
