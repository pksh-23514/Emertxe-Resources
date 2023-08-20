#if 0
#include <stdio.h>

int main()
{
    char ch;
    printf ("Enter the character: ");
    ch = getchar ();                        //Takes one character as input from Standard Input (i.e. Keyboard).
    printf ("The character is: %c", ch);
    printf ("\nThe ASCII values is: %d\n", ch);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char ch;
    printf ("Enter the character: ");
    ch = getc (stdin);                      //Takes one character as input from Standard Input (i.e. Keyboard). We can specify in place of 'stdin' and it takes input from the specified stream.
    printf ("The character is: %c", ch);
    printf ("\nThe ASCII values is: %d\n", ch);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char ch, c;
    printf ("Enter the characters: ");          //If you enter 1 character and press enter key or enter multiple characters.
    ch = getchar ();                            //The first character will be stored in 'ch'.
    printf ("The character is: %c", ch);
    printf ("\nThe ASCII values is: %d\n", ch);
    c = getc (stdin);                           //The enter key or second character will be stored in 'c'.
    printf ("The character is: %c", c);
    printf ("\nThe ASCII values is: %d\n", c);
    return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
    char ch;
    printf ("Enter the character: ");
    ch = getchar ();
    printf ("The character is: ");
    int i = putchar (ch);                       //Prints one character to Standard Output (i.e. Monitor).
    printf ("\nValue stored in i = %d\n", i);   //putchar() returns the character written as an unsigned char cast to an int or EOF on error.
    return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
    char ch;
    printf ("Enter the character: ");
    ch = getc (stdin);
    printf ("The character is: ");
    int i = putc (ch, stdout);                  //Prints one character to Standard Output (i.e. Monitor). We can specify in place of 'stdout' and it prints output on the specified stream.
    printf ("\nValue stored in i = %d\n", i);   //putc() returns the character written as an unsigned char cast to an int or EOF on error.
    return 0;
}
#endif

#if 0
#include <stdio.h>
//warning: implicit declaration of function ‘gets’ [-Wimplicit-function-declaration]
//warning: the `gets' function is dangerous and should not be used. 
//The gets() function is risky to use since it doesn't perform any array bound checking and keep reading the characters until the new line (enter) is encountered.
//A buffer overflow occurs when the user input exceeds the buffer capacity.
//Usually, the compiler generates the stack smashing detected error in response to its defence mechanism against buffer overflows.

int main()
{
    char str[50]; char* s;
    printf("Enter the String: ");
    s = gets(str);                  //Reads a line from stdin and stops when either the newline character is read or when the end-of-file is reached (both included in the string being stored).
    printf ("You entered: %s %s\n", str, s);        //Same string is displayed twice.
    printf ("Addresses are: %p %p", str, s);        //This function returns str on success, and NULL on error or when end of file occurs, while no characters have been read.
    return 0;
}
/*Enter a string : Hi(\n)
  You entered: Hi
   Hi 
  Addresses are: 0x7ffc505f2bc0 0x7ffc505f2bc0
*/
//The variable ‘s’ and ‘str’ have the same address and print the same string.
#endif

#if 0
#include <stdio.h>

int main()
{
    char str[50], *s;
    printf ("Enter the String: ");
    s = fgets (str, 50, stdin);             //Reads the string ended by '\n' or 'EOF' and stores in 'str' along with the '\n' or 'EOF' at the end. Also, 50 is the limit of characters in input.
    printf ("You entered: %s %s\n", str, s);        //Same string is displayed twice.
    printf ("Addresses are: %p %p\n", str, s);
//On success, the function returns the same str parameter. If the End-of-File is encountered and no characters have been read, the contents of str remain unchanged and a null pointer is returned.
//If an error occurs, a null pointer is returned.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char str[50]; int i;
    printf ("Enter the String: ");
    fgets (str, 50, stdin);
    i = puts (str);          //Prints the string to Standard Output (i.e. Monitor) and appends one '\n' to the string.
    printf ("Value stored in i: %d\n", i);      //The integer value returned by puts() will always be equal to the number of characters present in the string plus 1 (due to '\n' appended).
    return 0;
}
/*Enter a string: Hello World(\n)
  Hello World

  Value stored in i: 13
*/
#endif

