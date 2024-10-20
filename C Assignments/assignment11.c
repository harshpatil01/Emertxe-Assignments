/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to check if the number is even or odd using bitwise operators
 *Input: gcc assignment11.c
*Output:
 Enter a number:
6
The entered number  6  is even and positive 
 Do you want to continue : Y or N y
Enter a number:
-8
The entered number -8 is even and negative 
 Do you want to continue : Y or N y
Enter a number:
7
The entered number 7 is odd and positive 
 Do you want to continue : Y or N y
Enter a number:
0
Entered number is zero and zero is neither even nor odd 



*/





#include<stdio.h>
int main()
{
    /*Declaring Variables*/
int n;
char o;
/*Declaration of do while loop*/
do
{
    /*Asking the user to enter the number*/
printf("Enter a number:\n");
scanf("%d",&n);
//Validating if the number is positive or not
/*Checking if the AND operation of the entered number and 1 is equal to 1*/
//Validating if the number is zero or not
if( n == 0 )
{
    printf("Entered number is zero and zero is neither even nor odd \n ");
	break;
}


if( n&1 == 1  )
//Print the statements
{
    if( n > 0  )
    {
	printf("The entered number %d is odd and positive \n ", n);
    }
    else
    {
	printf("The entered number %d is odd and negative \n ", n);
    }
}
//Print the statements
else
{
    if ( n > 0)
	{
    printf("The entered number  %d  is even and positive \n ",n);
	}	
    else
    {
	printf("The entered number %d is even and negative \n ", n);
    }
}
/*Asking if the user wants to continue or not*/
printf("Do you want to continue : Y or N ");
getchar();
scanf("%c",&o);

if ( o == 'y' || o == 'Y' )
{
    continue;
}
    else
{
    break;
}

}while(1);

return 0;
}
