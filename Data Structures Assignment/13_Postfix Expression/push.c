#include "main.h"

int push(Stack *S, data_t data)
{
	//Checking if the  stack is full or not
	if (S->top == STACKSIZE - 1)
	{
		//Returning stack overflow
		return STACKFULL;
	}
	//Increment the top variable and add element
	(S->top)++;
	//Inserting the data entered by the user in the stack at the position s->top
	S->Sarray[S->top] = data;
	return SUCCESS;
}
