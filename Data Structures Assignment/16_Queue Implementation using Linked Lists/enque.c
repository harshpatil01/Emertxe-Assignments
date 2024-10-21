#include "main.h"

int enque(slist **front, slist **rear, data_t data)
{
	//Create a new node
	slist *new = malloc(sizeof(slist));

	//Validation if the new node has been created or not 
	if (new == NULL)
	{
		return QUEUE_FULL;
	}

	//Checking if the list is empty or not
	//Case 1 : Operation to be performed if there is no node
	if (*front == NULL)
	{
		//Inserting the new data entered by the user in the new created node
		new->data = data;
		//Assigning the address of the newly created node to itself
		new->link = new;
		//Assigning the new node address to front
		*front = new;
		//Assigning the new node address to rear
		*rear = new;
		return SUCCESS;
	}

	else
		//Case 2 : Operation to be performed if there is multiple nodes
	{
		//Declaring a temp variable of slist
		//Taking rear as the reference for temp
		slist *temp = *rear;
		//Inserting the data entered by the user into the new node
		new->data = data;		
		//Assigning the previous link address to the new node link pointer thereby creating a loop
		new->link = temp->link;		
		//Updating the front node with the new node address
		temp->link = new;	
		//Assigning the rear to the new node address
		*rear = new;		
		return SUCCESS;
	}
}