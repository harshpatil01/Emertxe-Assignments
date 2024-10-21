#include "main.h"


int selection_sort(int *array, int n)
{
	int i, j, min;
 
    	// One by one move boundary of unsorted subarray
    	for (i = 0; i < n-1; i++)
    	{
        	// Find the minimum element in unsorted array
        	min = i;
        	for (j = i+1; j < n; j++)
		{
		          if (*(array+j) < *(array+min))
			   {
				min = j;
			  }
 		}
	        // Swap the found minimum element with the first element
        	swap(array+min, array+i);
    	}
	return SUCCESS;
}
