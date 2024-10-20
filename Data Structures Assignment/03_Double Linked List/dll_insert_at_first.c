//Author:Harsh Patil
//File: dll_insert_first.c
//Title:WAF to insert & delete the data at first & last position. Also to delete the list (DLL)

#include "main.h"

int dll_insert_first(Dlist **head, Dlist **tail, data_t data)
{
	//Create a new node
	Dlist *new = malloc(sizeof(Dlist));

	//Validation if the pointer has been created successfully or not
	if (new == NULL)
	{
		return FAILURE;
	}
	
	//Assigning the data value and addresses to the new node
	new->data = data;
	new->prev = NULL;
	new->next = *head;
	
	//If first node is equal to NULL , then tail value is also set to the address of the new node
	if (*head == NULL)
	{
		//tail is pointing to the new node address 
		*tail = new;
	}

	//If it is not the first node, assigning the current node address to the previous pointer of the next node
	if (new->next != NULL)
	{
		//Updating the cuurent node next address field with the new node being entered at first
		new->next->prev = new;
	}
	//Assigning the address of the created node to the head pointer 
	*head = new;
	return SUCCESS;
}