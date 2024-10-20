//Author:Harsh Patil
//File: insert_at_first.c
//Title:WAF to insert & delete the data at first & last position. Also to find given node & to delete the List 
//Description: Read data from user and insert the given data in first position
//Cases : List empty,List is not empty 



#include "main.h"

//Defining the function 
//The first argument is accessing the address of the head to store a nodes address for linkage and the second argument is the data 
int insert_at_first(slist **head, data_t data)
{
	//Creating a new node which is of type struct node 
	//The new node is named as new
	slist *new = malloc(sizeof(slist));

	//Validation if the new node is empty or not
	if (new == NULL)
	{
		return FAILURE;
	}
	//Inserting the data entered by the user to new 
	new->data = data;
	//Make the newnode point to NULL as the head contains null
	new->link = *head;
	//Make head point to the address of the new node created
	*head = new;
	//Retruning the success
	return SUCCESS;
}