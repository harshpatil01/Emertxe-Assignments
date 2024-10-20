/*Name : Harsh Patil
 *Date : 03-09-2021
 *Description : WAF read_int to read an integer
  *Input: gcc assignment30.c
 *Output:
Enter the number:
 123
Entered Number is:123
Do you want to continue : Y or N ?
 y
Enter the number:
 123a
Entered Number is:123
Do you want to continue : Y or N ?
 y
Enter the number:
 a123
Entered Number is:0
Do you want to continue : Y or N ?
y
Enter the number:
 -1234
Entered Number is:-1234
Do you want to continue : Y or N ?
 n

*/

#include<stdio.h>
int main()
{
	char option;

	do
	{

		char ch_digit;
		int result = 0, flag = 0;

		//Asking the user to enter the number
		printf("Enter the number: \n ");

		//get the input from the user until new-line character
		while((ch_digit = getchar()) != '\n')
		{
			if(ch_digit == '-')
			{
				//rise the flag if the given character has '-'
				flag = 1;
			}
			else if(ch_digit < '0' || ch_digit > '9')
			{
				break;
			}
			else if (ch_digit >= '0' && ch_digit <= '9')
			{
				//Converting the character into integers
				ch_digit = ch_digit - 48;

				//add the digits to get an number and store back in result
				result = result * 10 + ch_digit;
			}

		}

		//print -negative number if flag is rised
		if(flag)
		{
			printf("Entered Number is:%d", (result * (-1)));
		}
		else
		{
			printf("Entered Number is:%d", result);
		}

		printf("\nDo you want to continue : Y or N ? \n ");
		scanf(" %c", &option);
		getchar();
	}while (option == 'Y' || option == 'y');

	return 0;
}
