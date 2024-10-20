/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to generate fibonacci numbers using recursion without using static keyword and global variables
  *Input: gcc assignment21.c
 *Output:
Enter the limit : 
 5 
Fibonacci Series of the number 
  0 
 1 
 1 
 2 
 3 
 5 
 Do you want to continue : Y or N ? 
 y
Enter the limit : 
 1
Fibonacci Series of the number 
  0 
 1 
 Do you want to continue : Y or N ? 
 y
Enter the limit : 
 -9
Fibonacci Series of the number 
  0 
 1 
 -1
2
-3
5
-8
Do you want to continue : Y or N ? 
 n





 */ 


#include<stdio.h>
int main()
{
//Declaring variables without the use of static variables
 int firstnum=0;
 int secondnum=1;
 int limit;
 char option;

 //Defining the fibonacci function
void fibonacci( int firstnum,int secondnum,int limit)
{
 int sum;
 //Validating if the limit entered is positive or not
 if (limit > 1)
 {
     //Calculating the sum of firstnum and secondnum
     sum=firstnum+secondnum;
     //Validating if the sum is less than equal to limit
     if ( sum <= limit)
     {
	 //Printing the sum
	 printf("%d \n ",sum);
	 //Calling the function by passing arguments of secondnum , sum and limit
	 fibonacci(secondnum,sum,limit);
     }
    
 }
 //Validating if the limit entered is negative or not
 else if (limit < 1)
 {
     //Calculation of negative fibonacii series
     sum=firstnum-secondnum;
     //If the sum is within the limit
     if ( sum>=limit && -sum >= limit )
	{
	    //Printing the sum
	    printf("%d\n",sum);
	    //Calling the function
	    fibonacci(secondnum,sum,limit);
	}

 }
}

//Declaring the do while loop
do
{
      //Declaring the variables
      int firstnum=0;
      int secondnum=1;
     int limit;
	//Asking users to enter the limit till which series is to be generated
          printf("Enter the limit : \n ");
          scanf("%d",&limit);
          printf("Fibonacci Series of the number \n  ");
	  //Printing the first number
         printf("%d \n ",firstnum);
	 //Printing the second number
         printf("%d \n ",secondnum);
	//Calling the fibonacci function and passing arguments of firstnum,secondnum and limit 
        fibonacci(firstnum,secondnum,limit);
//User being asked prompt to continue or not ( yes or no )
printf("Do you want to continue : Y or N ? \n ");
getchar();
scanf("%c",&option);

//If the option is yes or no 
if ( option == 'y' || option == 'Y' )
{
    //continue
    continue;
}
else
{
    //break
    break;
}

}while(1);

 return 0;

}





