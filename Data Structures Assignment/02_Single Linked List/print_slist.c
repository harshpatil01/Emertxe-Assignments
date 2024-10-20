//Author:Harsh Patil
//File: print_slist.c
//Title:WAF to insert data after and before given data, & at nth position. Also to delete given element (SLL)
//Description: Function Definition for print_slist




#include "main.h"

void print_slist(slist *head)
{
	if (head == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("The linked list is\n");
		while (head)
		{
			printf("%d-->", head->data);
			head = head->link;
		}
		printf("\n");
	}
}