
#include "main.h"

int detect_loop(slist *head)
{
    //Declaring slist variables
    slist *temp1,*temp2;
    //Initialize temp1 with head value
    temp1 = head;
    //Initialize temp2 with head value
    temp2 = head;
    //Traversing till the end of linked list if its not a loop
 //Traversing till temp1 and temp2 is equal to NULL and temp2 link is NULL 
    while(temp1 != NULL && temp2 != NULL && temp2->link != NULL)
    {
       //Moving the temp1 by one step
       temp1 = temp1->link;
       //Moving the temp2 by two steps
       temp2 = temp2->link->link;
       //If the address of temp1 equals to the address of temp2
       if (temp1 == temp2)
       {
	  //Return SUCCESS
          return SUCCESS;
       }
    }
}
