#include "main.h"

int binarysearchiterative(int *arr, int left, int right, int data)
{
	while (right >= left)
	{
		int mid = left + (right - left)/2;
	
		// Check if data is present at mid
		if (*(arr+mid) == data) 
		{
			return mid;
		} 
		// If data is greater than the mid value , ignore the  left half	
		if (*(arr+mid) < data) 
		{
			left = mid + 1; 
		}
		// If data is smaller thena the mid value ,ignore the right half
		else 
		{
			right = mid - 1;
		} 
	}	
	//If the data entered by the user is not present in the array return no element
	return NOELEMENT;
}
