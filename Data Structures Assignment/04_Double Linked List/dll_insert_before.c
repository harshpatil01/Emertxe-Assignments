#include "main.h"

int dll_insert_before(Dlist **head, Dlist **tail, data_t n_data, data_t g_data)
{
	//Check if the list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	
	//Assign the head value to a temp  pointer
	Dlist *temp = *head;
	
	//Traverse the list till NULL
	while (temp)
	{
		//Check if node data is same as g_data
		if (temp->data == g_data)
		{
			//Create a node
			Dlist *new = malloc(sizeof(Dlist));

			//Validation
			if (new == NULL)
			{
				return FAILURE;
			}
			//Store the data value and addresses into the new node
			new->data = n_data;
	        new->prev = temp->prev;
	        new->next = temp;
			//If next node is not NULL, assign the current node address to the previous pointer of the next node
			if (temp->prev)
			{
				temp->prev->next = new;
			}
			else
			{
				//Updating head with the address of the new nodes 
				*head = new;
			}
			//Assigning the address of new node to thenext address section of the temp pointer of the node
			temp->prev = new;
			return SUCCESS;
		}
		//Incrementing temp
		temp = temp->next;
	}
	return DATA_NOT_FOUND;
}
