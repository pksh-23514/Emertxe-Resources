/*
Name         : Prabhat Kiran
Date         : 01st October 2022
Description  : Single Linked List operations Implementation.
Implement the functions given below :-
1. sl_sort(head)
*/

#include "sll.h"

int main()
{
	int option, data, key;
	Slist *head = NULL; 		//Initialize the 'head' to NULL.
	
	printf("1. Insert at last\n2. Sort list\n3. Print list\n4. Exit\nEnter your choice : ");
	
	while (1)
	{
		scanf("%d", &option);	//Ask the user for the choice of Operation.
		
		switch (option)
		{
			case 1:		/* To insert the element at last node */
				{
					printf("Enter the number that you want to insert at last: ");
					scanf("%d", &data);						//Input the Data to be inserted at the last node of LL.
					
					if (insert_at_last (&head, data) == FAILURE)			//Pass by Reference in function call.
					{
						printf("INFO : Insert last failed\n");
					}
				}
				break;
			case 2:		/* To sort the LL */
				{
					if (sl_sort (&head) == LIST_EMPTY)				//Pass by Reference in function call.
					{
						printf("INFO : List is empty\n");
					}
					else
					{
						printf("INFO : Sorting successfull\n");
					}
				}
				break;
			case 3:		/* To print the complete list */
				{
					print_list (head);			//Pass by Value in function call.
				}
				break;
			case 4:		/* To exit the Operation */
				{
					return SUCCESS;
				}
				break;
			default: printf("Enter proper choice !!\n");		//Default case.
		}
	}
	
	return SUCCESS;
}
