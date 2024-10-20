/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to check the number is odd or even.
 *Input: gcc assignment3.c
 *Output:
 Enter a number : 
3
sum:1 
The number 3 is not a perfect number
Do you want to continue : Y or N 
y
Enter a number : 
6
sum:6 
The number 6 is a perfect number
Do you want to continue : Y or N 
n

*/ 

#include<stdio.h>
int main()
{
/*Declaration of variables and characters*/
    int num;
    int sum=0;
    int i;
    char option;
    /*Declaration of do while loop*/
do
{
/*Asking user to enter the input*/
printf("Enter a number : \n");
scanf("%d",&num);
/*Asking the user to enter a positive number*/
if (num < 0 )
{
    printf("Please enter a positive number");
}
else if ( (num > 0) || (num < 220) )
{

/*Logic of Perfect Number*/    
for( i =1 ;i<num;i++)
{
	    /*Checking if the number is divisible by every value of i until the ententered number */
       if( (num%i) == 0 ) 
       {
	/*Adding the value of i that is number divisible by the given number*/
	sum+=i;
       }
}  
	/*If the sum is equal to the entered number by the user then it enters the loop*/
        printf("sum:%d \n",sum);
	if (sum == num )
	{
          /*Printing the statements if its a perfect number or not*/
	  printf("The number %d is a perfect number\n",num);
        }
	else
	{
          printf("The number %d is not a perfect number\n",num);
	}

}
/*Asking the user to continue or not */
printf("Do you want to continue : Y or N \n");
/*Accepting the Character from the user */
getchar();
scanf("%c",&option);
if ( option == 'Y' || option == 'y' )
{   
    sum=0;
    continue;
}
else
{
    break;
}

}while(1 );
return 0;
}

