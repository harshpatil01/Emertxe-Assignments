//Author:Harsh Patil
//File: delete_first.c
//Title:WAP to remove duplicates in a SLL
//Description: Function to delete the first node present.
//Cases : List empty
//List not empty


#include "main.h"

int delete_first(slist **head)
{
	//Validation 
	if (*head == NULL)
	{
		return FAILURE;
	}
	//Assigning the head value to a temporary pointer variable for backup
	slist *temp =  *head;
	//Storing the second node's link to head to form the new link
	*head = temp->link;
	//Using the free command to free the memory and deleting the first node 
	free(temp);
	return SUCCESS;
}