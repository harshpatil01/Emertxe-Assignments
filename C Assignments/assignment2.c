/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description :
 *Input: gcc assignment2.c
 *Output:
 Enter a number until which range you want to print 
4
The fibonacci series is: 
 0
1
1
2
3
Do you want to continue : Y or N ?y
Enter a number until which range you want to print 
1
The fibonacci series is: 
 0
1
1
Do you want to continue : Y or N ?y
Enter a number until which range you want to print 
-5
The fibonacci series is: 
 0
1
-1
2
-3
5
Do you want to continue : Y or N ?n

 */ 

#include<stdio.h>
int main()
{
/*Declaring variables such as integers and characters*/
int limit;
int i,p,sum;
char option;

/*Calculating the required range i.e -2^20 < p <2^20*/
for (i=1,p=1;i<=20;i++)
{
    p=2*p;
}

/*Declaration of do-while loop*/
do
{
/*Asking user to enter the limit till which series is to be generated*/
printf("Enter a number until which range you want to print \n");
scanf("%d",&limit);
if( (limit>p) || (limit<-p) )
{
    printf("The number is out of range");
}
else 
{
printf("The fibonacci series is: \n ");
/*Initialisation of first two variables that is num1 and num2 */
int num1=0;
int num2=1;
int sum=0;
/*Declaration of while loop*/
if(limit>0)
{
while (num1<=limit)
{
/*Fibonacci Logic*/
printf("%d\n",num1);
sum=num1+num2;
num1=num2;
num2=sum;
}
}
else
{
while(num1 >= limit && num1 <= -limit)
{
   printf("%d\n",num1);
   sum=num1-num2;
   num1=num2;
   num2=sum;
}
}
}
/*Asking the user whether to continue or not*/
printf("Do you want to continue : Y or N ?" );
getchar();
scanf("%c",&option);
}while( option == 'y' || option == 'Y' );


return 0;



}
