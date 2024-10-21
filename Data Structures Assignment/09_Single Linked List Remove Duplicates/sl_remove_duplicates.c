
//Author:Harsh Patil
//File: sl_remove_duplicates.c
//Title: WAP to remove duplicates in a SLL
//Description: Function Definition for sl_remove_duplicates

#include "main.h"

int sl_remove_duplicates(slist **head)
{
	//Declarig temporary pointer variables
	slist *new, *result;
	
	//If the head address is NULL then list is empty
	if ((*head) == NULL)
	{
		return LIST_EMPTY;
	}

	//Calling the insert_sort function by passing head as the argument( 
	insert_sort(head);
	
	//Declaring a temporary pointer variable
	slist *temp;
	//Assigning the link in head to temp pointer variable
	temp = *head;

	//Case 1 : Single Node cannot have duplicates as only one data is present
	if((*head)->link == NULL)
	{
		return SUCCESS;
	}
	else
	{
	//Case 2 : If the linked list contains multiple nodes then traverse till the last node(i.e NULL)
       	while (temp->link)
      	{
		//Comparing the data 
		//The present node data is compared with the next node data
		//If its not equal then enter the loop
		if (temp->data != (temp->link)->data)
		{
		    //If no data of the node is found to be matching till the end of the linked list then return SUCCESS
            if (((temp->link)->link) == NULL)
			{
				return SUCCESS;
			}
			//Traversing temp node step by step
            temp = temp->link;
		}	
		else
		{
			//If its equal then enter the loop
			//Assign the new pointer variable with temp's link where we found the duplicate variable
			new = temp->link;
			//Calling the delete_element function to delete the data which is a duplicate data
			sl_delete_element(head, temp->data);
			//Assign the new node address to temp after deleting the duplicate element
			temp = new;
		}
	}
		return SUCCESS;
	}	
	return FAILURE;		
}

