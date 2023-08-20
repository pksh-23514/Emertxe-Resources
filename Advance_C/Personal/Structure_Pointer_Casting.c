/*
Name         : Prabhat Kiran
Date         :
Description  :
Sample Input :
Sample Output:
*/

#include <stdio.h>
#include <stdlib.h>
struct n1
{
    int n;
    char ch[6];
};
struct n2
{
    float f;
    int n;
	int b;
	float c;
};
int main()
{
	struct n1* x = (struct n1*) malloc (sizeof (struct n1));
    x->n = 48;
   	x->ch[0] = 'A';
   	x->ch[1] = 'B';
	x->ch[2] = 'D';
	x->ch[3] = 'E';
	x->ch[4] = 'F';
	x->ch[5] = 'C';
	//x->ch[6] = 'G';
	//x->ch[7] = 'H';
    struct n1* p1 = x;
    struct n2* p2 = (struct n2*) p1;
    
    printf("%s %x\n", p1->ch, p1->n);
	printf("%.30f %x %x %.30f\n", p2->f, p2->n, p2->b, p2->c);

    return 0;
}
