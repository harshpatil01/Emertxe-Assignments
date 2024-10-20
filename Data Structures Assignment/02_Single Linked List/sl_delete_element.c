//Author:Harsh Patil
//File: sl_delete_element.c
//Title:WAF to insert data after and before given data, & at nth position. Also to delete given element (SLL)
//Description: Function Definition for delete_element


#include "main.h"

int sl_delete_element(slist **head, data_t g_data)
{
	//Check for empty list if the head is NULL
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}

	//Check for first node if the g_data entered by the user is present there
	if ((*head)->data == g_data)
	{
		return delete_first(head);
	}
	
	//Assigning the head value to a temporary pointer variable known as temp 
	slist *temp = *head;
	//Assigning NULL to another temporary poiner variable known as prev
	slist *prev = NULL;

	//Traversing till g_data is reached till the end of the linked list 
	//Temp is initialized to the first node address
	while (temp)
	{
		//If the data matches with the g_data
		if (temp->data == g_data)
		{
			//Breaking the link
			//Updating the prev link section address to the temp link section address when the data is found and enters the loop
			prev->link = temp->link;
			//Freeing the memory of the temp pointer which contains the g_data 
			free(temp);
			return SUCCESS;
		}
		//Assigning temp to prev
		prev = temp;
		//Assigning temp with temp link section address
		temp = temp->link;
	}
	return DATA_NOT_FOUND;
}
