#include "main.h"

int dll_delete_element(Dlist **head, Dlist **tail, data_t n_data)
{
	//Checking if list is empty or not 
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}

	//Check for the first node data
	if ((*head)->data == n_data)
	{
		//Calling the delete_first function to delete the data in the first node
		return dll_delete_first(head, tail);
	}
	
	//Assigning the head value to a temp pointer 
	Dlist *temp = *head;
	
	//Traverse the list till NULL
	while (temp)
	{
		//Checking if the node data is same as the n_data entered by the user 
		if (temp->data == n_data)
		{
			//Establishing link with previous node of the deleted node and the next node 
			temp->prev->next = temp->next;
			//If next pointer value of the current node is not NULL that is the deleted node is not the last node , then assign the previous address of the node to the previous pointer of the next node
			if (temp->next != NULL)
			{
				temp->next->prev = temp->prev;
			}
			//Deallocate the memory 
			free(temp);
			return SUCCESS;
		}
		//Incrementing temp by one step 
		temp = temp->next;
	}
	return DATA_NOT_FOUND;
}
