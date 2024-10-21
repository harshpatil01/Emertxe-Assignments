#include "main.h"

void merge(int a[], int lowerbound, int mid,int upperbound)
{
	//Declaring variables
	int i,j,k;
	int b[ARRAYSIZE];
	//Initializing the variables i j and k
	i=lowerbound;
	j=mid+1;
	k=lowerbound;
	//Traversing the left sublist till mid and traversing the right sublist till upperbound
	while(i<=mid && j<=upperbound)
	{
		//Comparing the elements of left sublist and right sublist
		//If the element of the right is bigger than the the left
		if(a[i] <= a[j])
		{
			//Storing the smaller element in the array b
			b[k]=a[i];
			//Increment i
			i++;
			//Increment k
			k++;
		}
		else
		{
			//Storing the smaller element in the array b
			b[k]=a[j];
			//Increment j
			j++;
			//Increment k
			k++;
		}
	}
	
	//If any element is remaining in the left or right sublist
	if(i>mid)
	{
		//Traversing till the right sublist( j is less than equal to upperbound)
		while(j <= upperbound)
		{
			//Storing the remaining elements of the right sublist in the array b
			b[k]=a[j];
			//Increment j
			j++;
			//Increment k
			k++;
		}
	}
	else
	{
		//Traversing till the left sublist( i is less than equal to mid)
		while(i <= mid)
		{
			//Storing the remaining elements of the left sublist in the array b
			b[k]=a[i];
			//Increment i
			i++;
			//Increment k
			k++;
		}
	}

//Copying the result in the array a from array b 
for(k=lowerbound;k<=upperbound;k++)
{
	a[k]=b[k];
}

}
