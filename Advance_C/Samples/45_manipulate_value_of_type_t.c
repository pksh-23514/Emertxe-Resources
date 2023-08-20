/*
Name          : PRABAKARAN K

Date          : 31/08/2022

Description   : A45 - Provide a menu to manipulate or display the value of variable of type t 
Sample Input  : 1) Menu :
                   1. Add element
                   2. Remove element
                   3. Display element
                   4. Exit from the program

                   Choice ---> 1
                   Enter the type you have to insert:
                   1. int
                   2. char
                   3. float
                   4. double
                   Choice ---> 2
                   Enter the char : k
                   1. Add element
                   2. Remove element
                   3. Display element
                   4. Exit from the program
                   Choice ---> 3
                   -------------------------
                   0 -> k
                   -------------------------
                   1. Add element
                   2. Remove element
                   3. Display element
                   4. Exit from the program
                   Choice ---> 1
                   Enter the type you have to insert:
                   1. int
                   2. char
                   3. float
                   4. double
                   Choice ---> 1
                   Enter the int : 10
                   1. Add element
                   2. Remove element
                   3. Display element
                   4. Exit from the progrm
                   Choice ---> 3
                   ------------------------
                   0 -> k (char)
                   1 -> 10 (int)
                   ------------------------
                   1. Add element
                   2. Remove element
                   3. Display element
                   4. Exit from the program

                   Choice ---> 2
                   0 -> k
                   1 -> 10
                   Enter the index value to be deleted : 0
                   index 0 successfully deleted.
                   1. Add element
                   2. Remove element
                   3. Display element
                   4. Exit from the program
                   Choice ---> 4

Sample Output : 1)

 */

#include<stdio.h>
#include<stdlib.h>

void add_element(void *, int);
void display_fun(void *);
void remove_fun();                       // Functiom prototype 

static int flag_int, flag_ch1, flag_ch2, flag_sh, flag_float, flag_double, count[] = {0, 1, 2, 3, 4, 5, 6, 7};    // Initializing the variable

int main()
{
    int choice;
    void *data = malloc(8);

    while(1)
    {
        printf("Menu :\n1. Add element\n2. Remove element\n3. Display element\n4. Exit for the program\n\nChoice ---> ");  // Display the Menu for users to choose
	    scanf("%d", &choice);                   // Read the input to choose the Menu

	switch (choice)
	{
	    case 1:
            {
                printf("Enter the type you have to insert: \n1. int\n2. char\n3. short\n4. float\n5. double\nchoice ---> ");
		        scanf("%d", &choice);           // Read the type to insert
		
                add_element(data, choice);      // Calling function to add elements
                break;
            }
        
        case 2:
            {
                display_fun(data);
		        remove_fun();
		        break;
            }
		
	    case 3:
            {
                display_fun(data);
		        break;
            }

	    case 4:
            {
                exit(0);
		        break;
            }
	}
    }
}

void add_element(void * data, int choice)     // Function definition
{
    switch (choice)
    {
        case 1:
            {
                if (flag_int == 0 && flag_float == 0 && flag_double == 0)   //check the condition if flag of int, float and souble is Zero
	            {
                    flag_int = 1, flag_float = 0, flag_double = 0;
		    
                    printf("Enter the int : ");
		            scanf("\n%d", ((int *)data + 4));                       // Read the integer type data of 4 bytes
	            }
	            else                                                        
	            {
                    printf("int index not available.\n");        
	            }
	            break;
            }
        
        case 2:
            {
                if (flag_ch1 == 0 && flag_double == 0)
	            {
                    flag_ch1 = 1; flag_double = 0;
		
                    printf("Enter the char : ");
		            scanf("\n%c", ((char *)data + 0));               // Read the char type data of 1 byte
		
                    fflush(stdout);
	            }
                else if (flag_ch2 == 0 && flag_double == 0)
                {
                    flag_ch2 = 1; flag_double == 0;

                    printf("Enter the char : ");
                    scanf("\n%c", ((char *)data + 1));

                    fflush(stdout);
                }
	            else                                                 // If the above condition gets false, printng 'char index not available'
	            {
		            printf("char index not available\n");
	            }
	            break;
            }

	    case 3:
            {
                if (flag_sh == 0 && flag_double == 0 && flag_double == 0)
	            {
		            flag_sh = 1, flag_double = 0;
	            	
                    printf("Enter the short int : ");               // Read the short type data of 2 bytes
		            scanf("%hd", ((short *)data + 2));
	            }
	            else
	            {
		            printf("short int index not available\n");
	            }
	            break;
            }

	    case 4:
            {
                if (flag_float == 0 && flag_int == 0 && flag_double == 0)
	            {
		            flag_float = 1, flag_int = 0, flag_double = 0;
		            
                    printf("Enter the float : ");
                    scanf("%f", ((float *)data + 4));               // Read the float data of 4 bytes
	            }
	            else
	            {
		            printf("float index not available.\n");
	            }
	            break;
            }
        
        case 5:
	        {
                if (flag_int == 0 && flag_float == 0 && flag_sh == 0 && flag_ch1 == 0 && flag_ch2 == 0)
	            {
                    flag_double = 1, flag_int = 0, flag_float = 0, flag_sh = 0, flag_ch1 = 0, flag_ch2 = 0;
		
                    printf("Enter the double : ");
                    scanf("\n%le", (double *)data);                 // Read the double data if all the flag data type is zero
	            }
	            else
	            {
                    printf("double index not available\n");
	            }
	            break;
            }
    }
}


void display_fun(void *data)                                       // Function definition to display the data type (Called function)
{
    int k;
    for ( k = 0; k < 25; k++ )
    {
        printf("-");                                               // To print the line space in between
    }
    printf("\n");


    if (flag_ch1 == 1)
    {
        printf("0 -> %c (char)\n", *((char *)data + 0));
    }
    
    if (flag_ch2 == 1)
    {
        printf("1 -> %c (char)\n", *((char *)data + 1));
    }
    
    if (flag_sh == 1)
    {
        printf("2 -> %d (short int)\n", *((short *)data + 2));
    }
    
    if (flag_int == 1)
    {
        printf("3 -> %d (int)\n", *((int *)data + 4));
    }
    
    if (flag_float == 1)
    {
        printf("4 -> %f (float)\n", *((float *)data + 4));
    }
    
    if (flag_double == 1)
    {
        printf("5 -> %g (double)\n", *(double *)data);
    }
    
    for ( k = 0; k < 25; k++ )
    {
        printf("-");
    }
    printf("\n");
    
}


void remove_fun()
{
    int index;
    
    printf("Enter the index value to be deleted : ");
    scanf("%d", &index);

    switch(index)                                                 // To remove the entered value of the datatype setting 'flag =  0'
    {
        case 0:
            {
                flag_ch1 = 0;
	            break;
            }
	    
        case 1:
            {
                flag_ch2 = 0;
	            break;
            }
	
        case 2:
            {
                flag_sh = 0;
	            break;
            }
	    
        case 3:
            {
                flag_int = 0;
	            break;
            }
	
        case 4:
            {
                flag_float = 0;
	            break;
            }

	    case 5:
            {
                flag_double = 0;
	            break;
            }
    }

    printf("index %d succesfully deleted.\n", index);
}

