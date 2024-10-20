/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to implement Circular leftand shift
 *Input: gcc assignment17.c
 *Output:

 Enter the number
12
Enter the no of bits you want to shift 
3
------Menu------- 
1.Circular left shift 
2.Circular right shift 
Enter the option 
2
Right Circular Shift 
 Before Shift 
 00000000000000000000000000001100
After right shift 
 10000000000000000000000000000001
Do you want to continue : Y or N ? n


Enter the number
-12
Enter the no of bits you want to shift 
3
------Menu------- 
1.Circular left shift 
2.Circular right shift 
Enter the option 
2
Right Circular Shift 
 Before Shift 
 11111111111111111111111111110100
After right shift 
 10011111111111111111111111111110
Do you want to continue : Y or N ? n



 */ 


#include<stdio.h>
#define INT_BITS 32
int main()
{
    //Declaring variables
unsigned int num;
int n;
int i;
int option;
char o;
int result;
//Do while loop
do
{
    //Asking user to enter the number
printf("Enter the number\n");
scanf("%d",&num);
//Asking the user to enter the number of bits by which the number 
printf("Enter the no of bits you want to shift \n");
scanf("%d",&n);
//Displaying the menu
printf("------Menu------- \n");
printf("1.Circular left shift \n");
printf("2.Circular right shift \n");
printf("Enter the option \n");
scanf("%d",&option);
//Declaring the function of left shift
unsigned int leftshift(unsigned int num,unsigned int n)
{
	result=( num << n) | ( num >> (32-n));
	return result;
}
//Declaring the function of right shift
unsigned int rightshift(unsigned int num ,unsigned int n)
{
    result=( num >> n) | ( num << (32-n));
    return result;
}

//Switch case function
switch(option)
{
  case 1 :
      printf("Left Circular Shift \n");
	  printf("Before Shift \n");
	  //Printong in binary form
      for (i=31;i>=0;i--)
      {
	  if(num&(1<<i))
	  {
	      printf("1");
	  }
	  else
	  {
	      printf("0");
	  }
      }
      printf("\n");
      //Calling the left shift function
      leftshift(num,n);
      //Printing in binary form
      printf("After shift \n ");
      for (i=31;i>=0;i--)
        {
            if(result&(1<<i))
            {
                printf("1");
            }
            else
            {
               printf("0");
            }
        }
      printf("\n");

      break;
  case 2:
      printf("Right Circular Shift \n ");
      printf("Before Shift \n ");
      for (i=31;i>=0;i--)
        {
            if(num&(1<<i))
            {
                printf("1");
            }
            else
            {
               printf("0");
            }
        }
      printf("\n");
	//Calling the right shift function
	rightshift(num,n);
	printf("After right shift \n ");
	for (i=31;i>=0;i--)
        {
            if(result&(1<<i))
           {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
	printf("\n");

      break;
  default:
      printf("Invalid Option \n ");
}

//Asking user if he wants to continue or not
printf("Do you want to continue : Y or N ? ");
getchar();
scanf("%c",&o);

//If the user's option is y or Y
if ( o == 'Y' || o == 'y' )
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
