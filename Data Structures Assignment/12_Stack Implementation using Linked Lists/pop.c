#include "main.h"

int pop(slist **stack_top, data_t *data)
{
	//Validation
	//If no element is present in the stack return the stack is empty
	if (*stack_top == NULL)
	{
		return STACK_EMPTY;
	}
	//Assigning the head value or the top value of the stack to a temporary pointer variable
	slist *temp =  *stack_top;
	//Assigning the data value entered by the user to pop to data variable data 
	*data = temp->data;
	//Incrementing the node and assigning the node address to head or stack_top
	*stack_top = temp->link;
	//Free the previous node memory
	free(temp);
	//Return the SUCCESS 
	return SUCCESS;
}