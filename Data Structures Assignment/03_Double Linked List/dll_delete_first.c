//Author:Harsh Patil
//File: dll_delete_first.c
//Title:WAF to insert & delete the data at first & last position. Also to delete the list (DLL)



#include "main.h"

int dll_delete_first(Dlist **head, Dlist **tail)
{
	//Checking if the list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}

	//Head pointer  pointing to next node
	*head = (*head)->next;

	//If the value of the next node is not NULL, free the previous node
	if (*head != NULL)
	{
		free ((*head)->prev);
		(*head)->prev = NULL;
	}
	else
	{
		//If the value of the next node is NULL, free the node
		free(*tail);
		*tail = NULL;
	}
	return SUCCESS;
}