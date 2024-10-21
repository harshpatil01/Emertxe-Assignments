#include "main.h"

int main()
{
	//initialize the stack
	Stack stackarray;
	//Initializing the top as -1
	stackarray.top = -1;

	//Declaring the char array to hold infix, prefix and postfix expression
	char infixexp[STACKSIZE];
	char prefixexp[STACKSIZE];
	

	int infixlen, i;
	int choice, result;
	char option;
	

	do
	{

		printf("Enter the option:\n");
		printf("1. infix exp to prefix exp\n");	
		printf("2. prefix evaluation\n");	
		

		printf("Choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			
			case 1:
				printf("Enter the infix expression: \n ");
				scanf("%s", infixexp);
				//Calling the function
				result = infixtoprefix(infixexp, prefixexp);
				if(result == SUCCESS)
				{
					printf("Inflix to Prefix operation is successful \n");
				}
				else
				{
					printf("Inflix to Prefix operation is not successful\n");
				}
				printf("%s \n", prefixexp);
				break;
			case 2:
			//Calling the function
				result = prefixeval(prefixexp);
				printf("Preflix Evaluation Result is : %d \n", result);
				break;
			default:
				printf("Invalid option\n");
				break;
		}

		
		print(&stackarray);

	
	        printf("Do you want to continue Y or N ? \n ");
			getchar();
	        scanf("%c", &option);
        
	        if ( option == 'Y' || option == 'y' )
	        {
	            continue;
	        } 
		else
	        {
	            break;
	        }
        
	} while (1);
		
 	return 0;
}
