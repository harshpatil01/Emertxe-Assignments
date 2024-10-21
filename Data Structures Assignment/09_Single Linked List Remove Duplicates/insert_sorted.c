//Author:Harsh Patil
//File: insert_sort.c
//Title:WAP to remove duplicates in a SLL
//Description: Function to make the inserted data in a sorted manner
//Function Definition for insert_sorted


#include "main.h"

int insert_sorted(slist **head, data_t data)
{
	//Storing head address into temp
	slist *temp;
	temp = *head;
	
	//Creating a new node
	slist *new = malloc(sizeof(slist));
	
	
	//If the node new has not been created successfully
	if (new == NULL)
	{
		return FAILURE;
	}

	//Update the newnode data 
	new->data = data;
	//Update the new node link with NULL
	new->link = NULL;

	//if the head is empty , the list is empty
	if ((*head) == NULL)
	{
		//Assign the new node address to head
		(*head) = new;
		return SUCCESS;
	}

	//Case for the Single Node i.e the First Node
	//If the First Node link section contains NULL only then it is a First Node
	if ((*head)->link == NULL)
	{
		//Comparing the first node data with the data inserted by the user 
		if (((*head)->data) >= data)
		{
			//New link is updated with the head if the data of the first node is greater than the one entered by the user
			//Inserting it before
			new->link = *head;
			//Head adddress is updated with the new node address
			(*head) = new;
			return SUCCESS;
		}
		else
		{
			//If the data entered by the user is greater thean the first node data
			//First Node link section updated with the new node address
			(*head) -> link = new;
			return SUCCESS;
		}
	}
	//Case for multi node
	else	
	{
		//Traversing through the linked list
		while(temp)
		{
			//if linked list  data is greater than or equal to the data entered by the user , then add that node before this node
			if ((temp-> data)>=data)
			{
				//Calling the insert before
				sl_insert_before(head,temp->data,data);
				return SUCCESS;
			}
			//if linked list  data is less than to the data entered by the user , then add that node before this node
			else if ((temp->data)<data)
			{
							//If last node is reached enter the loop	
                    		if ((temp->link) == NULL)
							{
							//Update the last node link with the new node address
							temp -> link = new;
							return SUCCESS;
							}
			}
			//Update the link after adding and sorting the element
			temp = temp -> link;
		}

	}
	return FAILURE;
}