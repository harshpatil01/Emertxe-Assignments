#include "main.h"


int create_loop(slist **head_ref, int pos)
{
    //temp variable pointing to the head reference 
    slist *temp = *head_ref;
    //Declaring count variable
    int count = 1;
    //Traversing the count till it reaches the position
    while (count < pos) 
	{
	//Moving forward the link
        temp = temp->link;
	//Incrementing the count
        count++;
    }
 
    //Storing the temp into a slist variable
   slist *ref = temp;
 
    //Traversing till the temp link is not equal to NULL
    while (temp->link != NULL)
	{
	//Move forward the node step by step
        temp = temp->link;
	}
//Establishing the link between the last node to the element at that position
    	temp->link = ref;
	return SUCCESS;
}
