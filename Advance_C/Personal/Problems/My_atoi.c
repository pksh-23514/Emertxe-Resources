#include <stdio.h>

#if 0
int my_atoi(const char* input) {
  int accumulator = 0, // will contain the absolute value of the parsed number.
      curr_val = 0, // the current digit parsed.
      sign = 1; // the sign of the returned number.
  size_t i = 0; // an index for the iteration over the char array.

  // Let's check if there is a '-' in front of the number, and change the final sign if it is '-'.
  if (input[0] == '-') {
    sign = -1;
    i++;
  }
  // A '+' is also valid, but it will not change the value of the sign. It is already +1!
  if (input[0] == '+')
    i++;

  // I think it is fair enough to iterate until we reach the null char.
  while (input[i] != '\0') {
    // The char variable has already a "numeric" representation, and it is known that '0'-'9' are consecutive.
//Thus by subtracting the "offset" '0' we are reconstructing a 0-9 number that is then casted to 'int'.
    curr_val = (int)(input[i] - '0'); 

    // If atoi finds a char that cannot be converted to a numeric 0-9 it returns the value parsed in the first portion of the string.
    if (curr_val < 0 || curr_val > 9)
      return accumulator;

    // Let's store the last value parsed in the accumulator, after a shift of the accumulator itself.
    accumulator = accumulator * 10 + curr_val;
    i++;
  } 

  return sign * accumulator;
}


int main () {
   char test1[] = "234";
   char test2[] = "+6543";
   char test3[] = "-1234";
   char test4[] = "9B123";

   int a = my_atoi(test1);
   int b = my_atoi(test2);
   int c = my_atoi(test3);
   int d = my_atoi(test4);

   printf("%d, %d, %d, %d\n", a, b, c, d);
   return 0;
}
#endif

#if 1
int catoi(const char *string)
{
    int res = 0;
    int sign = 1;
    if (*string == '-')
    {
        sign = -1;
        string++;
    }
    if (*string == '+') string++;

    while (*string >= '0' && *string <= '9')
    {
        res = res * 10 + (*string - '0');
        string++;
    }
    return (sign < 0) ? (-res) : res;
}

int main () {
   char test1[] = "++234";
   char test2[] = "+6543";
   char test3[] = "-1234";
   char test4[] = "--9B123";

   int a = catoi(test1);
   int b = catoi(test2);
   int c = catoi(test3);
   int d = catoi(test4);

   printf("%d, %d, %d, %d\n", a, b, c, d);
   return 0;
}
#endif
