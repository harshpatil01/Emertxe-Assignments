/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to print Hello in 'X' Format.
  *Input: gcc assign8.c
  	  ./a.out
 *Output: Enter the dimension used for Hello World 
Dimensions are : 
 20
Hello World                  Hello World
 Hello World                Hello World 
  Hello World              Hello World  
   Hello World            Hello World   
    Hello World          Hello World    
     Hello World        Hello World     
      Hello World      Hello World      
       Hello World    Hello World       
        Hello World  Hello World        
         Hello WorldHello World         
         Hello WorldHello World         
        Hello World  Hello World        
       Hello World    Hello World       
      Hello World      Hello World      
     Hello World        Hello World     
    Hello World          Hello World    
   Hello World            Hello World   
  Hello World              Hello World  
 Hello World                Hello World 
Hello World                  Hello World
 Do you want to continue : Y or N ? n
 */ 




#include<stdio.h>
int main()
//Defining maximum and minimum values for limit    
#define max 100
#define min 0    
{
//Declaration of variables such as integer and characters
int row,col,linecount;
char o;
char option;
//Declaration of do while loop
do
 {
     //Asking the user to enter the dimensions of the Hello World
     printf("Enter the dimensions for Hello World \n");
     printf("Dimensions are : \n ");
     scanf("%d",&linecount);
     //Checking if the count is valid or not
     if ( linecount > max )
     {
	 printf("linecount is not a valid number ");
     }
     if ( linecount < min )
     {
	 printf("Please enter a positive number ");
     }
     //Checking if the mod of the count is not equal to zero
     if(linecount%2 != 0)
     {
	 //Adding the linecount by 1 to make it even
	linecount=linecount+1;
     }
//Printing the space and hello world in the for loop
     for( row = 0; row<linecount;row++)
     {
	for (col=0;col<linecount;col++)
		{
		//Logic for printing 
		if (row == linecount/2 && linecount%2 != 0 )
		{
		    continue;
		}
		if ( row==col || col==(linecount-1)-row)
		{
		    printf("Hello World");
		}
		else
		{
		    printf(" ");
		}

		}

	if (row== linecount/2 && linecount%2!=0)
	{
	    continue;
	}
	else
	{
	   printf("\n");
	}
     }
	//Asking the user if he wants to continue or not
	printf(" Do you want to continue : Y or N ? ");
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
