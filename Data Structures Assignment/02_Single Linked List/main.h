//Author:Harsh Patil
//File: main.h
//Title:WAF to insert data after and before given data, & at nth position. Also to delete given element (SLL)
//Description: File containing all the function declarations,enum and macros





#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>

typedef int data_t;

typedef struct node
{
	data_t data;
	struct node *link;
}slist;

enum status
{
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
	DATA_NOT_FOUND
};

int insert_at_last(slist **head, data_t data);
int sl_insert_after(slist **head, data_t n_data, data_t g_data);
int sl_insert_before(slist **head, data_t n_data, data_t g_data);
int sl_insert_nth(slist **head, data_t n);
int sl_delete_element(slist **head, data_t n_data);
int delete_first(slist **head);
void print_slist(slist *head);


#endif
