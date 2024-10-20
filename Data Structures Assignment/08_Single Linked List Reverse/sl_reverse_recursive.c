//Author:Harsh Patil
//File: sl_reverse_recursive
//Title: WAF to reverse the single linked list in both iterative and recursive methods
//Description: Function containing reverse recursive logic



#include "main.h"

slist *sl_reverse_recursive(slist *head)
{
	//If list is empty 
    	if(head == NULL)
	    return FAILURE;
	//Declaration of slist temporary variables
	slist *p;
	slist *q;
	//Initialization of p to first node
	p=head;
	//Initialization of q to the second node
	q=p->link;
	//If q is equal to NULL
	if(q == NULL)
	//Returning back
	    return p;
	//Calling the function inside the function
	q=sl_reverse_recursive(q);
	//Reversing and retracing it to back to p 
	p->link->link=p;
	//To make the final node pointing to NULL each time 
	p->link=NULL;
	//Returning q
	return q;
}

	
