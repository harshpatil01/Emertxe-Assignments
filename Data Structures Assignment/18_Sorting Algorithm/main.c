#include "main.h"

int main()
{
    	int n;
	int arrayelement[size];
	int result;

	int choice, i = 0;
	char option;
	
	do
	{
	
	printf("Enter the option:\n");
	printf("1. create an array\n");	
	printf("2. bubble Sort\n");	
	printf("3. insertion Sort\n");	
	printf("4. selection Sort\n");	
	printf("5.Print the array\n");
	
	printf("Choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("Enter the total number of element to be inserted in the  array: \n ");
			scanf("%d", &n);
		
			for(i = 0; i < n; i++)
			{
				printf("%dth element:", i);
				scanf("%d", &arrayelement[i]);
			}	
		

			break;
		case 2:
			result = bubble_sort(arrayelement, n);
			if (result == SUCCESS)
			{
				printf("Bubble Sort successful \n");
			}
			else
			{			
			printf("Bubble Sort is not successful \n") ;
			}
			//Print the array 
			print_array(arrayelement, n);
	
			break;
	
		case 3: 
			result = insertion_sort(arrayelement, n);
			if (result == SUCCESS)
			{
				printf("Insertion Sort successful \n");
			}
			else
			{
				printf("Insertion Sort is not successful\n") ;
			}
			//check the list for validating
			print_array(arrayelement,n);
	
	
			break;

		case 4: 
			result = selection_sort(arrayelement, n);
			if (result == SUCCESS) 
			{
				printf("Selection Sort successful \n");
			}
			else
			{ 
				printf("Selection Sort is not successful \n") ;
			}
			
			//check the list for validating
			print_array(arrayelement, n );
	
			break;
	

		case 5: 
			print_array(arrayelement, n);
			break;
		default:
			printf("Invalid entry   \n");
			break;
	}

        printf("Do you want to continue Y or N ? \n ");
		getchar();
        scanf("%c", &option);
        
        if ( option == 'Y' || option == 'y' )
        {
            continue;
        } else
        {
            break;
        }
        
    } while (1);
		
}
