#include "main.h"

int search(hashtable hash_table, char *value)
{
	
	int key;
	
	//Fetching the key value for the given value
	key = hash_function(value);	
		
	//Taking the local reference to traverse through the list
	Link *temp;
	temp = hash_table->table[key];

	
	//If no elements are not present in the hash table then return NO ELEMENT
	if(hash_table->table[key] == NULL)
	{
		return NOELEMENT;
	}
	else
	{
			//If the list has multiple node then traversing till the last node till it points to NULL
         	while (temp)
         	{
			//If the value matches the value entered by the user then return SUCCESS
			if(strcmp(temp->value, value) == 0)
			{
				return SUCCESS;
			}
			temp = temp->link;
		}
		return FAILURE;
	}
	
}