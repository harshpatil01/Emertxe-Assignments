#include "main.h"

int main()
{
	int n, result, data;
	int arrayelement[n];

	int choice, i = 0;
	char option;

	do
	{

		printf("1. Create an array \n");	
		printf("2. Binary Search Iterative\n");	
		printf("3. Binary Search Recursive\n");	
		printf("4. Display the array\n");

		printf("Choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
			//Asking user to enter the total number of elements
				printf("Enter the total number of elements of the array: \n ");
				scanf("%d", &n);
		
				for(i = 0; i < n; i++)
				{
					printf("%d th element:",i);
					scanf("%d", &arrayelement[i]);
				}
				break;
			case 2:
			//Asking user to enter the data to be searched
				printf("Enter the element that needs to be searched: \n ");
				scanf("%d", &data);
				//Calling the function
		result = binarysearchiterative(&arrayelement, 0, n-1,data);
				
				if(result == NOELEMENT)
				{
					printf("Element is not present in array \n");				}
				else
				{
					printf("Element is present at index %d \n", result);
				}
				
				break;
				
			case 3: 
				//Asking user to enter the data that needs to be searched
				printf("Enter the element that needs to be searched: \n ");
				scanf("%d", &data);
				//Calling the function
	
	result = binarysearchrecursive(&arrayelement, 0, n-1, data);
				
		if(result == NOELEMENT)
		{	
		printf("Element is not present in array \n ");				}
				
		else			
		{
		printf("Element is present at index %d \n", result);
				}
		
				break;
			case 4:
			//Calling the function
				print_array(arrayelement,n);
				break;
			default:
				printf("Invalid entry\n");
				break;
		}
       		printf("Do you want to continue Y or N ? \n ");
        	scanf("\n%c", &option);
        
        	if ( option == 'Y' || option == 'y' )
        	{
            		continue;
        	} 
			else
        	{
        	    	break;
        	}
        
    	} while (1);	

	return 0;
}
