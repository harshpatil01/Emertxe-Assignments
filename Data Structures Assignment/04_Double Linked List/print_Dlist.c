

#include "main.h"

void print_Dlist(Dlist *head)
{
	Dlist *temp = head;
	//Traverse till temp is equal to null or not
	while(temp)
	{
		printf("%d<->",temp->data);
		temp = temp->next;
	}
	printf("\n");
} 
