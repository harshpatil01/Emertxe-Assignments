/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description :
  *Input: gcc assignment15.c
  *Output:
  Enter the number 
 11
Enter the value 
 174
Enter a value 
 3
Enter b value 
 5
The binary form  of the number : 
 00000000000000000000000000001011
The binary form of value : 
 00000000000000000000000010101110
Updated Value: 158
00000000000000000000000010011110
Do you want to continue Y or N ? N

 */ 


#include<stdio.h>
#include<stdlib.h>
//Defining the VALID and INVALID Definitions
#define INVALID 0
#define VALID   1
//Declaring the functions
int bitwise_lsb(int, int, int, int);
int is_valid(int, int);
int is_valid1(int);
int main()
{

	//Declaring  the variables
	int num, val,i, a, b,sum, status, temp;
	char option;

	do
	{
		//Asking user to enter the number
		printf("Enter the number \n ");
		status = scanf("%d", &num);

		//Valiidation to check if entered value is a number
		if (is_valid1(status) == INVALID)
		{
			return 0;
		}

		//Asking user to enter the value
		printf("Enter the value \n ");
		status = scanf("%d", &val);

		//Valiidation to check if entered value is a number
		if (is_valid1(status) == INVALID)
		{
			return 0;
		}

		//Asking user to enter the value of a and b 
		printf("Enter a value \n ");
		scanf("%d", &a);
		printf("Enter b value \n ");
		scanf("%d",&b);

		//Valiidation to check if entered value is a number
		if (is_valid(a,b) == INVALID)
		{
			return 0;
		}

		//Calculation of b-a+1 and storing it into the sym
		sum = b - a + 1;

		//Printing the binary form of the number entered by the user
		printf("The binary form  of the number : \n ");
		for ( i=31;i>=0;i--)
                 {
                      if(num&(1<<i))
                      {
                         printf("1");
                      }
                      else
                      {
                          printf("0");
                      }
                  }
                  printf("\n");
		  
		  //Printing the binary form of the value entered by the user
		  printf("The binary form of value : \n ");
		  for ( i=31;i>=0;i--)
                 {
                      if(val&(1<<i))
                     {
                          printf("1");
                      }
                     else
                      {
                          printf("0");
                      }
                  }
                 printf("\n");

			


		//Calling the function of bitwise and displaying the output
		printf("Updated Value: %d\n",bitwise_lsb(num, val, a, sum));
		temp = bitwise_lsb(num, val, a, sum);
		for ( i=31;i>=0;i--)
		{
		    if(temp&(1<<i))
		    {
			printf("1");
		    }
		    else
		    {
			printf("0");
		    }
		}
		printf("\n");

		//Prompt if the program is to be repeated
		printf("Do you want to continue Y or N ? ");
		scanf("%c \n", &option);
	}while (option == 'Y' || option == 'y');

}

// Declaring the bitwise function to evaluate the given condition
int bitwise_lsb(int num, int val, int a, int sum)
{

	return (num & ~(~0 << a)) << sum | val & ~(~(~0 << a) << sum);

}

// Declaring function for validating a and b
int is_valid(int a, int b)
{

    if ((0 <= a && a <=31) && (a <= b && b <= 31))
	{
		return VALID;
	}
	else
	{
	    return INVALID;
	}
}

//Declaring function for validating the entered number
int is_valid1(int stat)
{
	if (stat != 1)
	{
		printf("Invalid Number Entered \n");
		return INVALID;
	}
	else
	{

	return VALID;
	}
}
