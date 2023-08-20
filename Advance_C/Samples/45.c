/*
Name          :- Priyanshu Ranjan
Date          :- 31th Aug 2022
Description   :- Provide a menu to manipulate or display the value of variable of type t
Sample input  :- 
Sample output :- 
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,n2,c;
	int flag=1;
	int i=0;
	int c1=0;
	int c2=0;
	int s=0;
	int d=0;
	int f=0;
	void *num;
	num=malloc(8);
	while(flag)
	{
		printf("Menu :\n1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\nChoice --->");
		scanf("%d",&n1);
		switch(n1)
		{
			case 1:
				printf("Enter the type you have to insert:\n1. int\n2. char\n3. short\n4. float\n5. double\nChoice --->");
				scanf("%d",&n2);
				switch(n2)
				{
					case 1:
						if(i==0 && f==0 && d==0)
						{
							printf("Enter the int : ");
							scanf("%d",((int *)num)+1);
							i=1;
							f=1;
						}
						else
							printf("memory is full\n");
						printf("\n");
						break;
					case 2:
						if(d==0&&c1==0)
						{
							printf("Enter the char : ");
							getchar();
							scanf("%c",((char *)num));
							c1=1;
						}
						else if (d==0&&c2==0)
						{
							printf("Enter the char : ");
							getchar();
                                                        scanf("%c",((char *)num)+1);
                                                        c2=1;
						}
						else
							printf("memory is full\n");
						printf("\n");
						break ;
					case 3:
						if (s == 0 && d==0)
						{
							printf("Enter the short : ");
							scanf("%hd",((short *)num)+1);
							s=1;
						}
						else
							printf("memory is full\n");
						printf("\n");
						break ;
					case 4:
						if(f ==0 && d==0 && i==0)
                                                {
                                                        printf("Enter the float : ");
                                                        scanf("%f",((float *)num)+1);
                                                        f=1;
							i==1;
                                                }
                                                else
                                                        printf("memory is full\n");
                                                printf("\n");
                                                break ;
					case 5:
						if(d==0 && i==0 && c1==0 && c2 == 0 && f == 0 && s==0)
                                                {
                                                        printf("Enter the double : ");
                                                        scanf("%lf",((double *)num));
                                                        d=1;
                                                }
                                                else
                                                        printf("memory is full\n");
                                                printf("\n");
                                                break ;

				}
				break ;
			case 2:
				if(c1 ==1 && d==0)
					printf("0 -> %c\n",*((char *)num));
				if(c2 ==1 && d==0)
					printf("1 -> %c\n",*(((char *)num)+1));
				if(s ==1 && d==0)
					printf("2 -> %hd\n",*(((short *)num)+1));
				if(i == 1 && d==0 && f ==0)
					printf("3 -> %d\n",*(((int *)num)+1));
				if(f == 1 && d==0 && i ==0)
					printf("4 -> %f\n",*(((float *)num)+1));
				if(d == 1&& i==0 && c1==0 && c2 == 0 && f == 0 && s==0)
					printf("5 -> %lf\n",*((double *)num));
				printf("Enter the index value to be deleted : ");
				scanf("%d",&c);
				switch(c)
				{
					case 0:
						c1=0;
						break ;
					case 1:
						c2=0;
						break ;
					case 2:
						s=0;
						break ;
					case 3:
						i=0;
						f=0;
						break ;
					case 4:
						f=0;
						i=0;
						break ;
					case 5:
						d=0;
						c1=0;
						c2=0;
						i=0;
						f=0;
						s=0;
						break ;
				}
				printf("\n");
				break ;


			case 3:
				printf("------------------------\n");
				if(c1 ==1 && d==0)
                                        printf("0 -> %c (char1)\n",*((char *)num));
                                if(c2 ==1 && d==0)
                                        printf("1 -> %c (char2)\n",*(((char *)num)+1));
                                if(s ==1 && d==0)
                                        printf("2 -> %hd (short)\n",*(((short *)num)+1));
                                if(i == 1 && d==0 && f==0)
                                        printf("3 -> %d (int)\n",*(((int *)num)+1));
                                if(f == 1 && d==0 && i==0)
                                        printf("4 -> %f (float)\n",*(((float *)num)+1));
                                if(d == 1)
                                        printf("5 -> %lf (double)\n",*((double *)num));
				printf("------------------------\n");
				break ;
			case 4:
				flag=0;
				break ;
		}

	}
	free(num);
	return 0;
}
