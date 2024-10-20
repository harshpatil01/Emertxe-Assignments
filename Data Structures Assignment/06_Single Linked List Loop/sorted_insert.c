#include "main.h"

int sorted_insert(slist **head, data_t newdata)
{
	//Declaring variables
	slist *temp;
	//Storing address of head into temp variable
	temp = *head;
	
	
	//Allocation of the memory to the new node
	slist *new = malloc(sizeof(slist));
	
	
	//Validation 
	if (new == NULL)
	{
		return FAILURE;
	}

	//updating the newnode data and link
	new->data = newdata;
	new->link = NULL;

	//if the head link is empty 
	if ((*head) == NULL)
	{
		//Store the new node address to head
		(*head) = new;
		return SUCCESS;
	}

	//Case 1 : Single  Node
	if ((*head)->link == NULL)
	{
		if ( ((*head)->data) >= newdata )
		{
			new->link = *head;
			(*head) = new;
			return SUCCESS;
		}
		else
		{
			(*head)->link = new;
			return SUCCESS;
		}
	}
	//Case 2 : For Multiple nodes
	else	
	{
		//Traverse through the linked list until the end of the loop
		while(temp)
		{
			//if the data of the linked list  is greater than the given data, then adding the data before this node
			if ( (temp->data) >= newdata )
			{
				sl_insert_before(head,newdata,temp->data);
				return SUCCESS;
			}
			//if the data of the linked list is less than given data that needs to be inserted
			else if ( (temp->data) < newdata )
			{	
							//No new next link has been found
							//Last Node has been reached
                    		if ((temp->link) == NULL)
				{
					//If the last node has been reached, then adding the new node at the end
					temp->link = new;
					return SUCCESS;
				}
			}
			//Moving the node step by step
			temp = temp->link;
		}

	}
	return FAILURE;
}
