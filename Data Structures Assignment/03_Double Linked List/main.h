//Author:Harsh Patil
//File: main.h
//Title:WAF to insert & delete the data at first & last position. Also to delete the list (DLL)



#ifndef MAIN_H
#define MAIN_H


#include<stdio.h>
#include<stdlib.h>

typedef int data_t;

typedef struct node
{
	data_t data;
	struct node *prev;
	struct node *next;

}Dlist;

enum status
{
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
	DATA_NOT_FOUND
};

int dll_insert_first(Dlist **head, Dlist **tail, data_t data);
int dll_insert_last(Dlist **head, Dlist **tail, data_t data);
int dll_delete_first(Dlist **head, Dlist **tail);
int dll_delete_last(Dlist **head, Dlist **tail);
int dll_delete_list(Dlist **head, Dlist **tail);
void print_Dlist(Dlist *head);

#endif
