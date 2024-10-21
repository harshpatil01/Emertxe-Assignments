#include "main.h"

int main()
{
	int result, data;
	int choice, i = 0;
	char option;
	int answer;
	TreeLink * root = NULL;

	do
	{
	printf("Enter the option:\n");
	printf("1. Create BST\n");	
	printf("2. Height of the BST \n");
	printf("3. Print \n");
	printf("4.Total Number of Nodes in BST \n ");

	printf("Choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("Enter the element to be inserted with first node as root: ");
			scanf("%d", &data);
			result = createBST(&root, data);
			if(result == SUCCESS)
			{
				printf("Operation is successful\n");
			}
			else
			{
				printf("Operation is not successful\n") ;
			}
			if (result == DUPLICATE)
    		{
      			  printf("Duplicate Node found\n");
    		}
				
			break;
	
		case 2:
			answer=getreeheight(root);
			printf("Tree height is: %d\n", answer);		
			break;
			break;
	
		case 3:
		print(root);
		break;
		
		case 4:
		answer=gettotalnodes(root);
		printf("Nodes are: %d\n", answer);	
			break;
		
		break;
		default:
			printf("Invalid entry\n");
			break;
	}

        printf("Do you want to continue : Y or N ? \n ");
	getchar();
        scanf("%c", &option);
        
        if ( option == 'Y' || option == 'y' )
        {
            continue;
        } else
        {
            break;
        }
        
    } while (1);
		
    return 0;
}
