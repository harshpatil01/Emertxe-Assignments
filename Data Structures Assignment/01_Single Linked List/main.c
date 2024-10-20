//Author:Harsh Patil
//File: main.c
//Title:WAF to insert & delete the data at first & last position. Also to find given node & to delete the List 
//Description: File containing the display menu i.e the switch case and calling the functions as per the option entered by the user.




//Declaring the main.h function in which all the functions are declared 
#include "main.h"

int main()
{
	//Declare the variables
	//Initializing the head pointer as NULL 
	slist *head = NULL;
	//Declaring the data and the next data to be entered 
	data_t data, n_data;
	int option, status;
	char opt;
	do
	{
		//Asking the user to select an option
		printf("1.Insert at first\n2.Insert at last\n3.Delete first\n4.Delete last\n5.Find Node\n6.Delete list\n7.Print list\n8.Exit\n");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				//Prompt + read the value
				printf("Enter the data: ");
				scanf("%d", &data);
				//Calling the insert at first function
				//Passing the address of the head and the data to be stored (Pass by reference as passing the address)
				status = insert_at_first(&head, data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
                {
				     printf("Data inserted at the first\n\n");
                }
                else
                {
                     printf("Data not inserted at the first\n\n");
                }
                break;

			
			case 2:
				//Prompt + read the value
				printf("Enter the data: ");
				scanf("%d", &data);
			//Calling the insert at last function (Pass by reference as passing the address)
				status = insert_at_last(&head, data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
				{
					printf("Data inserted at the last\n\n");
				}
				else
				{
					printf("Data not inserted at last\n\n");
				}
				break;

			case 3:
				//Calling the delete first function(Pass by reference as passing the address)
				status = delete_first(&head);
				if (status == SUCCESS)
				{
					printf("First node has been deleted\n\n");
				}
				else
				{
					printf("Unable to delete node\n\n");
				}
				break;

			case 4:
				//Calling the delete last function(Pass by reference as passing the address)
				status = delete_last(&head);
				if (status == SUCCESS)
				{
					printf("Last node has been deleted\n\n");
				}
				else
				{
					printf("Unable to delete node\n\n");
				}
				break;
				
			case 5:
				//Prompt + read the node data
				printf("Enter the key or data to be found :");
				scanf("%d", &n_data);
				//Calling the find node function(Pass by reference as passing the address)
				status = find_node(&head, n_data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
				{
					printf("Data is present\n\n");
				}
				else
				{
					printf("Data not present\n\n");
				}
				break;

			case 6:
				//Calling the delete list function(Pass by reference as passing the address)
				status = delete_list(&head);
				if (status == SUCCESS)
				{
					printf("List is deleted\n\n");
				}
				else
				{
					printf("Unable to delete list\n\n");
				}
				break;

			case 7:
				//Calling the list printing function(Pass by value)
				print_slist(head);
				printf("\n");
				break;

			case 8:
				//Exiting the while loop
				return 0;

			default:
				printf("Select a valid option\n");
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
