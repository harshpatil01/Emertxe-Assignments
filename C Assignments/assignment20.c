/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP for pre and post increment and passing int as the pointer
  *Input: gcc assignment20.c
 *Output:
Enter the number 
 3
------Menu------ 
 1.Post Increment 
 2.Pre  Increment 
 Enter the required option
 1
After the post increment 
 The result is :3 
 Continue : Y or N 
y
Enter the number 
 4
------Menu------ 
 1.Post Increment 
 2.Pre  Increment 
 Enter the required option
 2
After the pre increment 
 The result is : 5 
 Continue : Y or N 
n




 */ 


#include<stdio.h>
int main()
{
    //Declaring variables
unsigned int i;
unsigned int num;
unsigned int mask;
unsigned int result;
int option;
char o;
//do while loop
do 
{
    //Declaring preincrement function
int preincrement( unsigned int *i)
{

    mask=1;
    while( *i & mask) 
    {
	*i = *i & (~mask);
	mask = ( mask << 1 );
    }
    *i = ( *i | mask);
return *i;
}

//Declaring postincrement function
int postincrement( unsigned int *i)
{
 num = *i;  
 mask=1;
 while( *i & mask)
 {
     *i = *i & (~mask);
     mask = (mask << 1);
 }
 *i = ( *i | mask);
 return num;
}

//Asking user for the input
printf("Enter the number \n ");
scanf("%d",&i);
printf("------Menu------ \n ");
printf("1.Post Increment \n ");
printf("2.Pre  Increment \n ");
printf( "Enter the required option\n ");
scanf("%d",&option);

//switch case function
switch(option)
{
    case 1 :
	//After post increment
	printf("After the post increment \n ");
	//Calling the post increment
	result=postincrement(&i);
	printf("The result is :%d \n ",result);
	break;
    case 2:
	//After preincrement
	printf("After the pre increment \n ");
	//Calling the pre increment
	result=preincrement(&i);
	printf("The result is : %d \n ",result);
	break;
    default: printf("Invalid Option \n ");
	break;
}

//Asking user if he wants to continue or not
printf("Continue : Y or N \n");
getchar();
scanf("%c",&o);

if ( o == 'Y' || o == 'y' )
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
