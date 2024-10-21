#include "main.h"

int main()
{
	//Declaring the variables
	data_t data;
	int option, status;
	char opt;

	s_array *s = malloc(sizeof(s_array));

	//Valdation
	if (s == NULL)
	{
		return FAILURE;
	}
	//Initialize the top of s to -1
	s->top = -1;
	do
	{
		//Prompt to select an option
		printf("1.Push\n2.Pop\n3.Peek\n4.Print the stack\n5.Exit\n");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				//Asking the user to enter the data
				printf("Enter the data: ");
				scanf("%d", &data);
				//Calling the push function
				status = push(s, data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
                {
				     printf("Data has been pushed in the stack\n");
                }
                else
                {
                     printf("Data has not been pushed in the stack\n");
                }
                break;

			
			case 2:

				//Calling the function
				status = pop(s, &data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
				{
					printf("Data has been popped successfully \n");
				}
				else
				{
					printf("Data has not been popped successfully \n");
				}
				break;

			case 3:
				//Calling the delete first function
				status = peek(s, &data);
				if (status == SUCCESS)
				{
					printf("The peek element is %d \n", data);
				}
				else
				{
					printf("No peek element has been found \n");
				}
				break;

			case 4:
				//Calling the function
				print(s);
				break;
			
			case 5:
				return 0;

			default:
				printf("Select a valid option\n");
		}
		printf("Do you want to continue Y or N ? \n ");
		getchar();
		scanf("%c",&opt);
		if(opt == 'Y' || opt == 'y' )
		{
			continue;
		}
		else
		{
			break;
		}
		
	}while(1);
}
