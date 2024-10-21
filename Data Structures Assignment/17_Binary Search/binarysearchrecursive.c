#include "main.h"

int binarysearchrecursive(int *arr , int left, int right, int data)
{

	if (right >= left)
	{
		int mid = left + (right - left)/2;

		// If the element is present at the middle itself
		if (*(arr+mid) == data) 
		return mid;

		// If element is smaller than mid, then it can only be present in left subarray
		if (*(arr+mid) > data) 
		return binarysearchrecursive(arr, left, mid-1, data);

		// If the element is bigger than mid ,the element can only be present in right subarray
		if (data > *(arr+mid))
		return binarysearchrecursive(arr, mid+1, right, data);
	}

	//If the data entered by the user is not present in the array return no element
	return NOELEMENT;
}
