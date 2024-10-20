


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

int dll_delete_element(Dlist **head, Dlist **tail, data_t n_data);
int dll_insert_after(Dlist **head, Dlist **tail, data_t n_data, data_t g_data);
int dll_insert_before(Dlist **head, Dlist **tail, data_t n_data, data_t g_data);
int dll_insert_element(Dlist **head, Dlist **tail, data_t data);
void print_Dlist(Dlist *head);
int dll_delete_first(Dlist **head, Dlist **tail);

#endif
