#include "main.h"

int peek(Stack S)
{
	//If top is -1
	//if no elements are present in the stack, return that stack is empty
	if ( S.top == -1 )
	{
		return STACKEMPTY;
	}
	
	//else returning the top most element present at the top of the stack
	return S.Sarray[S.top];

}
