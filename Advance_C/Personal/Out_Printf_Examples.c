#if 0
#include <stdio.h>

int main()
{
    printf ("%c\n", 'A');               //Signed or Unsigned Character.
    printf ("%s\n", "Private code!");   //Specifies a single-byte or multi-byte character string. Characters are displayed up to the first null character or until the precision value is reached.
    printf ("%d\n", -14);               //Signed decimal integer.
    printf ("%i\n", -14);               //Signed decimal integer.
    printf ("%u\n", -14);               //Unsigned decimal integer.
    printf ("%o\n", -10);               //Unsigned octal integer.
    printf ("%x\n", -235);              //Unsigned hexadecimal integer; uses "abcdef".
    printf ("%X\n", 235);               //Unsigned hexadecimal integer; uses "ABCDEF".
    printf ("%f\n", 14.235);            //Signed value that has the form [-]dddd.dddd, where dddd is one or more decimal digits. The number of digits after the decimal point depends on the precision.
    printf ("%F\n", -14.235);           //Identical to the f format except that infinity and nan output is capitalized.
    printf ("%e\n", 5.23);              //Signed value that has the form [-]d.dddde±dd[d], where d is one decimal digit, dddd is one or more decimal digits and dd[d] is two or three decimal digits.
    printf ("%E\n", -5.23);             //Identical to the e format except that E rather than e introduces the exponent.
    printf ("%g\n", 23.14);             //Signed values are displayed in f or e format, whichever is more compact for the given value and precision.
    printf ("%g\n", 0.000014);          //The e format is used only when the exponent of the value is less than -4 or greater than or equal to the precision argument.
    printf ("%G\n", -23.14);            //Identical to the g format, except that E, rather than e, introduces the exponent (where appropriate).
    printf ("%G\n", -0.000014);         //The E format is used only when the exponent of the value is less than -4 or greater than or equal to the precision argument.
    printf ("%p\n", "Hi");              //Display the argument as an address in hexadecimal digits.
    printf ("%a\n", 23.14);
//Signed hexadecimal double-precision floating-point value that has the form [-]0xh.hhhhp±dd, where h.hhhh are the hex digits of the mantissa, and dd are one or more digits for the exponent.
    printf ("%A\n", -23.14);
//Signed hexadecimal double-precision floating-point value that has the form [-]0XH.HHHHP±dd, where H.HHHH are the hex digits of the mantissa, and dd are one or more digits for the exponent.

    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    int s; int m = 28; int val;
    printf("The value of %ns and %nm %nval : ", &s, &m, &val);
    printf("%d\t%d\t%d\n", s, m, val);
/*In C language, %n is a special format specifier. It cause printf() to load the variable pointed by corresponding argument. The loading is done with a value which is equal to the number of characters printed by printf() before the occurrence of %n. 
Note − It does not print anything. Another printf() function is used to print the statement.
Even if we give the value to the identifier (here m = 28), it will not consider the value given by us. It counts the characters used before the use of %n in the statement. It will not count %n as a character.*/
    
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    printf ("%3d %3d\n", 1, 1);         //Tells the printf() how many columns on screen shall be used while printing the value.
    printf("%3d %3d\n", 10, 10);        //Tells the printf() how many columns on screen shall be used while printing the value.
    printf("%3d %3d\n", 100, 100);      //Tells the printf() how many columns on screen shall be used while printing the value.
    printf("%1d %1d\n", 10, 10);        //If the field width is less than what is required to print the number, the field width is ignored and complete number is printed.
    printf ("\n");
    printf ("%-3d %-3d\n", 1, 1);       //The '-' in format specifier, this means it is Left-justification and the value will be padded with blanks on the right. Right-justification is default.
    printf("%-3d %-3d\n", 10, 10);      //Tells the printf() how many columns on screen shall be used while printing the value. '-' means it is Left-justification. 
    printf("%-3d %-3d\n", 100, 100);    //Tells the printf() how many columns on screen shall be used while printing the value. '-' means it is Left-justification.
    printf("%-1d %-1d\n", 10, 10);      //The field width is less than what is required to print the number, the field width is ignored and complete number is printed without L/R justification.
    printf ("\n");
    printf ("%+d\n", 23);               //The '+' uses a sign (+ or -) to prefix the output value if it's a signed value.
    printf ("%+d\n", -23);              //The '+' uses a sign (+ or -) to prefix the output value if it's a signed value.
    printf ("%d\n", -23);               //The default sign appears only for negative signed values (-).
    printf ("\n");
    printf ("% d\n", 14);               //Use a blank to prefix the output value if it's signed and positive.
    printf ("% d\n", -14);              //No effect if the output value is signed and negative. The '-' sign is displayed in place of a blank.
    printf ("% 5d\n", 14);              //The width specified is 5. So, 14 is displayed with one blank to prefix the output and 2 blanks to fill the minimum specified width.
    printf ("% 5d\n", -14);             //The width specified is 5. So, 14 is displayed with negative sign to prefix the output and 2 blanks to fill the minimum specified width. ' ' is ignored.
    printf ("%  d\n", 14);              //warning: repeated ' ' flag in format [-Wformat=]. Multiple ' ' will not make any difference in the output.
    printf ("%+ d\n", 14);              //warning: ' ' flag ignored with '+' flag in gnu_printf format [-Wformat=].
    printf ("\n");
    printf ("%03d\n", 14);              //If width is prefixed by 0, leading zeros are added until the minimum width is reached.
    printf ("%-03d\n", 14);             //warning: '0' flag ignored with '-' flag in gnu_printf format [-Wformat=].
    printf ("%+05d\n", 14);             //The '+' along with '0' before width will have a sign (+ or -), zeros will be padded if necessary to fill the specified width along with the number.
    printf ("%3.1d\n", 1);              //The precision (here '.1') specifies the minimum number of digits to be printed on the specified width (here '3').
    printf ("%03.d\n", 14);             //warning: '0' flag ignored with precision and ‘%d’ gnu_printf format [-Wformat=]. The blanks are used to fill the specified width if required.
    printf ("%3.2d\n", 1);              //If the number of digits (here '1') in the argument is less than precision (here '.2'), the output value is padded on the left with zeros.
    printf ("%03.2d\n", 1);             //warning: '0' flag ignored with precision and ‘%d’ gnu_printf format [-Wformat=]. But Precision is more than digits, so 0 and ' ' are padded on the left.
    printf ("%+03.2d\n", 1);            //'0' flag is ignored. The width is filled with sign, 0 is padded as precision is more. No blank is provided as width is full.
    printf ("%3.2d\n", 123);            //The value isn't truncated when the number of digits (here '123') exceeds precision (here '2').
    
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    printf("%hhx\n", 0xFFFFFFFFFFFFFFFF); //char and unsigned char. warning: format ‘%hhx’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=].
    printf("%hx\n", 0xFFFFFFFFFFFFFFFF);  //short int and short unsigned int. warning: format ‘%hx’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=].
    printf("%x\n", 0xFFFFFFFFFFFFFFFF);   //int and unsigned int. warning: format ‘%x’ expects argument of type ‘unsigned int’, but argument 2 has type ‘long unsigned int’ [-Wformat=].
    printf("%lx\n", 0xFFFFFFFFFFFFFFFF);  //long int and long unsigned int. 
    printf("%llx\n", 0xFFFFFFFFFFFFFFFF); //warning: format ‘%llx’ expects argument of type ‘long long unsigned int’, but argument 2 has type ‘long unsigned int’ [-Wformat=].
    printf ("\n");
    printf("%hhd\n", 0xFFFFFFFFFFFFFFFF); //warning: format ‘%hhd’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=].
    printf("%hd\n", 0xFFFFFFFFFFFFFFFF);  //warning: format ‘%hd’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=].
    printf("%d\n", 0xFFFFFFFFFFFFFFFF);   //warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=].
    printf("%ld\n", 0xFFFFFFFFFFFFFFFF);  //long int and long unsigned int.
    printf("%lld\n", 0xFFFFFFFFFFFFFFFF); //warning: format ‘%lld’ expects argument of type ‘long long int’, but argument 2 has type ‘long unsigned int’ [-Wformat=].
    printf ("\n");
    printf("%hhu\n", 0xFFFFFFFFFFFFFFFF); //warning: format ‘%hhu’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=].
    printf("%hu\n", 0xFFFFFFFFFFFFFFFF);  //warning: format ‘%hu’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
    printf("%u\n", 0xFFFFFFFFFFFFFFFF);   //warning: format ‘%u’ expects argument of type ‘unsigned int’, but argument 2 has type ‘long unsigned int’ [-Wformat=].
    printf("%lu\n", 0xFFFFFFFFFFFFFFFF);  //long int and long unsigned int.
    printf("%llu\n", 0xFFFFFFFFFFFFFFFF); //warning: format ‘%llu’ expects argument of type ‘long long unsigned int’, but argument 2 has type ‘long unsigned int’ [-Wformat=].

    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    printf ("%9f\n", 14.235);           //The output '14.235000' has width of 9 characters. So, that fits completely in the specified width. Default precision is 6, so '000' after '235'.
    printf ("%10f\n", 14.235);          //Since, the width specified is 10 and the number of characters is 9; one space is padded to the left as the default is Right-justification.
    printf ("%-10f\n", 14.235);         //Here, we have specified Left-justification. So, one space is padded to the right.
    printf ("%+10f\n", 14.235);         //The '+' uses a sign (+ or -) to prefix the output value if it's a signed value.
    printf ("% 11f\n", 14.235);         //The output is prefixed by one blank space due to ' ' and one blank space to fill the minimum specified width.
    printf ("% 11f\n", -14.235);        //The output is prefixed by negative sign and one blank space to fill the minimum specified width. ' ' is ignored.
    printf ("%010f\n", 14.235);         //The specified width is 10 and there are only 9 characters. So, one 0 is padded to the left for filling the minimum specified width.
    printf ("\n");
    printf ("%.3f\n", 14.235);          //The precision value specifies the number of digits after the decimal point. Default precision is 6.
    printf ("%0.2f\n", 14.2355);        //Here, the precision is 2; so only 2 digits are displayed after the decimal point. The value is rounded to the appropriate number of digits.
    printf ("%0.2f\n", -14.2355);       //The value is rounded to the appropriate number of digits specified in precision. There is no effect on the digits before decimal point.
    printf ("%.0f\n", 14.235);          //If precision is 0, no decimal point is printed.
    printf ("%0.f\n", -14.235);         //If the period (.) appears without a number following it, no decimal point is printed.
    printf ("\n");
    printf ("%10.3f\n", 14.235);        //The specified width is 10 and precision is 3. So, blank spaces are added to the left to fill minimum specified width. Right-justification is default.
    printf ("%-10.3f\n", 14.235);       //The specified width is 10 and precision is 3. So, blank spaces are added to the right as we have specified Left-justification.
    printf ("%+10.3f\n", 14.235);       //The '+' uses a sign (+ or -) to prefix the output value if it's a signed value. Along with it blank spaces are added to the left.
    printf ("%023.10f\n", -14.235);     //The 0 are prefixed to the output value to fill the minimum specified width.  

    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    printf ("%10g\n", 14.235);          //Since, the width specified is 10 and the number of characters is 6; 4 spaces are padded to the left as the default is Right-justification.
    printf ("%-10g\n", 14.235);         //Here, we have specified Left-justification. So, 4 spaces are padded to the right.
    printf ("%+10g\n", 14.235);         //The '+' uses a sign (+ or -) to prefix the output value if it's a signed value.
    printf ("% 11g\n", 14.235);         //The output is prefixed by one blank space due to ' ' and 4 blank spaces to fill the minimum specified width.
    printf ("% 11g\n", -14.235);        //The output is prefixed by negative sign and 4 blank spaces to fill the minimum specified width. ' ' is ignored.
    printf ("%010g\n", 14.235);         //The specified width is 10 and there are only 6 characters. So, four 0 are padded to the left for filling the minimum specified width.
    printf ("\n");
    printf ("%.3g\n", 14.235);          //The precision specifies the maximum number of significant digits printed. Six significant digits are printed, and any trailing zeros are truncated.
    printf ("%0.2g\n", 14.2355);        //Here, the precision is 2; so only 2 significant digits are displayed. The value is rounded to the appropriate number of digits.
    printf ("%0.2g\n", -14.55);         //The value is rounded to the appropriate number of digits specified in precision. There is no effect on the digits before decimal point.
    printf ("%.0g\n", 14.235);          //If precision is 0, the normalised exponent value is printed in scientific notation. (here 1e+01)
    printf ("%0.g\n", -144.235);        //If the period (.) appears without a number following it, the normalised exponent value is printed in scientific notation. (here -1e+02)
    printf ("%5.0g\n", 14.235);         //'1e+01' has 5 characters which is equal to the specified width (here 5). So, no spaces are prefixed.
    printf ("%6.0g\n", 14.235);         //'1e+01' has 5 characters which is less than the specified width (here 6). So, one space is prefixed.
    printf ("\n");
    printf ("%10.3g\n", 14.235);        //The specified width is 10 and precision is 3. So, 6 blank spaces are added to the left to fill minimum specified width. Right-justification is default.
    printf ("%-10.3g\n", 14.235);       //The specified width is 10 and precision is 3. So, 6 blank spaces are added to the right as we have specified Left-justification.
    printf ("%+10.3g\n", 14.235);       //The '+' uses a sign (+ or -) to prefix the output value if it's a signed value. Along with it 5 blank spaces are added to the left.
    printf ("%023.10g\n", -14.235);     //The 0 are prefixed to the output value to fill the minimum specified width. 16 '0' along with 7 characters '-14.235'.

    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    printf ("%10s\n", "Hello");         //The blank spaces are added to the left of the String as the default is Right-justification to fill the minimum specified width.
    printf ("%-10s\n", "Hello");        //Here, we have specified Left-justification. So, spaces are padded to the right of the String.
    printf ("%4s\n", "Hello");          //If the specified width is less than the length of the String, the width is ignored and the complete String is printed.
    printf ("%5s%5s\n", "Hi", "hie");   //The 2 Strings are printed in the specified width as Right-justification. Appropriate spaces are padded on the left as per specified width.
    printf ("%10.5s\n", "Hello World"); //The precision specifies the maximum number of characters to be printed. Characters in excess of precision aren't printed.
    printf("%10.s\n", "Hi");            //If the period (.) appears without a number following it, the precision is 0 and nothing is printed.
    printf("%10.0s\n", "Hi");           //If precision is 0, nothing is printed.
    printf("%+10s\n", "Hi");            //warning: '+' flag used with ‘%s’ gnu_printf format [-Wformat=]. The String is printed with spaces prefixed as per the specified width.
    printf("%010s\n", "Hi");            //warning: '0' flag used with ‘%s’ gnu_printf format [-Wformat=]. The String is printed with spaces prefixed as per the specified width.

    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    printf ("%*d\n", 1, 1);             //If the width specification is an asterisk (*), an int argument from the argument list supplies the value. The first '1' is picked by '*'.
    printf ("%*d\n", 2, 1);             //Here the width is '2' and number of character is 1; so one blank space is padded to the left of the output as Right-justification is default.
    printf ("%*d\n", 3, 1);             //Here the width is '3' and number of character is 1; so 2 blank spaces is padded to the left of the output as Right-justification is default.
    printf ("%-*d\n", 4, 1);            //Here the width is '4' and number of character is 1; so 3 blank spaces is padded to the right of the output as Left-justification is specified.
    printf ("%+*d\n", 5, 1);            //Here the width is '5' and number of character is 1; also '+' is present which is prefixed along with 3 blank spaces to fill the width.
    printf ("%0*d\n", 6, 1);            //Here the width is '5' and number of character is 1; also '0' is present which prefixes five 0 in the output to fill the width.
    printf ("% *d\n", 7, 1);            //Here the width is '5' and number of character is 1; also ' ' is present which is prefixed along with 5 blank spaces to fill the width.

    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    printf ("%.*f\n", 3, 14.2355);      //If the precision specification is an asterisk (*), an int argument from the argument list supplies the value. The first '3' is picked by '*'.
    printf ("%10.*f\n", 3, 14.2355);    //Here the width is '10' and number of character is 6 as per precision; so 4 blank space is padded to the left as Right-justification is default.
    printf ("%-10.*f\n", 3, 14.2355);   //Here the width is '10' and number of character is 6 as per precision; so 4 blank space is padded to the right as Left-justification is specified.
    printf ("%09.*f\n", 2, 14.2355);    //Here the width is '9' and number of character is 5 as per precsision; also '0' is present which prefixes four 0 in the output to fill the width.
    printf ("%+9.*f\n", 3, 14.2355);    //Here the width is '9' and number of character is 6; also '+' is present which is prefixed along with 2 blank spaces to fill the width.
    
    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    printf ("%*s\n", 5, "Hi");          //The '*' picks the value '5' and prints the output. Since, number of characters is 2, 3 blank spaces are prefixed as Right-justification is default.
    printf ("%-*s\n", 5, "Hi");         //The '*' picks the value '5' and prints the output. Since, number of characters is 2, 3 blank spaces are to the right as Left-justification is specified.
    printf ("%5.*s\n", 3, "Hello");     //The '*' picks the value '3' and width is 5. So, the first 3 characters are printed and 2 blank spaces are prefixed as Right-justification is default.

    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    printf ("%#x\t%#X\n", 10, 10);      //When it's used with the o, x, or X format, the # flag uses 0, 0x, or 0X, respectively, to prefix any nonzero output value.
    printf ("%#x\t%#X\n", 0xA, 0xa);    //When it's used with the o, x, or X format, the # flag uses 0, 0x, or 0X, respectively, to prefix any nonzero output value.
    printf ("%#o\n", 10);               //When it's used with the o, x, or X format, the # flag uses 0, 0x, or 0X, respectively, to prefix any nonzero output value.
    printf ("%#d\t%#c\n", 48, 48);      //warning: '#' flag used with ‘%d’ gnu_printf format [-Wformat=]. Ignored when used with c, d, i, u, or s.
    printf ("%#f\t%#e\n", 10.25, 10.25);//When it's used with the e, E, f, F, a, or A format, the # flag forces the output value to contain a decimal point.
    printf ("%#a\t%#g\n", 10.25, 10.25);//When it's used with the g or G format, the # flag forces the output value to contain a decimal point and prevents the truncation of trailing zeros.

    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    printf ("Hello!\rWorld.\n");        //'\r' – We use it to position the cursor to the beginning of the current line. '\n – We use it to shift the cursor control to the new line.
    printf ("Hello\bWorld!\n");         //'\b' - We use it to delete one character from the position before the current position. Blank spaces or tabs are considered.
    printf ("Hello\vWorld\t!\n");       //'\t' - We use it to shift the cursor to a couple of spaces to the right in the same line. '\v' - Vertical Tab.
    printf ("Hello\eWorld!\n");         //'\e' - We use it to delete one character from the position after the current position. Blank Spaces are ignored. Tab is considered after deleting.
    printf ("Hello\fWorld!\n");         //'\f' - We use it to give page break)
    printf ("Hello\\World!\n");         //'\\' - We use it to display the backslash character.
    printf ("\"Hello World\'\n");       //'\”' - We use it to display the double-quotation mark. '\'' - We use it to display the single-quotation mark.
    printf ("Hello\\n\n");              //'\\n' - We use it to display the "\n" character.
    printf ("Hello%%\n");               //'%%' - We use it to display the "%" character.

    return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
    //printf (0);       //warning: null argument where non-null required (argument 1) [-Wnonnull].
    //printf (523);
/*warning: passing argument 1 of ‘printf’ makes pointer from integer without a cast [-Wint-conversion]. 
  note: expected ‘const char * restrict’ but argument is of type ‘int’.
  warning: format not a string literal and no format arguments [-Wformat-security].*/
    printf (-523);
/*warning: passing argument 1 of ‘printf’ makes pointer from integer without a cast [-Wint-conversion].
  note: expected ‘const char * restrict’ but argument is of type ‘int’.
  warning: format not a string literal and no format arguments [-Wformat-security].*/
    return 0;
//Prints nothing.
//Segmentation fault (core dumped).
//Segmentation fault (core dumped).
}
#endif

#if 1
#include <stdio.h>

int main()
{
    int ret = printf ("");      //warning: zero-length gnu_printf format string [-Wformat-zero-length]
    printf ("%d\n", ret);
    return 0;
//0
}
#endif
