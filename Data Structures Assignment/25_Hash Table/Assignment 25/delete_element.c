#include "main.h"

int delete_element(Link **head, char *value)
{
	//Declaring the variables
	Link *temp1, *temp2;
	//Taking head as the reference
	temp1= *head;

	

		//If the element is in the head free the memory i.e there is only one node
		if( strcmp(temp1 -> value, value) == 0 )
		{
			temp2 = (*head);
			(*head) = (*head) -> link;
			
			temp2 -> link = NULL;
			free(temp2);
		}
		//If there are multiple nodes
		else
		{
            	//If the list has multiple nodes then, iterate till the node points to NULL
           		 while (temp1 -> link)
            		 {
                		//Checking if the next node matches the given element entered by the user
               			 if (strcmp((temp1 -> link) -> value, value) != 0 )
                		 {
								//If no element is found at all then return NOELEMENT
                    			if (((temp1->link)-> link ) == NULL)
								{
								return NOELEMENT;
								}
                    			temp1 = temp1 -> link;
                		}
                		else
                		{
                    			//If the element is present then break 
                    			break;
                		}
                
            		}
	
			//Taking a local reference to the element node
			temp2 = temp1 -> link;

			//Updating that node's link and freeing the next node that contains element
			(temp1->link)=temp2->link;
			free(temp2);
		}
	return SUCCESS;
}