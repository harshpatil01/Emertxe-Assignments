#include "main.h"

int push(slist **stack_top, data_t data)
{
	//Creating a new node
	slist *new = malloc(sizeof(slist));

	//Validation
	//Cecking if the new node has been created successfully or not
	if (new == NULL)
	{
		return STACK_EMPTY;
	}
	//Assigning the data value entered by the user  and address of the already present node to the new created node
	new->data = data;
	new->link = *stack_top;
	*stack_top = new;
	return SUCCESS;
}