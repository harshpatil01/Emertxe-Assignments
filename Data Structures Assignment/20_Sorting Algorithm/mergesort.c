#include "main.h"


int mergesort(int a[], int lowerbound ,int upperbound)
{
	int i;
	//Traversing the list
	if(lowerbound<upperbound)
	{
		//Calculation of the mid to split into left and right sublists
		int mid=(upperbound+lowerbound)/2;
		//Calling mergesort recursively for the left sublists
		mergesort(a,lowerbound,mid);
		//Calling mergesort recursively for the right sublists
		mergesort(a,mid+1,upperbound);
		//Calling the merge function when there are only single elements left in both left and right subparts
		merge(a,lowerbound,mid,upperbound);
	}
}
