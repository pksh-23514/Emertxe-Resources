#ifndef SLL_H
#define SLL_H

/* Standard Libraries Inclusion */
#include <stdio.h>
#include <stdlib.h>

/* MACRO definitions */
#define SUCCESS 0
#define FAILURE -1
#define LIST_EMPTY -2

/* Typedefs definition */
typedef int data_t;
typedef struct node
{
	data_t data;
	struct node *link;
} Slist;

/* Function Declarations of all the Operations */
int insert_at_last (Slist **head, data_t data);
int sl_sort (Slist **head);
void swap (int*, int*);
void print_list (Slist *head);

#endif
