#include "main.h"

int main()
{
	int a[ARRAYSIZE];

	int totalelements, result;
	int lowerbound=0;
	int choice, i = 0;
	char option;
	
	do
	{
	
	printf("Enter the option:\n");
	printf("1. Create an array\n");
	printf("2. Merge Sort\n");

	printf("Choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("Enter the total number of element to be inserted in the array: ");
			scanf("%d", &totalelements);
			int upperbound=totalelements;
			for(i = 0; i < totalelements; i++)
			{
				printf("%d: ", i);
				scanf("%d", &a[i]);
			}		

			break;
		
		case 2: 
	
			result = mergesort(a,lowerbound ,upperbound);
			if(result == SUCCESS)
			{
				printf("MergeSort is successful\n");
			}
			else
			{
				printf("MergeSort is not successful\n");
			}
				
			print(a,totalelements);
			break;
		default:
			printf("Invalid entry.\n");
			break;
	}

        printf("Do you want to continue Y or N ? \n ");
		getchar();
        scanf("\n%c", &option);
        
        if ( option == 'Y' || option == 'y')
        {
            continue;
        } else
        {
            break;
        }
        
    } while (1);
		
    return 0;
}
