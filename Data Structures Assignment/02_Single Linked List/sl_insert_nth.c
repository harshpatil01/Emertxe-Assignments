//Author:Harsh Patil
//File: sl_insert_nth.c
//Title:WAF to insert data after and before given data, & at nth position. Also to delete given element (SLL)
//Description: Function Definition for insert_nth



#include "main.h"

int sl_insert_nth(slist **head, data_t n)
{
	data_t i;
	data_t n_data;

	//Check for empty list if the head is NULL
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}

	//Creating a new node
	slist *new = malloc(sizeof(slist));

	//Assigning the head value to a temporary pointer variable
	slist *temp = *head;

	//Traverse till the nth value entered by the user
	for (i = 1; i <= n; i++)
	{
		//Temp pointer should not be NULL
		if (temp != NULL)
		{
			//When i reahces the nth node
			if (i == n)
			{
				//Asking the user to enter the new data to be inserted after the nth position
				printf("Enter the n_data: ");
				scanf("%d", &n_data);
				//The new pointer data section is updated to the n_data
				new->data = n_data;
				//To estalish link both sides of the new node 
				//The new pointer link section is updated with the temp pointer link section address
				new->link = temp->link;
				//The temp pointer link section adddress is updated with the new pointer address
				temp->link = new;
				return SUCCESS;
			}
		}
		else
		{
			return FAILURE;
		}
		//Traversing the node step by step
		//Incrementing one by one 
		temp = temp->link;
	}

}
