//Author:Harsh Patil
//File: sl_get_nth_last.c
//Title: WAF to find the mid node & to get the nth node from the end of the linked list .
//Description: Function Definition for the nth node from the end of the linked list

#include "main.h"
int sl_get_nth_last(slist *head , data_t n,data_t *ans)
{
	//Declaring two pointers of type slist (temporary nodes)
	//Initializing them with head containing first node's link
	slist *temp1 = head;
	slist *temp2 = head;
	//Initialization of count to 1
	int count=1;
	//While loop till the the n-1 position 
	while(count <= n-1)
	{
		//Moving temp2 by one step each
		temp2 = temp2->link;
		//Incrementing the count by one 
		count=count+1;
	}
	//While loop till the temp2 link is not equal to NULL 
	while(temp2->link!= NULL )
	{
		//Moving temp2 by one step each 
		temp2= temp2->link;
		//Moving temp1 by one step each 
		temp1=temp1->link;
	}
	//Storing the result in the pointer ans
	*ans=temp1->data;
	return SUCCESS;
	
}
