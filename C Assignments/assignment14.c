/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : Implement Bitwise Functions
  *Input: gcc assignment14.c
 *Output:
  Enter a number 
 12
Binary Form of the Number 
 00000000000000000000000000001100
Enter the number of bits 
 3
Select the bitwise function:
1. int get_nbits
2. int replace_nbits
3. int get_nbits_from_position
4. int replace_nbits_from_position
5. int toggle_nbits_from_position
6. print_nbits
3
Enter the position 
 5
Updated Value after the operation: 1
00000000000000000000000000000001
Do you want to continue : Y or N ? 
 n

 */ 


#include<stdio.h>
#include<stdlib.h>
#define INVALID 0
#define VALID	1

//Declaring the functions
int get_nbits(int, int);
int replace_nbits(int, int, int);
int get_nbits_from_position(int, int, int);
int replace_nbits_from_position(int, int, int, int);
int toggle_bits_from_position(int, int, int);
int print_bits(unsigned int, int);
int is_valid(int, int);
void printbits(int);


int main()
{
	
	//Declaring the variables
	int num,i, no_of_bits, func, pos, val, temp, status, status1, res;
	char option;

	do
	{

		//Asking user to enter the number
		printf("Enter a number \n ");
		status = scanf("%d", &num);

		if(is_valid(status, num) == INVALID)
		{
			return 0;
		}
		//Printing the binary form of the number
		printf("Binary Form of the Number \n ");
		for(i=31;i>=0;i--)
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


		//Asking user to enter the number of bits
		printf("Enter the number of bits \n ");
		status = scanf("%d", &no_of_bits);

		if (is_valid(status, no_of_bits) == INVALID)
		{
			return 0;
		}
		
		//Displaying the menu to the user
		printf("Select the bitwise function:\n1. int get_nbits\n2. int replace_nbits\n3. int get_nbits_from_position\n4. int replace_nbits_from_position\n5. int toggle_nbits_from_position\n6. print_nbits\n");
		scanf("%d", &func);
	
		switch (func)
		{
			case 1:
				//Calling get_nbits function
				temp = get_nbits(num, no_of_bits);
				break;

			case 2: 
				//Asking the user to enter the value
				printf("Enter the value \n ");
				status = scanf("%d", &val);
				//Calling the validation function
				if (is_valid(status, val) == INVALID)
				{
					return 0;
				}
				printf("The binary form of the Value \n ");
				for(i=31;i>=0;i--)
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

				//Calling replace_nbits function
				temp = replace_nbits(num, no_of_bits, val);
				break;

			case 3:
				//Asking the user to enter the position
				printf("Enter the position \n ");
				status = scanf("%d", &pos);
				//Calling the validation function
				if (is_valid(status, pos) == INVALID)
				{
					return 0;
				}
				//Calling the get_nbits_from_position function
				temp = get_nbits_from_position(num, no_of_bits, pos);
				break;

			case 4:
				//Asking the user to enter the value
				printf("Enter the value \n ");
				status = scanf("%d", &val);
				//Calling the  validation function
				if (is_valid(status, val) == INVALID)
				{
					return 0;
				}
				printf("The binary form of the value \n ");
				for(i=31;i>=0;i--)
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

				//Asking the user to enter the value
				printf("Enter the position \n ");
				status = scanf("%d", &pos);
				//Call validation function
				if (is_valid(status, pos) == INVALID)
				{
					return 0;
				}
				//Call replace_nbits_from_position function
				temp = replace_nbits_from_position(num, no_of_bits, val, pos);
				break;

			case 5: 
				//Asking the user to enter the position
				printf("Enter the position \n ");
				status = scanf("%d", &pos);
				//Calling the  validation function
				if (is_valid(status, pos) == INVALID)
				{
					return 0;
				}
				//Calling the  toggle_bits_from_position function
				temp = toggle_bits_from_position(num, no_of_bits, pos);
				break;

			case 6: 
				//Call print_bits
				temp = print_bits(num, no_of_bits);
				break;

			default: 
					printf("Invalid number entered \n");					}
		//Displaying the result after getting the case input
		printf("Updated Value after the operation: %d\n", temp);
		for(i=31;i>=0;i--)
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

		//Asking if the user wants to continue or not
		printf("Do you want to continue : Y or N ? \n ");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

}

//Defining the functions as per the case operation
int get_nbits(int num, int no_of_bits)
{
	return num & ~(0xFF << no_of_bits);
}



//Defining replace n bits from the given value to the number
int replace_nbits(int num, int no_of_bits, int val)
{
	return ((num & 0xFF << no_of_bits) | (val & ~(0xFF << no_of_bits)));
}


//Defining get n bits from position
int get_nbits_from_position(int num, int no_of_bits, int pos)
{
	return (num & (~(0xFF << no_of_bits) << pos - no_of_bits + 1)) >> pos - no_of_bits + 1;
}



//Defining replace nbits from position
int replace_nbits_from_position(int num, int no_of_bits, int val, int pos)
{
	return num & ~(~(0xFF << no_of_bits) << pos - no_of_bits + 1) | (val & ~(0xFF << no_of_bits)) << pos - no_of_bits + 1;	
}


//Defining toggle bits function
int toggle_bits_from_position(int num, int no_of_bits, int pos)
{
	return num ^ (~(~0 << no_of_bits)) << pos - no_of_bits + 1;
}


//Defining print_bits function
int print_bits(unsigned int num, int no_of_bits)
{
	return num & ~(0xFF << no_of_bits);
}

//Defining the validating function
int is_valid(int stat, int var)
{
	if (stat != 1 || var <=0)
	{
		printf("Invalid number entered \n");
		return INVALID;
	}
	return VALID;
}

