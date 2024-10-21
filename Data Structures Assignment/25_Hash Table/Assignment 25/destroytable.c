#include "main.h"

void destroytable(hashtable hash_table)
{
	//Declaring variables
	int i;
	Link *element;
	Link *nextelement;

	//Deleting element by element in each table row
	for(i = 0; i <  INITIAL_SIZE; i++)
	{
		for(element = hash_table -> table[i]; element != 0; element = nextelement)
		{
			//Updating the element to the next value link
			nextelement = element -> link;
			
			//Free the memory or space of each link step by step
			free(element);
		}
	}
}