#if 0
#include <stdio.h>

int main()
{
    char str[50]; int i;
    printf ("Enter the String: ");
    fgets (str, 50, stdin);
    i = fputs (str, stdout); //Prints the string to Standard Output (i.e. Monitor) and appends one '\n' to the string. We can specify in place of 'stdout' and it prints output on the specified stream.
    printf ("Value stored in i: %d\n", i);      //It returns 1 if the write operation was successful, otherwise, it returns 0.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int a = 4; char c = 'A'; float f = 3.0f;
    int ret = printf ("%f %c %d\n", f, c);  //If one of the specifiers is additional than the variables passed in printf(), it shows a warning and that extra specifier prints some undefined value.
//warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=].
    printf ("Value in ret: %d\n", ret);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int a = 4; char c = 'A'; float f = 3.0f;
    int ret = printf ("%d %f\n", a, f, c);  //If one of the variables passed is additional than the specifiers in printf(), it shows a warning and that extra variable is ignored.
//warning: too many arguments for format [-Wformat-extra-args].
    printf ("Value in ret: %d\n", ret);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int a; float f; char c;
    int ret = scanf ("%d %f %c", &a, &f);   //If one of the specifiers is additional than the variables passed in scanf(), it takes 3 input from user but causes segmentation fault.
//warning: format ‘%d’ expects a matching ‘int *’ argument [-Wformat=]
    printf ("%d %f %c\n%d\n", a, f, c, ret);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int a; float f; char c;
    int ret = scanf ("%d %f", &a, &f, &c);  //If one of the variables passed is additional than the specifiers in scanf(), 2 inputs are taken from the user.
//warning: too many arguments for format [-Wformat-extra-args]
    printf ("%d %f %c\n%d\n", a, f, c, ret);    //Garbage value is stored in 'c' as there is no input taken. 'ret' has the value '2' if scanf() is successful in taking both inputs.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char a[8] = "Emertxe";
    int ret = printf ("%s", a);     //If successful, the total number of characters written is returned. On failure, a negative number is returned. 
    printf ("\nValue in ret without newline in printf: %d\n", ret);     //ret = size of string without '\0' character.
    ret = printf ("%s\n", a);       //The total number of characters written is returned which includes the '\n' along with the string stored in 's'.
    printf ("Value in ret with newline in printf: %d\n", ret);          //ret = (size of string without '\0' character) + 1.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int ch;
    printf ("Enter the characters: ");
    for ( ; (ch = getchar()) != EOF; )      //The input is taken in 'ch' till the '\n' or 'EOF' is encountered in the Input stream. If another 'EOF' is encountered, then the loop breaks.
    {
        putchar (ch);       //As soon as '\n' or 'EOF' is encountered in the Input stream, the entire Buffer is cleared which contains the input including '\n' or 'EOF'. Then input is started again.
    }
    printf ("EOF Received!\n");     //If the loop breaks, then this printf() is executed.
    return 0;
}
#endif

#if 0 
#include <stdio.h>

int main()
{
    int ch;
    printf ("Enter the characters: ");
    for ( ; (ch = getc (stdin)) != EOF; )   //The input is taken in 'ch' till the '\n' or 'EOF' is encountered in the Input stream. If another 'EOF' is encountered, then the loop breaks.
    {
        putc (ch, stdout);  //As soon as '\n' or 'EOF' is encountered in the Input stream, the entire Buffer is cleared which contains the input including '\n' or 'EOF'. Then input is started again.
    }
    printf ("EOF Received!\n");     //If the loop breaks, then this printf() is executed.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int ret = printf ("The output for Nested printf() are: %d %d\n", printf ("Emertxe\n"), printf ("Hello World\n"));
    printf ("Value in ret: %d\n", ret);
//The rightmost printf() is executed first. So, the order is Right to Left in case of printf() for arguments evaluation but the format specifiers are evaluated from Left to Right.
//The inner printf prints its output and returns length of the string printed on the screen to the outer printf. The inner printf() will return the values as: 8 and 12. 
//The outer printf() picks up by the 2 values returned by inner printf() in '%d' and then prints: 8 12(\n) i.e. 5 succesful prints. 5 is stored in 'ret' which is printed in the next line.
    return 0;
}
#endif

