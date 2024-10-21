#include "main.h"

int push(s_array *s, data_t data)
{
	//Checking if the  stack is full or not
	if (s->top == SIZE - 1)
	{
		//Returning stack overflow
		return STACK_OVERFLOW;
	}
	//Increment the top variable and add element
	(s->top)++;
	//Inserting the data entered by the user in the stack at the position s->top
	s->data[s->top] = data;
	return SUCCESS;
}