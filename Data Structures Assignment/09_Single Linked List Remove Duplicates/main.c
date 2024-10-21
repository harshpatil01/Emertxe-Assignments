//Author:Harsh Patil
//File: main.c
//Title:  WAP to remove duplicates in a SLL
//Description: File containing the display menu i.e the switch case and calling the functions as per the option entered by the user.




//Declaring the main.h function in which all the functions are declared 
#include "main.h"

int main()
{
	//Declare the variables
	//Initializing the head pointer as NULL 
	slist *head = NULL;
	//Declaring the data and the next data to be entered 
	data_t data;
	int option, status;
	char opt;
	do
	{
		//Asking the user to select an option
		printf("1.Insert the element \n 2.Remove Duplicates  \n  3.Print List \n 4.Exit\n "); 
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				//Asking user to enter the data
				printf("Enter the data: ");
				scanf("%d", &data);
				//Calling the insert at first function
				//Passing the address of the head and the data to be stored (Pass by reference as passing the address)
				status = insert_at_last(&head, data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
                {
				     printf("Data inserted successfully \n");
                }
                else
                {
                     printf("Data not inserted successfully  \n");
                }
                break;
				
			case 2:
				//Calling function
				status=sl_remove_duplicates(&head);
				if (status == SUCCESS)
                {
				     printf("Duplicate Data has been successfully deleted\n");
                }
                else
                {
                     printf("Duplicate Data has not been successfully deleted \n");
                }
			
			
			break;
			case 3:
				//Calling the list printing function(Pass by value)
				print_slist(head);
				printf("\n");
				break;

			case 4:
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
