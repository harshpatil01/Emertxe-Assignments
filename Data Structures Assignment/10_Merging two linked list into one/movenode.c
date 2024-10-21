#include "main.h"

// removes the front node from the second list and pushes it onto the front of the first. 
void movenode(slist **dest, slist **source) 
{
	//Declaring slist variable new 
	//Make the new variable is made a reference to the source
	slist *new = *source;
	//If the new pointer is not equal to NULL
	if (new != NULL)
	{	
		//Advance the source pointer
		*source = new->link; 
		//Linking the old destination to that of the new node
		new->link = *dest;
		//Move the dest to point to the new node
		*dest = new; 
	}	
}
