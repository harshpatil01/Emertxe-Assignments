

/*Name : Harsh Patil
 *Date : 03-09-2021
 *Description : Generate consecutive NRPS of length n using k distinct character
  *Input: gcc assignment48.c
 *Output:
Enter the length of the string:
 6
Enter the length of the distinct characters:
 3
Enter distinct characters:
 a
b
c
The NRPS sequence: abcbca
Do you wish to continue Y or N  ?
  n

  Enter the length of the string:
 7
Enter the length of the distinct characters:
 3
Enter distinct characters:
 a
b
a
Characters are not distinct





 */


#include<stdio.h>
#include<stdlib.h>

//Declare the function
void NRPS(char *, int, int);

int main()
{
    //Declare the variables
	int i, j, length, limit;
	char *string = (char *)malloc(50 * sizeof(char));
	char option;
	do
	{
		//Asking the user to enter the length of the string
		printf("Enter the length of the string: \n ");
		scanf("%d",&limit);

		//Asking the user to enter the length of the distinct characters
		printf("Enter the length of the distinct characters: \n ");
		scanf("%d", &length);

		//Asking users to enter the distinct characters
		printf("Enter distinct characters: \n ");
		for (i = 0; i < length ; i++)
		{
			scanf("\n%c", string + i);
		}

		//Validation to check if the entered characters are not distinct
		for (i = 0; i < length; i++)
		{
			for (j = i + 1; j < length; j++)
			{
				if (string[j] == string[i])
				{
					printf("Characters are not distinct\n");
					return 0;
				}
			}
		}

		//Display the result
		printf("The NRPS sequence: ");

		//Calling the NRPS function
		NRPS(string, limit, length);

		//Prompt if the program is to be repeated
		printf("\nDo you wish to continue Y or N  ?\n  ");
		scanf("\n%c", &option);

	}while (option == 'Y' || option == 'y');
}

void NRPS(char *string, int lim, int len)
{
	int i, val = 0, count = 0;

	for (i = 0; i < lim; i++)
	{
		if (i % len == 0 && i != 0)
		{
			val++;
		}
		printf("%c", *(string + ((i + val) % len)));
	}
}
