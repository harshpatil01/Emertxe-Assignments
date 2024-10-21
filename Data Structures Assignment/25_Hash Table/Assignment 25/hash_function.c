#include "main.h"

int hash_function(char *value)
{
	int key;
	int i;	
	//Character Value to Integer Value
	if (*value >= 'A' && *value <= 'Z') 
	{
		key = *value - 'A';
	}
	else if (*value >= 'a' && *value <= 'z') 
	{
		key = *value - 'a';
	}

	//Key value Calculation to map to the hashtable
	key = key % INITIAL_SIZE;	
    return key;
}
