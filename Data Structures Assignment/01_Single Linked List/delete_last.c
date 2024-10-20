//Author:Harsh Patil
//File: delete_last.c
//Title:WAF to insert & delete the data at first & last position. Also to find given node & to delete the List 
//Description:Functtion to delete the first node present.
//Cases : List empty
//List not empty



#include "main.h"

int delete_last(slist **head)
{
	//Validation
	if (*head == NULL)
	{
		return FAILURE;
	}
	//Assigning the head value to a temporary pointer variable
	slist *temp = *head;

	//Check for first node
	if (temp->link == NULL)
	{
		free(*head);
		*head = NULL;
		return SUCCESS;
	}
	
	//Traverse till the last node 
	//Below loop checks for NULL in the immediate next node from the current node
	//After reaching the NULL node it exits the loop and this means its the last node 
	//The memory of that node will be freed 
	while (temp->link->link)
	{
		temp = temp->link;
	}
	temp->link = NULL;
	free(temp->link);
	return SUCCESS;
	
}