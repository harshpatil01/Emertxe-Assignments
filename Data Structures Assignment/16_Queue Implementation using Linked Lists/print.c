#include "main.h"

int print(slist *front)
{
	//Checking if the list is empty or not
	if (front == NULL)
	{
		return QUEUE_EMPTY;
	}
	else
	{
		//Assigning the link address of the front pointer to temp pointer so that printing starts from first node
		slist *temp = front;
		//Traversing till the end of the linked list and printing the values 
		while (temp->link != front)
		{
			printf("%d->", temp->data);
			temp = temp->link;
		}
	     printf("%d->", temp->data);
             printf("\n");
			
	}
	return SUCCESS;
}
