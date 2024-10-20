/*Name : Harsh Patil
 *Date : 01-09-2021
 *Description :  WAP implement the solution for tower of hanoi
  *Input: gcc assignment47.c
 *Output:
Enter the number of disks: 3
Seguence is :
 Make the legal move  from rod A to C
 Make the legal move  from rod A to B
 Make the legal move  from rod C to B
 Make the legal move  from rod A to C
 Make the legal move  from rod B to A
 Make the legal move  from rod B to C
 Make the legal move  from rod A to C
Do you want to continue : Y or N  ?
  n
*/

#include<stdio.h>
#include<stdlib.h>

//Declaring the functions
void hanoi(int, char *, char *, char *);
int isvalid(int status);

int main()
{
	//Declare the variables here
	char A[] = "A", B[] = "B", C[] = "C", option;
	int disk, status;

	do
	{

		//Prompt + read the entered value
		printf("Enter the number of disks: ");
		status = scanf("%d", &disk);

		//Validation of the entered value
		if (isvalid(status) || disk <= 0)
		{
			printf("Invalid entry Enter a number greater than zero\n ");
			return 0;
		}

		//Display the result
		printf("Seguence is :\n");

		//Calling the hanoi function
		hanoi(disk, A, B, C);

		//Prompt if the program is to be repeated
		printf("Do you want to continue : Y or N  ? \n  ");
		scanf("\n%c", &option);

	}while (option == 'Y'|| option == 'y');
	return 0;
}

//Defining the hanoi function
void hanoi(int disk, char *A, char *B, char *C)
{
	if (disk > 0)
	{
		//Recursively calling the same function to implement the operation
		hanoi(disk - 1, A, C,B );

		//Displaying the action performed
		printf(" Make the legal move  from rod %s to %s\n", A, C);

		//Recursively calling the same function to implement the operation
		hanoi(disk - 1, B, A, C);
	}
}

//Defining the validation function
int isvalid(int status)
{
	if (status != 1)
	{
		return 1;
	}
	return 0;
}
