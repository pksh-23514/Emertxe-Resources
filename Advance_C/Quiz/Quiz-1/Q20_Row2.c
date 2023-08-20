#include <stdio.h>

int main()
{
    printf("%u ", sizeof(int));
    
    printf("%u ", sizeof(char));
    
    printf("%u ", sizeof('A'));
    
    printf("%u ", sizeof(7.2));
    
    printf("%u\n", sizeof(2));
    
    return 0;
}


/* 
Ans: 
Q20_Row2.c: In function ‘main’:
Q20_Row2.c:5:14: warning: format ‘%u’ expects argument of type ‘unsigned int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
     printf("%u ", sizeof(int));
             ~^
             %lu
Q20_Row2.c:7:14: warning: format ‘%u’ expects argument of type ‘unsigned int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
     printf("%u ", sizeof(char));
             ~^
             %lu
Q20_Row2.c:9:14: warning: format ‘%u’ expects argument of type ‘unsigned int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
     printf("%u ", sizeof('A'));
             ~^
             %lu
Q20_Row2.c:11:14: warning: format ‘%u’ expects argument of type ‘unsigned int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
     printf("%u ", sizeof(7.2));
             ~^
             %lu
Q20_Row2.c:13:14: warning: format ‘%u’ expects argument of type ‘unsigned int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
     printf("%u\n", sizeof(2));
             ~^
             %lu

Ans: 4 1 4 8 4

*/
