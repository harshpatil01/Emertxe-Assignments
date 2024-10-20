/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to find factorial using the recursive method
  *Input: gcc assignment19.c
 *Output:
Enter the number
7
Factorial : 5040




 */ 


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,p;
    char o;

    for (i=1,p=1;i<=20;i++)
    {
	p=2*p;
    }

  
    static int  num,n,temp=1,returnedvalue,flag=1;
    
    if (flag)
    {
	printf("Enter the number \n ");
	scanf("%d",&num);
	if( (num<0) || (num>p) )
	{
	printf("Invalid Number Entered \n");
	return 0;
	}
	flag=0;
    }
    temp=temp*num--;
   }
do
{
    if(num<1)
    {
	printf("Factorial :%d \n ",temp);
    }
    else
    {
	main();
    }

    printf("Do you want to continue or not : Y or N ? \n");
    getchar();
    scanf("%c",&o);
    }while( o == 'y' || o == 'Y' );



