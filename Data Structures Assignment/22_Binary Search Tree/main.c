#include "main.h"

int main()
{
	int result, data;
	int choice, i = 0;
	char option;
	TreeLink * root = NULL;

	do
	{
	printf("Enter the option:\n");
	printf("1. Create BST\n");	
	printf("2. Delete an element of the BST \n");
	printf("3. Print \n");

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
			printf("Enter the element to be deleted from the BST: \n ");
			scanf("%d", &data);
			root = deleteBST(root, data);	
			break;
	
		case 3:
		print(root);
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
