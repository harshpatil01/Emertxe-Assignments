#include "main.h"

int insert(hashtable hash_table, int key, char *value)
{
	
	//Creating a New Node 
	Link *new = malloc(sizeof(Link));

	//Checking if the new node has been created or not
	if (new == NULL)
	{
		return FAILURE;
	}

	//Updating the key value and the link of the new node created
	new -> key = key;
	strcpy(new -> value, value);
	new -> link = NULL;
	
	//Taking a local reference
	Link *temp = hash_table -> table[key];
	
	//If the hash table has no elements has been added now add the new node
	if(hash_table -> table[key] == NULL)
	{
		hash_table -> table[key] = new;
		return SUCCESS;
	}
	//If the hash table has more than one element
	else
	{
		//Traversing till the last node
		while(temp -> link)
		{
			temp = temp -> link;
		}
		//Updating the last node with new node
		temp -> link = new;
 		return SUCCESS;	
	}
	return FAILURE;
}
