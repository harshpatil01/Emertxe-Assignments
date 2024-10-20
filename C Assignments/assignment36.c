/*Name : Harsh Patil
 *Date : 23-08-2021
 *Description : WAP to write the float numbers in the sorted order 
  *Input: gcc assignment36.c
 *Output:
  Enter the Limit for an array: 4
Enter the values of the array
-1.3
-1.1
1.34
1.08
The sorted values are: -1.300000 -1.100000 1.080000 1.340000 
Do you wish to continue Y or N ? n
 */ 


#include<stdio.h>
#include<stdlib.h>

//Declare the function
void print_array(const float *ptr, int limit);

int main()
{
	//Declare the variables
	char option;

	do
	{
		int i, limit;

		//prompt the user for the limit of the array
		printf("Enter the Limit for an array: ");
		scanf("%d", &limit);

		//Declaring the array with the limit user has entered
		float *array = malloc(limit * sizeof(float));

		//prompt the user for the float values of array
		puts("Enter the values of the array");
		for(i = 0; i < limit; i++)
		{
			scanf("%f", array + i);
		}
		//Calling the printing function
		print_array(array, limit);

		printf("\nDo you wish to continue Y or N ? ");
		scanf("\n%c", &option);

	}while (option == 'Y' || option == 'y');

	return 0;
}

//Defining the array printing function
void print_array(const float *ptr, int limit)
{
	float min, max, temp = 0.0;

	//initialize the min and max value with first value of the array
	min = max = *ptr;

	int i, j;

	//find-out the maximum number and the minimum number from the array
	for(i = 0; i < limit ; i++)
	{
		if(*(ptr + i) < min)
		{
			min = *(ptr + i);
		}
		if(*(ptr + i) > max)
		{
			max = *(ptr + i);

		}

	}

	//Display the sorted floating values
	printf("The sorted values are: ");
	//printf the min value
	printf("%f ", min);

	//move the maximum value into the temp
	temp = max;

	//check for the number greater then temp and lesser then the maximum
	for(i = 0; i < limit - 2; i++)
	{
		temp = max;
		for(j = 0; j < limit ; j++)
		{
			if ((*(ptr + j) < temp) && (*(ptr + j) > min))
			{
					temp = *(ptr + j);
			}

		}
				printf("%f ",temp);
				min = temp;
	}

	//print the maximum vlaue
	printf("%f ", max);
}
