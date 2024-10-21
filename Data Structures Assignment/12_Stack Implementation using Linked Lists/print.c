#include "main.h"

int print(slist *stack_top)
{
	//Checking if the stack is FULL or NOT
	if (stack_top == NULL)
	{
		return STACK_EMPTY;
	}
	else
	{
		//Traversing the list till the end of the list and  printing the values 
		while (stack_top)
		{
			printf("%d->", stack_top->data);
			stack_top = stack_top->link;
		}
		printf("\n");
		return SUCCESS;
	}
}
