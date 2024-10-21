#include "main.h"

int peek(slist **stack_top, data_t *data)
{
	//Checking if the  stack is FULL or NOT
	if (*stack_top == NULL)
	{
		return STACK_EMPTY;
	}
	//Fetching the topmost data from the list and storing it in the variable data 
	*data = (*stack_top)->data;
	return SUCCESS;
}