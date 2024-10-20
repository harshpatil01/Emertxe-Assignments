
//Author:Harsh Patil
//File: main.h
//Title:WAF to reverse the single linked list in both iterative and recursive methods
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
int sl_reverse_iterative(slist **head);
slist *sl_reverse_recursive(slist *head);
void print_slist(slist *head );

//Ending the macro 
#endif
