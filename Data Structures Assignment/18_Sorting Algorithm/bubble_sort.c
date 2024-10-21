#include "main.h"

int bubble_sort(int *array, int n)
{
	//Declaring variables
	int i, j, flag;

	//Checking for each n*n times
	for (i = 0; i < n-1; i++)
	{
		//Each time set flag to false
		flag = 0;
		for (j = 0; j < n-i-1; j++)
		{
			//check with adjacent elements
			if (*(array+j) > *(array+j+1))
			{
				//if jth value is greater than j+1th value swap it
				swap(array+j, array+j+1);
				flag = 1;
			}
		}
		
		// If no two elements are swapped by the inner loop, then break from the while loop
		if (!flag)
		{
			break;	
		}	
	}	
	return SUCCESS;		
}
