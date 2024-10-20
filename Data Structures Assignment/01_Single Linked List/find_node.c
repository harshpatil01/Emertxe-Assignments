//Author:Harsh Patil
//File: find_node.c
//Title:WAF to insert & delete the data at first & last position. Also to find given node & to delete the List 
//Description: Function to find the node's data entered by the user 



#include "main.h"

int find_node(slist **head, data_t n_data)
{
	//Check for list is empty or not 
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	
	//Checking if head has that entry of the data 
	if ((*head)->data == n_data)
	{
		return SUCCESS;
	}
	//Assigning head value to a temporary variable
	slist *temp = *head;
	
	//Traversing through the list till n_data is found
	while(temp != NULL)
	{
		//Iterate the linked list using a loop
	    //Checking for the key entered by the user matches with the entries of the linked list 
		if (temp->data == n_data)
		{
			return SUCCESS;
		}
		temp = temp->link;
	}
}