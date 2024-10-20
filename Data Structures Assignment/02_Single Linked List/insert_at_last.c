//Author:Harsh Patil
//File: insert_at_last.c
//Title: WAF to insert data after and before given data, & at nth position. Also to delete given element 
//Description:Function Definition to insert the element at last 


#include "main.h"

int insert_at_last(slist **head, data_t data)
{
	//Creating a new node 
	slist *new = malloc(sizeof(slist));

	//Validation if the new node reference is null or not 
	if (new == NULL)
	{
		return FAILURE;
	}
	//Inserting the data entered by the user to new 
	new->data = data;
	//Making the pointer new  link to null
	new->link = NULL;

	//if head is NULL, it is an empty list
	if (*head == NULL)
	{
		//If the head node is NULL, store the address of the new into head to form a link between the two
		*head = new;
		return SUCCESS;
	}

	//Creation of a temporary pointer
	slist *temp = *head;

	//Traverse till last node 
	//The last node of a linked list has the reference pointer as NULL
	while (temp->link)
	{
		temp = temp->link;
	}
	//Storing the address of the new node into temp link to create a link between the last node and the new node which is placed at the last 
	temp->link = new;
	return SUCCESS;
}
