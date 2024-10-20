

/*Name : Harsh Patil
 *Date : 03-09-2021
 *Description : Generate consecutive NRPS of length n using k distinct character
  *Input: gcc assignment48.c
 *Output:
Enter String 1:
 Dennis Ritchie
Enter String 2:
 Linux
String 1 post squeeze: Des Rtche
Do you want to continue : Y or N ?
 n


 */




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Declare the function
void squeeze(char *, char *);

int main()
{
	//Declare the variables
	char *string1 = malloc(10 * sizeof(char));
	char *string2 = malloc(10 * sizeof(char));
	char option;

	do
	{
		//Asking the user to enter the first string
		printf("Enter String 1: \n ");
		scanf("%[^\n]s", string1);
		getchar();

		//Asking the user to enter the second string
		printf("Enter String 2: \n ");
		scanf("%[^\n]s", string2);

		//Calling the squeeze function with string1 and string2 as the arguments
		squeeze(string1, string2);

		//Display the output post squeeze operation
		printf("String 1 post squeeze: %s\n", string1);

		//Prompt if the program is to be repeated
		printf("Do you want to continue : Y or N ? \n ");
		scanf("\n%c", &option);
		getchar();

	}while (option == 'Y' || option == 'y');
	return 0;
}

//Defining the squeeze function
void squeeze(char *str1,char *str2)
{
	int i, j, k = 0;

	for (i = 0; *(str1 + i) != '\0'; i++)
	{
		//Logic where any matched position characters will be skipped, thereby removing the charaters in string 1
		for (j= 0; (*(str1 + i) != *(str2 + j)) && (*(str2 + j) != '\0'); j++);
		if (*(str2 + j) == '\0')
		{
			*(str1 + (k++)) = *(str1 + i);
		}
	}
	*(str1 + k) = '\0';
}
