#include "main.h"

int main()
{
	
	int choice, i = 0;
	char option;

	hashtable table;
	
	//Initializing the table
	table = create();
	char value[VALUELENGTH];
	int key;

	do
	{
	
	printf("Enter the option:\n");
	printf("1. Insert into Hash Table\n");	
	printf("2. Search Hash Table\n");	
	printf("3. Delete a element in Hash Table\n");	
	printf("4. Destroy Hash Table\n");
	
	printf("Choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("Enter the value of the table: \n");
			scanf("%s", value);
			//Fetch the key to map to hashtable
			key = hash_function(value);		
			// To insert the value
			insert(table, key, value);
			//Print hash table			
			print_hashtable(table);
			break;
		case 2:
			printf("Enter the name of the person that needs to be searched for: \n");
			scanf("%s", value);

			//to search that element
			if(search(table,value) == SUCCESS)
			{
				printf("Element has been found successfully \n");
			}
			else
			{
				printf("Element has not been found successfully \n");
			}
			printf("\n");
			break;
		case 3: 
			printf("Enter the value that is to be deleted\n");
			scanf("%s",value);

			//To delete the particular element entered by the user
			deletetable(table,value);			
			//print hash table			
			print_hashtable(table);
			printf("\n");	
			break;
		case 4: 
			destroytable(table);
		
			//Print hash table			
			print_hashtable(table);
			break;
		
		default:
			printf("Invalid entry\n");
			break;
	}

        printf("Do you want to continue Y or N ? \n");
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
