//Author:Harsh Patil
//File: sl_insert_before.c
//Title:WAP to remove duplicates in a SLL
//Description: Function Definition for sl_insert_before


#include "main.h"

int sl_insert_before(slist **head, data_t n_data, data_t g_data)
{
	//Check for empty list if the head is NULL
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}

	//Creating a new node
	slist *new = malloc(sizeof(slist));
	
	//Assign head value to a temporary pointer variable(head is containing the address of the first node)
	slist *temp = *head;

	//Check the first node if it matches the given data of the node(traverse the entire linked list until it finds the g_data)
	if (temp->data == g_data)
	{
		//Storing the new data i.e to be entered by the user in the data column of the new pointer
		new->data = n_data;
		//Storing the new link with head link (initially it is the first node's address)
		new->link = *head;
		//The new head address will be the new node address and the ehad will point to it now
		*head = new;
		return SUCCESS;
	}

	//Assigning the temp variable value to another variable named prev 
	slist *prev = temp;

	//Traverse till the g_data node is reached
	while (temp)
	{
		if (temp->data == g_data)
		{
			//Storing the new data i.e to be entered by the user in the new data section of the pointer new
			new->data = n_data;
			//To estalish link both sides of the new node 
			//Storing the new link section with prev link section address in order to establish the connection
			new->link = prev->link;
			//Storing the prev link section with new node address so that it points to the new node
			prev->link = new;
			return SUCCESS;
		}
		//Traversing the node step by step
		prev = temp;
		temp = temp->link;
	}
	return DATA_NOT_FOUND;
}
