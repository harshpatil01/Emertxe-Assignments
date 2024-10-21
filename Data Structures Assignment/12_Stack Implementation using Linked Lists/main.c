#include "main.h"

int main()
{
	//Declare the variables
	slist *stack_top = NULL;
	data_t data;
	int option, status;
	char opt;

	
	do
	{
		//Prompt to select an option
		printf("1.PUSH\n2.POP\n3.PEEK\n4.Print the list\n5.Exit\n");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				
				printf("Enter the data: ");
				scanf("%d", &data);
				//Calling the push function
				status = push(&stack_top, data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
                {
				     printf("Data has been pushed successfully \n");
                }
                else
                {
                     printf("Data has not been pushed successfully \n");
                }
                break;

			
			case 2:

				//Calling the pop function
				status = pop(&stack_top, &data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
				{
					printf("Data %d has been popped successfully \n", data);
				}
				else
				{
					printf("Data has not been poppped successfully \n");
				}
				break;

			case 3:
				//Calling the peek function
				status = peek(&stack_top, &data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
				{
					printf("The peek element is %d\n", data);
				}
				else
				{
					printf("Stack is empty\n");
				}
				break;

			case 4:
				//Calling the peep function
				status = print(stack_top);
				//Displaying result based on the return status from the function
				if (status != SUCCESS)
				{
					printf("Stack empty\n");
				}
				putchar('\n');	
				break;
			
			case 5:
				//Exiting from the loop
				return 0;

			default:
				printf("Select a valid option\n");
		}
		printf("Do you want to continue  Y or N ? \n ");
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
