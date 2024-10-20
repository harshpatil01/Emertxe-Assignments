/*Name : Harsh Patil
 *Date : 28-08-2021
 *Description : WAP to read n and n person names of maxlen 32 . Sort and print the anmes.
  *Input: gcc assignment38.c
 *Output:
  Enter number of strings : 5
Enter 5 strings
Delhi
Agra
Kolkata
Bengaluru
Chennai

After sorting

Agra
Bengaluru
Chennai
Delhi
Kolkata
Do you want to continue : Y or N ? 
 n


 */ 


#include <stdio.h>
#include <stdlib.h>

//Declaring the functions
void sorting(char (*)[], int);
void my_strcpy(char *str1, char *str2);
int my_strcmp(char *str1, char *str2);

int main()
{
	//Declaring the variables
	int rows, i, status;
	char option;
	do
	{
		//Enter the number of strings and store it in the variable
		printf("Enter number of strings : ");
		status = scanf("%d", &rows);

		//Validating the entered value
		if (status != 1)
		{
			printf("Invalid input\n");
			return 0;
		}
		//Declaring array of strings
		char array[rows][32];

		//Enter the strings one by one
		printf("Enter %d strings\n", rows);
		for(i = 0; i < rows; i++)
		{
			scanf("%s", *(array + i));
		}
		//Calling sorting function
		sorting(array, rows);

		//Printing the names after sorting
		printf("\nAfter sorting\n\n");
		for(i = 0; i < rows; i++)
		{
			printf("%s\n", *(array + i));
		}
		printf("Do you want to continue : Y or N ? \n ");
		scanf("\n%c", &option);

	}while (option == 'Y' || option == 'y');
	return 0;
}

//Defining sorting function
void sorting(char (*array)[32], int rows)
{
	int i, j;
	char temp[32];
	for (i = 0; i < rows; i++)
	{
		for (j = i + 1; j < rows; j++)
		{
			//Comapring each string
			if (my_strcmp(array[i], array[j]) > 0)
			{
				//Swapping the strings
				my_strcpy(temp,array[i]);
				my_strcpy(array[i], array[j]);
				my_strcpy(array[j], temp);
			}
		}
	}
}
//Defining my_strcpy function
void my_strcpy(char *str1, char *str2)
{
	int index = 0;

	//Copying each character from one string to another
	while (str2[index] != '\0')
	{
	    //Copying each charcter one by one
		str1[index] = str2[index];
		//Incrementing 
		index++;
	}
	//Adding the null character at the end of the str1
	str1[index] = '\0';
}
//Defining my_strcmp function
int my_strcmp(char *str1, char *str2)
{
    //If the strings are not equal to null character and not equla to one a	nother
    while( (*str1 != '\0' && *str2 != '\0' ) && *str1 == *str2)
    {
	//Incrementing the address of both the strings
        str1++;
        str2++;
    }
	//If the strings are identical 
    if(*str1 == *str2)
    {
        return 0; 
    }

    else
    {
        return *str1 - *str2;
    }
}
