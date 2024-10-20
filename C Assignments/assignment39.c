/*Name : Harsh Patil
 *Date : 28-08-2021
 *Description : WAP to implement strtok function
  *Input: gcc assignment39.c
 *Output:

  Enter string1 content:  
 Mumbai::Pune:.Chennai
Enter string2 that is the delimiters : 
 :.
Mumbai
Mumbai
Pune
Chennai
Do you want to continue Y or N ? 
 n

Enter string1 content:  
 Chennai:;Mumbai:;;;Pune:;;:.Bangalore
Enter string2 that is the delimiters : 
 :;:.
Chennai
Chennai
Mumbai
Pune
Bangalore
Do you want to continue Y or N ? 
 n

 
 
 */ 


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Declare the function 
char *my_strtok(char *, char *);

int main()
{

	//Declaring the variables 
	char *string1 = malloc(30 * sizeof(char));
	char *string2 = malloc(40 * sizeof(char));
	char option;

	do
	{
		//Asking the user to enter the two strings
		printf("Enter string1 content:  \n ");
		scanf("%s", string1);

		printf("Enter string2 that is the delimiters : \n ");
		scanf("%s", string2);

		//Calling the strtok function and printing the output for the first element
		char *token = my_strtok(string1, string2);
		printf("%s\n", token);

		//Calling the strtok function to print the other elements of string1
		while (token != NULL)
		{
			printf("%s\n", token);
			token = my_strtok(NULL, string2);
		}

		//Prompt if the program is to be repeated
		printf("Do you want to continue Y or N ? \n ");
		scanf("\n%c", &option);

	}while (option == 'Y' || option == 'y');

}
char *my_strtok(char *str1, char *str2)
{
	//Declaring the variable
	int j = 0;
	static int i;
	static char *temp;
	int length = i;
	if (str1 != NULL)
	{
		temp = str1;
	}
	while (temp[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			//Checking for delimiter
			if (str2[j] == temp[i])
			{
				temp[i] = '\0';
				i++;
				if (temp[length] != '\0')
				{
					return (&temp[length]);
				}
				else
				{
					length = i;
					i--;
					break;
				}
			}
		j++;
		}
		i++;
	}
	if (temp[length] == '\0')
	{
		i = 0;
		return NULL;
	}
	else
	{
		return (&temp[length]);
	}
}

