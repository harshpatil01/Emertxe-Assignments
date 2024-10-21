#include "main.h"

int print_hashtable(hashtable hash_table)
{
	int i;	
	
	//Taking a  local reference to Link
	Link *element;
	
	//Iterating through each link in each table row
	for(i = 0; i < INITIAL_SIZE; i++)
	{
		for(element = hash_table->table[i]; element != NULL; element = element->link)
		{
			//Print the values
			printf("%s ", element->value);
					
		}
		printf("; ");	
	}
	printf("\n");	
}