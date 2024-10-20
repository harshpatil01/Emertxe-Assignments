//Author:Harsh Patil
//File: dll_delete_last.c
//Title:WAF to insert & delete the data at first & last position. Also to delete the list (DLL)


#include "main.h"

int dll_delete_last(Dlist **head, Dlist **tail)
{
	//Check if the list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}

	//Moving tail pointer to the previous node 
	*tail = (*tail)->prev;

	//If the tail node is not NULL, freeing the next node after the tail node
	if (*tail != NULL)
	{
		free ((*tail)->next);
		(*tail)->next = NULL;
	}
	else
	{
		free(*head);
		*head = NULL;
	}
	return SUCCESS;
}