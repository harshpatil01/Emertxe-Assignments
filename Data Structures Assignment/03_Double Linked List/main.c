//Author:Harsh Patil
//File: main.c
//Title:WAF to insert & delete the data at first & last position. Also to delete the list (DLL)


#include "main.h"

int main()
{
	//Declare the variables
	Dlist *head = NULL;
	Dlist *tail = NULL;
	data_t data;
	char opt;
	int option, status;
	
	do
	{
		//Prompt to select an option
		printf("1.Insert at first\n2.Insert at last\n3.Delete first\n4.Delete last\n5.Delete list\n6.Print the list \n 7.Exit\n");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				//Asking the user to enter the data
				printf("Enter the data: ");
				scanf("%d", &data);
				//Calling the function
				status = dll_insert_first(&head, &tail, data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
                {
				     printf("Data inserted at the first successfully \n");
                }
                else
                {
                     printf("Data not inserted at the first successfully\n");
                }
                break;

			
			case 2:
				//Asking the user to enter the data
				printf("Enter the data: ");
				scanf("%d", &data);
				//Calling the function
				status = dll_insert_last(&head, &tail, data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
				{
					printf("Data inserted at the last successfully\n");
				}
				else
				{
					printf("Data not inserted at last successfully \n");
				}
				break;

			case 3:
				//Calling the function
				status = dll_delete_first(&head, &tail);
				if (status == SUCCESS)
				{
					printf("First node has been deleted successfully\n");
				}
				else
				{
					printf("List is empty\n");
				}
				break;

			case 4:
				//Calling the function
				status = dll_delete_last(&head, &tail);
				if (status == SUCCESS)
				{
					printf("Last node has been deleted successfully \n");
				}
				else
				{
					printf("List is empty\n");
				}
				break;
				

			case 5:
				//Calling the function
				status = dll_delete_list(&head, &tail);
				if (status == SUCCESS)
				{
					printf("List is deleted successfully\n");
				}
				else
				{
					printf("List is empty\n");
				}
				break;

			case 6:
				//Calling the function
				print_Dlist(head);
				printf(" \n");
				break;
			

			case 7:
				//Exiting the while loop
				return 0;

			default:
				printf(" Select a valid option \n");
		}
		printf("Do you want to continue : Y or N ? \n ");
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

