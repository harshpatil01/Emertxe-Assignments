#include "main.h"

hashtable create(void)
{
	
        hashtable temp;
	int i;

	//Initialize the values for the table
	for( i = 0; i < INITIAL_SIZE; i++)
	{
		temp-> table[i] = NULL;
	}

	return temp;
}
