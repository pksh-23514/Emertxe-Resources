# 1 "004_example.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "004_example.c"



int main()
{
 char array[1024];

 printf("%s\n", "Enter a string");
 fgets(array, 1024, stdin);

 printf("%s\n", array);

 return 0;
}
