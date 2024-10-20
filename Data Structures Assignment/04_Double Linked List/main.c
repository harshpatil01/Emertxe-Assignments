//Author:Harsh Patil
//File: main.c
//Title:WAF to insert data after & before given data. Also to delete given element (DLL)


#include "main.h"

int main()
{
	//Declaring the variables
	Dlist *head = NULL;
	Dlist *tail = NULL;
	data_t data, n_data, g_data;
	int option, status;
	char opt;

	do
	{
		//Prompt to select an option
		printf("1.Insert the element\n2.Insert after\n3.Insert before\n4.Delete element\n5.Print the list \n 6.Exit\n");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the data: ");
				scanf("%d", &data);
				//Calling the insert element function
				status = dll_insert_element(&head, &tail, data);
				if (status == SUCCESS)
				{
					printf("Element has been inserted\n");
				}
				else
				{
					printf("Element not inserted\n");
				}
				break;

			case 2:
				//Asking user to enter the new data
				printf("Enter n_data value: ");
				scanf("%d", &n_data);
				//Asking user to enter the given data
				printf("Enter g_data value: ");
				scanf("%d", &g_data);
				//Calling the insert after function
		status = dll_insert_after(&head, &tail, n_data, g_data);
				
				if (status == SUCCESS)
				{
					printf("Element %d has been inserted after %d\n", g_data, n_data);
				}
				else
				{
					printf("Element not inserted\n");
				}
				break;

			case 3:
				//Asking user to enter the new data
				printf("Enter n_data value: ");
				scanf("%d", &n_data);
				//Asking user to enter the given data
				printf("Enter g_data value: ");
				scanf("%d", &g_data);
				//Calling the insert before function
				status = dll_insert_before(&head, &tail, n_data, g_data);
				
				if (status == SUCCESS)
				{
					printf("Element %d has been inserted before %d\n\n", g_data, n_data);
				}
				else
				{
					printf("Element not inserted\n\n");
				}
				break;

			case 4:
				//Asking user to enter the new data which is to be deleted
				printf("Enter n_data value: ");
				scanf("%d", &n_data);
				//Calling the function
				status = dll_delete_element(&head, &tail, n_data);
				if (status == SUCCESS)
				{
					printf("Element %d is deleted\n", n_data);
				}
				else
				{
					printf("Element not found\n");
				}
				break;

			case 5:
				//Calling the list printing function
				print_Dlist(head);
				printf("\n");
				break;
			

			case 6:
				//Exiting the while loop
				return 0;

			default:
				printf("Select a valid option\n");
				
			
				
				
		}
		
		printf("Do you want to continue : Y or N ? \n");
		getchar();
		scanf("%c",&opt);
		if(opt == 'Y' || opt == 'y')
		{
			continue;
		}
		else
		{
			break;
		}
		
	}while(1);
	
}

