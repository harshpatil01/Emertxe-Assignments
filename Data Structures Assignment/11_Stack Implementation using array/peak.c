#include "main.h"

int peek(s_array *s, data_t *data)
{
	//Check for stack FULL or NOT
	if (s->top == -1)
	{
		return STACK_EMPTY;
	}
	//Fetching the data if its the topmost element
	*data = s->data[s->top];
	return SUCCESS;
}