#if 0
#include <stdio.h>

#include <stdio.h>
int main()
{
    int age;
    char array_1[10];
    char array_2[10];
    sscanf("I am 30 years old", "%s %s %d", array_1, array_2, &age);
    printf("OK you are %d years old\n", age);
    printf ("%s%s\n", array_1, array_2);
    sscanf("I am 30 years old", "%*s %*s %d", &age);
    printf("OK you are %d years old\n", age);
/*OK you are 30 years old
Iam
OK you are 30 years old*/
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int a =5; float f = 6.87; char c = 'A', str[100];
    sprintf (str, "The values are: %d %f %c", a, f, c);
    printf ("%s\n", str);
//The values are: 5 6.870000 A
    return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
    short int i;
    scanf("%h*d", &i);
/*warning: unknown conversion type character ‘*’ in format [-Wformat=]
warning: too many arguments for format [-Wformat-extra-args]*/
    printf("%hd", i);
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int n;
    scanf ("%d", n);        //warning: format ‘%d’ expects argument of type ‘int *’, but argument 2 has type ‘int’ [-Wformat=].
    printf ("%d\n", n);
//Segmentation fault (core dumped)
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char ch = 'y';
    printf ("Enter the character: ");
    while (ch != 'n')
    {
        scanf ("%c", &ch);
        printf ("%c", ch);
    }
    printf ("\n");
//Enter the character: abcdefghijklmnopq
//abcdefghijklmn
//The scanf() reads one character from the I/P Buffer. Then printf() pushes it to the O/P Buffer. If the loop condition is True, the scanf() flushes the character in O/P Buffer before reading next.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char ch = 'y';
    printf ("Enter the character: ");
    while (ch != 'n')
    {
        scanf ("%c", &ch);
        __fpurge (stdin);
        printf ("%c ", ch);
    }
    printf ("\n");
/*Enter the character: abcdef
a (Console waiting for further input) abcd
a (Console waiting for further input) ghijklmn
g (Console waiting for further input) n
n*/
//The scanf() reads one character from the I/P Buffer. The fpurge() deletes the remaining characters from the I/P Buffer. So, it becomes empty. Then printf() pushes it to the O/P Buffer.
//If the loop condition is True, the scanf() flushes the character in O/P Buffer before reading. The next reading is directly from stdin as Buffer is empty.
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    char ch = 'y';
    printf ("Enter the character: ");
    while (ch != 'n')
    {
        scanf ("%c", &ch);
        while (getchar() != '\n');
        printf ("%c ", ch);
    }
    printf ("\n");
/*Enter the character: 1234(\n)
1 abcd(\n)
a ghijl(\n)
g n(\n)
n*/
//scanf() reads '1' and stores in ch. The next set of characters till '\n' are read by getchar(). The loop of getchar() breaks with '\n'. The value '1' is moved to O/P Buffer by printf().
//The loop condition is True; so scanf() flushes the O/P Buffer. Since, the I/P Buffer is empty as all the characters were read by getchar(), the next reading is directly from stdin.
//This continues till 'n(\n)' is read. So, scanf() reads 'n' to 'ch. getchar() terminates the loop as '\n' is encountered. printf() moves 'n' to O/P Buffer and the loop terminates.
    return 0;
}
#endif

#if 0
#include <stdio.h>
#include <unistd.h>

int main()
{
    int i = 1;
    while (i <= 3)
    {
        fprintf (stdout, "Hello ");
        fprintf (stderr, "World ");
        sleep (1);
        i++;
    }
    printf ("\n");
//World World World Hello Hello Hello
    return 0;
//'stderr' is unbuffered. So, "World" is directly pushed to the console as soon as fprintf() is called. 'stdout' is buffered and hence, all the "Hello" are stored there till program termination.
//1 sec delay is in between the printing of "World" and then all the "Hello" are pushed to the console at once.
}
#endif
