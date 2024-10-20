//Author:Harsh Patil
//File: print_Dlist.c
//Title:WAF to insert & delete the data at first & last position. Also to delete the list (DLL)
//Description: Function Definition for print_Dlist




#include "main.h"

void print_Dlist(Dlist *head)
{
	if (head == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("The linked list is\n");
		printf("head<->");
		while (head)
		{
			printf("%d<->", head->data);
			head = head->next;
		}
		printf("tail");
	}
}
