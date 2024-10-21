#include "main.h"

int main()
{
	//Declare the variables
	slist *front = NULL;
	slist *rear = NULL;
	data_t data;
	int option, status;
	char opt;
	
	do
	{
		//Prompt to select an option
		printf("1.Enqueue\n2.Dequeue\n3.Print Queue\n4.Exit\n");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				
				printf("Enter the data: ");
				scanf("%d", &data);
				//Calling the enque function
				status = enque(&front, &rear, data);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
                {
				     printf("Data has been enqueued successfully \n");
                }
                else
                {
                     printf("Queue is Full \n");
                }
                break;

			
			case 2:

				//Calling the deque function
				status = deque(&front, &rear, &data);
				//Displaying the result based on the return status from the function
				if (status == SUCCESS)
				{
					printf("Data %d has been dequeued successfully \n", data);
				}
				else
				{
					printf("Queue is empty \n");
				}
				break;

			case 3:
				//Calling the print queue function
				status = print(front);
				//Displaying result based on the return status from the function
				if (status != SUCCESS)
				{
					printf("Queue is empty \n");
				}
				
				break;

			case 4:
				//Exiting the loop
				return 0;

			default:
				printf("Select a valid option\n");
		}
		printf("Do you want to continue Y or N ? \n");
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
