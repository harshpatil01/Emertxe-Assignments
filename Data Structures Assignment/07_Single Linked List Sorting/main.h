
//Author:Harsh Patil
//File: main.h
//Title:WAF to sort the given single linked list.
//Description: Header file containing all the function declarations , typedef , macro and enum .



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
int insert_at_last(slist **head, data_t);
int insert_sort(slist **head);
int insert_sorted(slist **head, data_t data);
int sl_insert_before(slist **head, data_t n_data, data_t g_data);
int sorted_insert(slist **head, data_t data)
void print_slist(slist *head );

//Ending the macro 
#endif
