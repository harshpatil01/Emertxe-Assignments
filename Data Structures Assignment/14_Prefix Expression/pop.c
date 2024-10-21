#include "main.h"

int pop(Stack *S, data_t *data)
{
	//Checking if the  stack is full or not
	if (S->top == -1)
	{
		//Returning stack overflow
		return STACKEMPTY;
	}
	//Fetching the value from the stack and storing it in the address pointed by data
	*data = S->Sarray[S->top];
	//Decrement the top
	(S->top)--;
	//Return SUCCESS
	return SUCCESS;
}
