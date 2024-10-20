/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to generate AP,GP,HP series
  *Input: gcc assignment7.c -lm
 *Output:
 Enter the requiredvalues:
a(First Term) : 2
r(Ratio/Difference) : 3
n(no. of terms) : 4
The entered number is not a valid number
AP:
2
5
8
11

GP:
2
6
18
54

HP:
0.500000
0.200000
0.125000
0.090909


 */ 

#include <stdio.h>
#include <math.h>

int main()
{
    /*Declaring integer and character variables*/
    int AP, GP, HP, a, r, n;
    int i,p;
    char option;

	do
	{

		/*Asking the user to enter the required values */
		printf("Enter the requiredvalues: \n");
		printf("a(First Term) : ");
		scanf("%d", &a);
		printf("r(Ratio/Difference) : ");
		scanf("%d", &r);
		printf("n(no. of terms) : ");
                scanf("%d", &n);

		/*Calculating the range p with the help of for loop */
		for ( i=1,p=1;i<=20;i++)
		{
		    p=2*p;
		}

		/*Checking if the first term is in the range or not */
		if (a > p)
			{
			printf("The entered number is not a valid number\n");
		}
			if (a < p)
			{
			printf("The entered number is not a valid number\n");
		}


		/*Checking if the ratio difference is in limit or not */
		if ((r > p) || (r < -p))
		{
			printf("The entered number is not a valid number\n");
			return 1;
		}
		/* Checking if the number of values entered is negative or not */
		if ( n < 0 )
			{
			printf("Please enter a positive number\n");
		
		}

		/*Checking if the number of values entered is exceeding the range */
		if (n > p)
			{
			printf("Please enter a number within the range\n");
			
		}


		/*Logic of Arithmetic progression */
		printf("AP:\n");
		for ( i = 0; i < n; i++ ) 
		{
			printf("%d\n", a+i*r);
		}
		printf("\n");

		/*Logic of Geometric Progression */
		printf("GP:\n");
		int temp = a;
		int sum = 0;
		for(i=0;i<n;i++)
		{
		printf("%d \n",temp);
			
		sum=sum+temp;
		temp=temp*r;
		}
		printf("\n");

		/*Logic of Harmonic Progression */
		printf("HP:\n");
		for ( i = 0; i < n; i++ ) 
		{
			printf("%f\n", (double)1/(a+i*r));
		}
		printf("\n");

		/*Asking the user if he wants to continue or not */
        printf("Do you want to continue:Y or N \n");
	getchar();
        scanf("%c", &option);

        if ( option == 'y' )
        {
            continue;
        } else
        {
            break;
        }

    } while (1);

    return 0;
}
