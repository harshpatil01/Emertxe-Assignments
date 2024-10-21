#include "main.h"


void print_array(int *array, int n)
{
	int i;
	//Printing each element of the array
	for(i = 0; i < n; i++)
	{
		printf("%d ", *(array+i));
	}
	printf("\n");
}
