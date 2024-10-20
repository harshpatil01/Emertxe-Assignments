#ifndef MAIN_H
//Defining the macro
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>

//Alias for int type is data_t
typedef int data_t;

//slist is struct node type
typedef struct node
{
	//Defining the data variable 
	data_t data;
	//Defining the self referential pointer that is link
	struct node *link;
}slist;

//Declaring enum as the status
enum status
{
	//Default number is being assigned to the onward variables
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
	DATA_NOT_FOUND
};


//Defining the functions with the type of arguments being passed
int insert_at_last(slist **head, data_t data);
int create_loop(slist **head_ref, int pos);
int detect_loop(slist *head);
int sl_insert_before(slist **head, data_t n_data, data_t g_data);
int sorted_insert(slist **head, data_t newdata);
void print_slist(slist *head );


//Ending the macro 
#endif
