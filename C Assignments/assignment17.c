/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to swap two variables using pass by reference method
  *Input: gcc assignment17.c
 *Output:
 Enter the first number
 12
Enter the second number
 24
The numbers before swapping are number 1 :12 and number 2 :24
 The numbers after swapping are number 1:24 and number 2 :12
 Do you want to continue ?
 n

 */ 


#include<stdio.h>
//Function definition for swapping the two numbers
void swap( int *num1 , int *num2)
 {
  //XOR the contents of num1 and num2 and storing it into num1
  *num1 = *num1 ^ *num2;
  //XOR the contents of num1 and num2 and storing it into num2
  *num2 = *num1 ^ *num2;
  //XOR the contents of num1 and num2 and storing it into num1
  *num1 = *num1 ^ *num2;
  }

int main()
{
//Declaring variables
int i,p;
int num1,num2;
int option;
for(i=1,p=1;i<=20;i++)
{
    p=2*p;
}
do
{
    //Asking users for entering the numbers
printf("Enter the first number \n ");
scanf("%d",&num1);
printf("Enter the second number \n ");
scanf("%d",&num2);
if(num1 > p || num1 < -p)
{
    printf("Enter a valid number \n ");
}
if(num2 > p || num2 < -p)
{
    printf("Enter a valid number \n ");
}

//Before swapping
printf("The numbers before swapping are number 1 :%d and number 2 :%d \n ",num1,num2);
//Calling the function swap
swap(&num1,&num2);
//After swapping
printf("The numbers after swapping are number 1:%d and number 2 :%d \n " ,num1,num2);
//Asking user if he wants to continue or not
printf("Do you want to continue ? \n ");
scanf("%d",&option);
if( option == 'Y' || option == 'y' )
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



