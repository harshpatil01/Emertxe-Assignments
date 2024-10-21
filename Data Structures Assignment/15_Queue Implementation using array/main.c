#include "main.h"

int main()
{
	//Declare the variables
	data_t data;
	int option, status;
	char o;
	
	//Allocating the memory for the array
	Q_array *Q = malloc(sizeof(Q_array));

	//Valdation if the array has been created or not
	if (Q == NULL)
	{
		return FAILURE;
	}
	
	//Initialising the location pointing variable values i.e the front and rear
	Q->front = -1;
	Q->rear = -1;
	do
	{
		//Prompt to select an option
		printf("1.Enqueue\n2.Dequeue\n3.Print the queue\n4.Front Data\n5.Exit\n");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the data: ");
				scanf("%d", &data);
				//Calling the enque function
				status = enque(Q, data);
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
				status = deque(Q, &data);
				//Displaying result based on the return status from the function
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
				status = print(Q);
				//Displaying result based on the return status from the function
				if (status != SUCCESS)
				{
					printf("Queue is empty \n");
				}
				
				break;
			
			
			case 4:
			//Calling the front data function
			status=peek(Q,&data);
			if(status == SUCCESS)
			{
			printf("The front element data is %d",data);
			}
			else
			{
			printf("The queue is empty \n ");
			}
			
			break;
			
			
			case 5:
				return 0;

			default:
				printf("Select a valid option\n");
		}

		printf("Do you want to continue Y or N ? \n");
		getchar();
		scanf("%c",&o);

		if(o == 'Y' || o == 'y')
		{
		    continue;
		}
		else
		{
		    break;
		}

	}while(1);
}

