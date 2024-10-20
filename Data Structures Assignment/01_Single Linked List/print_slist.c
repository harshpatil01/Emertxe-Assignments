//Author:Harsh Patil
//File: print_slist.c
//Title:WAF to insert & delete the data at first & last position. Also to find given node & to delete the List 
//Description:Function to print the entire list after all the operations.



#include "main.h"

void print_slist(slist *head)
{
	//Check for the first node if it contains any link or not 
	if (head == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("Elements are\n");
		//Traverse the list printing the values 
		while (head)
		{
			printf("%d-->", head->data);
			head = head->link;
		}
		printf("\n");
	}
}