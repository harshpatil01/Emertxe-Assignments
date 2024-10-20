//Author:Harsh Patil
//File: main.c
//Title:WAF to insert data after and before given data, & at nth position. Also to delete given element (SLL)
//Description: File containing the display menu i.e the switch case and calling the functions as per the option entered by the user.






#include "main.h"

int main()
{
	//Declare the variables here
	slist *head = NULL;
	data_t data, n_data, g_data, pos;
	int option, status;
	char opt;
	do
	{
	
		//Prompt to select an option
		printf("1.Insert After\n2.Insert Before\n3.Insert nth\n4.Delete element\n5.Insert the element \n 6.Print list\n7.Exit\n");
		scanf("%d", &option);

		switch (option)
		{
			case 1: 
					//Asking the user to enter the n_data(new data)
				printf("Enter the n_data: ");
				scanf("%d", &n_data);
					//Asking the user to enter the g_data(given data)
				printf("Enter the g_data: ");
				scanf("%d", &g_data);
				//Calling the function
				status = sl_insert_after(&head, n_data, g_data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
				{
					printf("Data inserted after %d\n", g_data);
				}
				else
				{
					printf("Data %d not available in the list \n", g_data);
				}
                		break;

			
				case 2:
				//Asking the user to enter the n_data(new data)
				printf("Enter the n_data: ");
				scanf("%d", &n_data);
				//Asking the user to enter the g_data(given data)
				printf("Enter the g_data: ");
				scanf("%d", &g_data);
				//Calling the function
				status = sl_insert_before(&head, n_data, g_data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
				{
					printf("Data inserted before %d\n", g_data);
				}
				else
				{
					printf("Data %d not available in the list \n", g_data);
				}
		
				break;

				case 3:
			    	//Asking user to enter the nth value
				printf("Enter the pos value: ");
				scanf("%d", &pos);
				//Calling the function
				status = sl_insert_nth(&head, pos);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
				{
					printf("Data inserted after the %d node\n", pos);
				}
				else
				{
					printf("%d is greater than the the length of the entire linked list \n", pos);
				}
				
				break;

				case 4:
				//Asking the user the data to be deleted 
				printf("Enter the g_data: ");
				scanf("%d", &g_data);
				//Calling the function
				status = sl_delete_element(&head, g_data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
				{
					printf("Element has been succesfully deleted from the list\n");
				}
				else
				{
					printf("Element is not available in the list\n");
				}
				break;
			
				case 5:
				printf("Enter the data to be added \n ");
				scanf("%d",&data);
				//Calling the function
				status=insert_at_last(&head,data);
				if(status == SUCCESS)
				{
				    printf("Element has been added successfully\n");
				}
				else
				{
				    printf("Element has not been added successfully \n ");
				}
				break;
				case 6:
				//Calling the function
				print_slist(head);
				printf("\n");
				break;

				case 7:
				//Exiting the while loop
				return 0;	
				
				default: 
				printf("Please select a valid option\n");
				
		}
		printf("Do you want to continue : Y or N ? \n ");
		getchar();
		scanf("%c",&opt);
		if(opt == 'y' || opt == 'Y')
		{
		    continue;
		}
		else
		{
		    break;
		}
	}while(1);
}
