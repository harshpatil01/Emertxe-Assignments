//Author:Harsh Patil
//File: sl_get_nth_last.c
//Title: WAF to find the mid node & to get the nth node from the end of the linked list .
//Description: Function Definition for giving the middle node of the linked list

#include "main.h"
int sl_find_mid(slist *head, data_t *ans)
{
	//If the head is null then list is empty hence return FAILURE
	if(head == NULL)
	{
		return FAILURE;
	}
	//Declaring two pointers of type slist (temporary nodes)
	//Initializing them with head containing first node's link
	slist *temp1 = head;
	slist *temp2 = head;
	//temp2 is present and temp2->link is forward by one step
	while(temp2 && temp2->link!= NULL )
	{
		//Moving temp1 by one step
		temp1 = temp1->link ;
		//Moving temp2 by two steps
		temp2 = temp2->link->link;
	}
	//Storing the result in the pointer ans
	*ans=temp1->data;
	return SUCCESS;
	
}
