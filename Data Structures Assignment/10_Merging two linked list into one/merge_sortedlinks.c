#include "main.h"

slist *merge_sortedlinks(slist *phead, slist *qhead)
{
	//Declaring the result variable to store the result
	slist *result = NULL;
	
	//Declaring a reference pointer 
	//Storing the result address in the reference pointer last
	//Taking a reference pointer to the last result pointer
	slist **last = &result;

	while (1) 
	{
		//if only plist and qlist is empty return empty list
		if ((phead == NULL) && (qhead == NULL))
		{
			return NULL;
		}
		//if only plist is empty, update the list with q list data
		if (phead == NULL) 
		{
			*last = qhead;
			break;
		}
		//if only qlist is empty, update the list with p list data
		else if (qhead == NULL)
		{
			*last = phead;
			break;
		}
		//if p list element is less than q list element, add the first element of a list into the result pointed by last
		if ((phead -> data) <= (qhead -> data))
		{
			movenode(last, &phead);
		}
		else
		{
			//Add the first element of q list into the result pointed by last
			movenode(last, &qhead);
		}
		//Advance the last address to next address
		last = &((*last) -> link); 
		
	}
	return (result);
}
