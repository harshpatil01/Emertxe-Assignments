//Author:Harsh Patil
//File: dll_delete_list.c
//Title:WAF to insert & delete the data at first & last position. Also to delete the list (DLL)

#include "main.h"

int dll_delete_list(Dlist **head, Dlist **tail)
{

	//Check if the list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//Free the previous node pointer till the next pointer of the nodes is not NULL
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
	}
	//Free the tail node and assigning NULL to the head and tail 
	free(*tail);
	*tail = NULL;
	*head = NULL;
	return SUCCESS;
}
