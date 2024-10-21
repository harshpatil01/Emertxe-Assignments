//Author:Harsh Patil
//File: insert_sort.c
//Title:WAP to remove duplicates in a SLL
//Description: Function to make list in a sorted manner 
//Function Definition for insert_sort 


#include "main.h"

int insert_sort(slist **head)
{
	//Declaring node variables
	slist *temp; 
	slist *result = NULL;
	//Storing the first node address into temp 
	temp = *head;

//If head is empty then its an empty list
	if ((temp) == NULL)
	{
		return LIST_EMPTY ;
	}
	else
	{
		//If list is not empty 
		//Traversing the linked list till the temp is not equal to NULL i.e till the end of the linked list
		while (temp) 
		{	
			//Inserting the data which is entered by the user and calling the insert_sorted function to sort the inserted data
			insert_sorted(&result, temp->data);
			//Moving each node one by one 
			temp = temp -> link;
			
		}
		
		//Replacement of head with the result address 
		*head = result;

		return SUCCESS;
	}
	
	return FAILURE;
}