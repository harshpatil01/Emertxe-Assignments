#include "main.h"

int main()
{
	//Declare the variables
	//Initializing the head pointer as NULL 
	slist *head = NULL;
	//Declaring the data and the next data to be entered 
	data_t data;
	data_t newdata;
	int option, status;
	int pos;
	char opt;
	do
	{
		//Asking the user to select an option
		printf("1. Insert at Last \n 2. Create a loop \n 3. Detect a loop \n 4.Insert Sorted \n 5.Print the list \n 6.Exit\n ");
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
				     printf("Data has been inserted successfully \n");
                }
                else
                {
                     printf("Data has not been inserted successfully \n");
                }
                break;
				
			case 2:
			printf("Enter the position to create a loop : \n");
			scanf("%d",&pos);
			//Calling the function
			status=create_loop(&head,pos);
			if (status == SUCCESS)
                {
				     printf("Loop has been created successfully \n");
                }
                else
                {
                     printf("Loop has not been created successfully \n");
                }
			break;
			
			case 3:
			
			//Calling the function
			status=detect_loop(head);
			if (status == SUCCESS)
                {
				     printf("Loop has been detected successfully \n");
                }
                else
                {
                     printf("Loop has not been detected successfully \n");
                }
			break;
			
			
			
			case 4:
			printf("Enter the data in the list \n ");
			scanf("%d",&newdata);
			//Calling the function
			status=sorted_insert(&head,newdata);
			if (status == SUCCESS)
                {
				     printf("Inserted Element has been sorted successfully \n");
                }
                else
                {
                     printf("Inserted Element has not been sorted successfully \n");
                }
			
			
			break;
			case 5:
				//Calling the list printing function(Pass by value)
				print_slist(head);
				printf("\n");
				break;

			case 6:
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
