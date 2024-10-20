
#include "main.h"

int insert_sort(slist **head)
{
	//Declaring the variables
	int temp;
	slist *ptr,*cptr;
	//Storing the head address value in the pointer ptr
	ptr=*head;
	//Traversing till the ptr link is NULL
	while( ptr->link != NULL )
	{
		//Storing the link of ptr into the cptr
		cptr=ptr->link;
		//Traversing till the cptr link is NULL
		while( cptr != NULL )
		{
			//Comparing the ptr data with cptr data
			if(ptr->data > cptr->data)
			{
				//Swapping Logic
				temp=ptr->data;
				ptr->data=cptr->data;
				cptr->data=temp;
			}
			//Move node step by step
			cptr=cptr->link;
		}
		//Move node step by step
		ptr=ptr->link;
	}
	return SUCCESS;
}
