#include "main.h"


int insertion_sort(int *array, int n)
{
	//Declaring variables
	int i, j, flag;

	//Checking for each n*n times
	for (i = 0; i < n; i++)
	{
		//check with adjacent elements
		for(j = i; j >= 0; j--)
		{
			if( *(array+j - 1) > *(array+j))
			{
				swap(array+j, array+j-1);
			}		
			else
			{
				break;
			}
		
		}
	}
	return SUCCESS;
}
