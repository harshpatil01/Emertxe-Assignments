#include "main.h"

int pop(s_array *s, data_t *data)
{
	//Checking if the  stack is full or not
	if (s->top == -1)
	{
		//Returning stack overflow
		return STACK_EMPTY;
	}
	//Fetching the value from the stack and storing it in the address pointed by data
	*data = s->data[s->top];
	//Decrement the top
	(s->top)--;
	//Return SUCCESS
	return SUCCESS;
}