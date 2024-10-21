#include "main.h"

int print(Stack *s)
{
	//Check for stack FULL or NOT
	if ((s->top) == -1)
	{
		return STACKEMPTY;
	}
	//Assigning the top value to a local variable top 	 
	data_t top = (s->top);
	printf("The elements are:\n");
	//Displaying elements till top is zero
	while(top >= 0)
	{
		printf("%d\n", s->Sarray[top]);
		top--;
	}
	return SUCCESS;
}
