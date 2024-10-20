//Author:Harsh Patil
//File: main.c
//Title: WAF to find the mid node & to get the nth node from the end of the linked list .
//Description: File containing the display menu i.e the switch case and calling the functions as per the option entered by the user.




//Declaring the main.h function in which all the functions are declared 
#include "main.h"

int main()
{
	//Declare the variables
	//Initializing the head pointer as NULL 
	slist *head = NULL;
	//Declaring the data and the next data to be entered 
	data_t data, n,ans;
	int option, status;
	char opt;
	do
	{
		//Asking the user to select an option
		printf("1.Insert at Last \n 2.nth position from the last \n 3.Finding the middle node \n 4.Print the list \n 5.Exit\n ");
	       	scanf("%d", &option);

		switch (option)
		{
			case 1:
				//Prompt + read the value
				printf("Enter the data: ");
				scanf("%d", &data);
				//Calling the insert at first function
				//Passing the address of the head and the data to be stored (Pass by reference as passing the address)
				status = insert_at_last(&head, data);
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
			//Asking user to enter the nth position from the last
			printf("Enter the nth position from last \n ");
			scanf("%d", &n );
			//Calling the function 
			status = sl_get_nth_last(head,n,&ans);
			if (status == SUCCESS)
			{

				printf("The value at the nth position is %d \n",ans);
			}
			else
			{
			    printf("Operation is not successful \n");
			}
			
				break;
			case 3:
			//Calling the function 
			status = sl_find_mid(head,&ans);
			if(status == SUCCESS)
			{
				printf("The middle value of the linked list is %d \n ",ans);
			}
			else
			{
				printf("Info : List is Empty \n ");
			}
				break;
			case 4:
				//Calling the list printing function(Pass by value)
				print_slist(head);
				printf("\n");
				break;

			case 5:
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
