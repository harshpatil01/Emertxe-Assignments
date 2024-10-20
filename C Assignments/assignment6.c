/*
*Name : Harsh Patil
*Date : 29-07-2021
*Description : WAP to print all prime numbers which are smaller than or equal to n that is the entered number
*Input: gcc assignment6.c
*Output:
Enter the  number
12
After applying the method , prime numbers from 2 to 12 2
3
5
7
11
Do you want to continue : Y or N ? 
n
*/ 


#include<stdio.h>
#include<math.h>
#define lim 2000
int main()
{
    //Declaring variables
int n,i,j,p;
char option;
do
{
//Asking the user to enter the limit or number
printf("Enter the  number\n");
scanf("%d",&n);

for (i=1,p=1;i<=20;i++)
{
    p=2*p;
}
int numarray[lim];
   //Initialization of the numbers
if ( n > p || n < -p )
{
    printf("The entered number is in invalid range ");
}
else
{
//Arranging the numbers in a proper way
for (i=2;i<=n;i++)
{
    numarray[i]=i;
}
//Removing the multiples of i to get the prime numbers until the limit n
for (i=2;i<=n;i++)
{
    for(j=i;j<=n;j++)
    {
	numarray[(i*j)]=0;
    }

}

printf("After applying the method , prime numbers from 2 to %d ",n);

//Printing the prime numbers which are left out
for(i=2;i<=n;i++)
{
    if( numarray[i] != 0 )
    {
	printf("%d\n",numarray[i]);
    }
}

//Asking the user to continue or not
printf("Do you want to continue : Y or N ? \n");
getchar();
scanf("%c",&option);


if(option == 'Y' || option == 'y' )
{
    continue;
}
else
{
    break;
}
}
}while(1);
return 0;
}
