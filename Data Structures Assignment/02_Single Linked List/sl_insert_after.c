//Author:Harsh Patil
//File: sl_insert_after.c
//Title:WAF to insert data after and before given data, & at nth position. Also to delete given element (SLL)
//Description: Function Definition for sl_insert_after 


#include "main.h"

int sl_insert_after(slist **head, data_t n_data, data_t g_data)
{
	//Check for empty list if the head is NULL
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}

	//Assigning the head value to a temp pointer variable
	slist *temp = *head;

	//Traverse the list till g_data is found
	while (temp && temp->data != g_data)
	{
		//Move to the next node one by one
		temp = temp->link;
	}
	//Once the n_data is found use the temp and create a new node 
	if (temp)
	{
		//Create a new node with new
		slist *new = malloc(sizeof(slist));
	
		//Validation if the new node created is NULL 
		if (new == NULL)
		{
			return FAILURE;
		}
		//Entering the given data into new data
		new->data = n_data;
		//Entering the temp->link at which the n_data was found into the new->link
		new->link = temp->link;
		//Esatablishing link between the previous node and the new node containing g_data entered after the n_data
		temp->link = new;
		return SUCCESS;
	}
	return DATA_NOT_FOUND;
}