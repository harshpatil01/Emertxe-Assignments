//Author:Harsh Patil
//File: delete_list.c
//Title:WAF to insert & delete the data at first & last position. Also to find given node & to delete the List 
//Description: Function to delete the list .
//Cases : List empty
//List not empty


#include "main.h"

int delete_list(slist **head)
{
	//Validation
	
	if (*head == NULL)
	{
		return FAILURE;
	}
	//Declaration of a temp variable 
	slist *temp;
	//Traversing through all the nodes and freeing the memory
	while ((*head) != NULL)
	{
		//Assigning the head value to a temporary pointer
		temp = *head;
		//Traversing each link one by one 
		*head = temp->link;
		//Freeing the memory one by one in temp
		free(temp);
	}
	return SUCCESS;
}