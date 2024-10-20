/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP 
  *Input: gcc assignment31.c
 *Output:
  Choose the following option 
 1.Float 
 2.Double 
 1
Enter the number 
 2.3
Sign	Exponent	Mantissa 
 0	10000000	00100110011001100110011
Do you want to continue : Y or N ?  
 y
Choose the following option 
 1.Float 
 2.Double 
 1
Enter the number 
 -13.3125
Sign	Exponent	Mantissa 
 1	10000010	10101010000000000000000
Do you want to continue : Y or N ?  
 y
Choose the following option 
 1.Float 
 2.Double 
 2
Enter the number 
 2.3
Sign	Exponent	Mantissa 
 0	10000000000	0010011001100110011001100110011001100110011001100110
Do you want to continue : Y or N ?  
 n

 */ 

#include<stdio.h>
#include<stdlib.h>
//Declaring functions
void floattobinary( int * );
void doubletobinary( long int *);

int main()
{
    //Declaring variables
    int option;
    float num1;
    double num2;
    char o;
    //do while loop
    do
    {
	//Displaying the menu
    printf("Choose the following option \n 1.Float \n 2.Double \n ");
     scanf("%d",&option);
     //switch case declaration
    switch(option)
    {	
	case 1 :
	    //Asking user to enter the number
	    printf("Enter the number \n ");
	    scanf("%f",&num1);
	    //Result Displaying
	    printf("Sign\tExponent\tMantissa \n ");
	    //Calling the float to binary function
	    floattobinary((int *)&num1);
	    break;
	case 2:
	    //Asking the user to enter the number
	    printf("Enter the number \n ");
	    scanf("%lf",&num2);
	    //Displaying the result
	    printf("Sign\tExponent\tMantissa \n ");
	    //Calling the double to binary function
	    doubletobinary((long int *)&num2);
	    break;

	default :
		printf("Enetered the invalid option , please enter valid option \n ");
		break;

   }
    //Asking the user to continue or not
    printf("Do you want to continue : Y or N ?  \n ");
    getchar();
    scanf("%c",&o);
    if ( o =='Y' || o == 'y' )
    {
	continue;
    }
    else
    {
	break;
    }

    }while(1);

}    

//Defining the function by passing the address as the argument
    void floattobinary( int *temp)
    {
	int count =0 ;
	//Defining the mask
	unsigned mask = 1 << ((sizeof(int)<<3)-1);
	for ( ;mask;mask>>=1)
	{
	    if ( count == 1 || count == 9 )
	    {
		printf("\t");
	    }
	    //Ternary condition to print the binary form
	    *temp&mask?printf("1"):printf("0");
	    //Incrementing the count by one
	    count++;
	}
	printf("\n");
    }

 //Defining the function by passing the address as the argument
   void doubletobinary( long int *temp)
      {
          int count =0 ;
	  //Defining the mask 1UL is unsigned long version of 1
          unsigned  long mask = 1UL << ((sizeof(long int)<<3)-1);
          for ( ;mask;mask>>=1)
          {
             if ( count == 1 || count == 12 )
              {
                  printf("\t");
              }
	     //Ternary condition to print the binary form
             *temp&mask?printf("1"):printf("0");
	     //Incrementing the count by one
	     count++;
          }
	  printf("\n");
      }








