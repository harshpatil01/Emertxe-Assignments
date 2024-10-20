/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to check if number is odd or even
 *Input:gcc assignment1.c 
 	./a.out
 *Output: 
Enter a number:
12
The number is even and positive
Do you want to continue : Y or N 
y
Enter a number:
13
The number is odd and positive
Do you want to continue : Y or N 
N

 */ 

#include<stdio.h>
int main()
{
/*Declaring variables such as integer and character*/
int num,i;
int p;
int flag;
char option;

/*For Loop generating the range number i.e -2^20 < p < 2^20*/
for(i=1,p=1;i<=20;i++)
{
    p=p*2;
}

/*Declaring do while loop*/
do
{
    /*Asking the user to enter a number*/
    printf("Enter a number:\n");
    scanf("%d",&num);
/*Checking if the number is in the mentioned range or not*/
if ( (num > p) || (num < -p) )
{
    printf("Error Please enter the number in the range");
}
/*If the number is greater than zero*/
else if (num>0)
{
    /*If the number divided by 2  is equal to zero (modulus) */
    if ( num%2 == 0 )
    {
	/*Printing the statement*/
	printf("The number is even and positive\n");
    }
    else
    {
	printf("The number is odd and positive\n");
    }
}
/*If the number is less than zero*/
else if (num<0)
{
    /*If the modulus of the number is equal to zero*/
    if ( num%2 == 0)
    {
	printf("The number is even and negative\n");
    }
    else
    {
	printf("The number is odd and negative\n");
    }
}
else
{
    printf("The entered number is zero");
}

/*Asking if the user wants to continue the loop or exit*/
printf("Do you want to continue : Y or N \n");
/*Accepting the character from the user */
getchar();
scanf("%c",&option);
}while(option == 'y' || option == 'Y');

return 0;
}


