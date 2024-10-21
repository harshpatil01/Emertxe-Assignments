#include "main.h"

int main()
{
    	//Declaring variables
	slist  *head = NULL;
	slist *phead = NULL;
	slist *qhead = NULL;

	int data, a_data, result, index;
	int choice;
	char option;
	int plistelement, qlistelement, i;
	
	do
	{	
	printf("Enter the option:\n");
	printf("1.Insert in the List 1 \n");
    printf("2.Insert in the List 2 \n");
	printf("3.Merge Sort \n");
	printf("4.Print the list \n");
	printf("Enter the choice:\n");
	scanf("%d", &choice);

	switch(choice)
	{
		
	
		case 1:			 
			printf("Enter the number of elements in list p: ");
			scanf("%d", &plistelement);
			printf("Enter the elements:\n");
			for(i = 0; i < plistelement;i++)
			{
				printf("%dth element: ", i);
				scanf("%d", &data);
				//Calling the function
				result = insert_at_last(&phead, data);
				if(result == SUCCESS)
				{				
				printf("Element inserted successfully\n");
				}
				else
				{
				printf("Element has not been inserted successfully\n");
				}
			}
		
		break;
		
		case 2:
			printf("Enter the number of elements in list q : ");
			scanf("%d", &qlistelement);
			printf("Enter the elements:\n");
			for(i = 0; i < qlistelement;i++)
			{
				printf("%d: ", i);
				scanf("%d", &data);
				//Calling the function
				result = insert_at_last(&qhead, data);
				if(result == SUCCESS)
				{
					printf("Element inserted successfully\n");
				}
				else
				{
					printf("Element has not been inserted successfully\n") ;
				}
			}
			break;

		case 3:
			//Calling the function
			head = merge_sortedlinks(phead, qhead);
		
		case 4:
			//Calling the function
		print_slist(head);	
						
			break;
		default:
			printf("Invalid entry.\n");
			break;
	}

	

        printf("Do you want to continue Y or N ? \n");
	getchar();
        scanf("%c", &option);
        
        if ( option == 'Y' || option == 'y')
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
