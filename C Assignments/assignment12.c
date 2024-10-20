/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to print bits of a number
  *Input: gcc assignment12.c
 *Output:
 Enter the number
 10
The 32 bit Binary Representation of the number is :
 00000000000000000000000000001010
The two complement of the number is
 11111111111111111111111111110110
Do you want to continue : Y or N ? N

Enter the number 
 -1
The 32 bit Binary Representation of the number is : 
 11111111111111111111111111111111
The two complement of the number is 
 00000000000000000000000000000001
Do you want to continue : Y or N ? n



 */ 



#include<stdio.h>
int main()
{
    //Declaring variables
int i,num;
int onescomp,twoscomp;
char option;
//do while option
do
{
printf("Enter the number \n ");
scanf("%d",&num);
printf("The 32 bit Binary Representation of the number is : \n " );
//for loop for printing one's complement
for (i=31;i>=0;i--)
{
    //Validating if the operation of num and (1<<i) is equal to 1
	if (num & (1<<i) )
	{
	    //Print 1
	    printf("1");
	}
	else
	{
	    //Print 0
	    printf("0");
	}

}
printf("\n");
//Calculation of one's complement
onescomp=~(num);
//Calculation of two's complement
twoscomp=(onescomp+1);
printf("The two complement of the number is \n ");
//for loop for printing two's complement
for (i=31;i>=0;i--)
{
   //Validating if the operation of two's compl and (1<<i) is one 
    if(twoscomp & (1<<i) )
    {
	//Print 1
	printf("1");
    }
    else
    {
	//Print 0

	printf("0");
    }
}
printf("\n");

//Asking user to continue or not
printf("Do you want to continue : Y or N ? ");
getchar();
scanf("%c",&option);

//Asking the user to continue or not
if ( option == 'Y' || option == 'y' )
{
    //continue option
    continue;
}
else
{
    //break option
    break;
}
}while(1);
return 0;
}





