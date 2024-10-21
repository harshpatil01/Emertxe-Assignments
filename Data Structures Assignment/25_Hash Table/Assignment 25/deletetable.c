#include "main.h"

void deletetable(hashtable hash_table, char *value)
{
	
	int key;
	
	//Fetching the key value for the given value
	key = hash_function(value);	
		
	//Taking the local reference to traverse through the list
	Link *temp1;
	temp1 = hash_table -> table[key];

	
	//If no elements are not present in the hash table then return NO ELEMENT
	if(hash_table -> table[key] == NULL)
	{
		return;
	}
	//If the list has multiple node then traversing till the last node till it points to NULL
	else
	{
		if (temp1->link == NULL)
		{
			//If the value matches the value entered by the user then free that memory and updating the link
			if(strcmp(temp1->value, value) == 0)
			{
				free(temp1);
				hash_table->table[key] = NULL;
				return;
			}			
		}
		else
		{
			//Calling the delete_element function
			delete_element(&hash_table->table[key],value);
			
		}
		return;
	}
	
}
