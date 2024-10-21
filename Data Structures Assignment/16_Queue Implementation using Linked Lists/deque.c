#include "main.h"

int deque(slist **front, slist **rear, data_t *data)
{
	//Checking if queue empty or not
	if (*front == NULL)
	{
		return QUEUE_EMPTY;
	}
	
	//Case 1 : Operation to be performed if there is only one node
	if (((*front)->link) == *front)
	{
		//Fetching the data and storing it in the variable data
		*data = (*front)->data; 
		//Freeing the memory 
		free(*front);
		//Initializing the front and rear to NULL
		*front = NULL;
		*rear = NULL;
		return SUCCESS;
	}
		//Case 2 : Operation to be performed if there is multiple nodes
	else
	{
		//Creation of a temporary variable temp
		//Assigning the front as a reference to temp
		slist *temp = *front;
		//Fetch the data at temp and storing it in data
		*data = temp->data;
		//Since the front would be pointing to the last node value, updating the link address to the next node from temp node 
		*front = temp->link;	
		 //Freeing the memory 
		free(temp);
		//Establishing the connection with first node and the second node
		(*rear)->link = *front;
	}
	return SUCCESS;
}
