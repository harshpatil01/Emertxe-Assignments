//Author:Harsh Patil
//File: main.c
//Title: WAF to reverse the single linked list in both iterative and recursive methods
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
	slist *start,*newstart;
	int option, status;
	char opt;
	do
	{
		//Asking the user to select an option
		printf("1.Insert the element \n 2.Reverse Recursive \n 3.Reverse Iterative \n  4.Print List \n 5.Exit\n "); 
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
				     printf("Data inserted\n");
                }
                else
                {
                     printf("Data not inserted \n");
                }
                break;
				
			case 2:
			//Calling the function
			printf("Reverse Linked List through recursion method is successful\n");
			newstart=sl_reverse_recursive(start);
			while(newstart!=NULL)
			{
			    printf("%d -> ", newstart->data);
			    newstart=newstart->link;
			}

			break;
			case 3:
			//Calling the function 
			status = sl_reverse_iterative(&head);
			if(status == SUCCESS)
			{
  			 printf("Reverse Linked List through iteraive method is successful\n");			   
			}
			 else	
			 {
				printf("Info:List is Empty\n ");
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
