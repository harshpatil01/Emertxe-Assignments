//Author:Harsh Patil
//File: sl_reverse_iterative.c
//Title: WAF to reverse the single linked list in both iterative and recursive methods
//Description: Function containing reverse iterative logic



#include "main.h"

int sl_reverse_iterative(slist **head)
{
	//Declaring temporary variables
	slist *current;
	slist *prev;
	slist *next;
	//If list is empty 
	if (*head == NULL)
		return FAILURE;
	//Storing the first node in current variable
	current=*head;
	//As head's previous is NULL so setting it to NULL
	prev=NULL;
	//Traversing till the end of node
	while(current != NULL)
	{
		//Storing the current node link section i.e. node's address so that it does not get lost
		next=current->link;
		//Storing the curreent node address (link) with the previous so that it reverses itself
		current->link=prev;
		//Previous address has become the current one now 
		//Previous address is becoming current
		prev=current;
		//Current address has become the next 
		current=next;
	}
	//After exiting the loop head is initialized as the last node's address
	*head=prev;
	return SUCCESS;
}


