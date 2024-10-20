/*Name : Harsh Patil
 *Date : 04-09-2021
 *Description : Variance calculation with static arrays & with dynamic arrays
  *Input: gcc assignment35.c
 *Output:
Enter the size
 10
Enter your choice:
 1.Static
 2.Dynamic
1
Enter your values (X) :
a[0] :
9
a[1] :
12
a[2] :
15
a[3] :
18
a[4] :
20
a[5] :
22
a[6] :
23
a[7] :
24
a[8] :
26
a[9] :
31
sum of the arrays:
200
Mean value:
20
 D = X - mean:
-11
-8
-5
-2
0
2
3
4
6
11
D^2:
121
64
25
4
0
4
9
16
36
121
Variance:
41
Do you want to continue : Y or N ?
 n

 */



#include <stdio.h>
#include <stdlib.h>

//Declare the function
void populate (int *, int);
int sum(int *, int n);
void d(int *p, int n, int mean);
int Variance(int *p, int n);

int main()

{
	//Declare the variables
	unsigned int n, avg, choice, total, mean, meanvar;
	char option;

	do
	{
		//Asking the user to enter the choice
		printf("Enter the size \n ");
		scanf("%d", &n);

		//Declare the array
		int a[n]; //Static acclocation
		int *b; //Dynamic allocation

		//Asking the user to enter the choice from menu
		printf("Enter your choice:\n 1.Static\n 2.Dynamic\n");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				//Calling the function for populating the array
				populate(a,n);

				//Calling the function to add the elements of the array
				total = sum(a,n);

				//Displaying the total
				printf("%d\n", total);

				//Displaying the mean
				mean = total/(sizeof(a)/sizeof(a[0]));
				printf("Mean value: \n");
				printf("%d\n", mean);

				//Calling the function for D populating array
				d(a,n,mean);

				//Calling the variance function
				avg = Variance(a,n);
				printf("Variance:\n");

				//Displaying the Variance
				meanvar= avg/(sizeof(a)/sizeof(a[0]));
				printf("%d\n", meanvar);
				break;

			case 2:
				//Dynamically allocating the memory
				b = (int *)malloc(n * sizeof(int));
				//Populating the array
				populate(b, n);

				//Calling the function to add the elements of the array
				total = sum(b,n);
				printf("%d\n", total);
				mean = total/n;

				//Displaying the mean value
				printf("Your Mean value : \n");
				printf("%d\n", mean);

				//Calling the function for D populating array
				d(b,n,mean);
				//Calling the variance function
				avg = Variance(b,n);
				printf("Your average for variance:\n");
				meanvar= avg/n;
				printf("%d\n", meanvar);
				break;

			default:
				printf("Invalid\n");
		}

		//Asking the user to continue the menu or not
		printf("Do you want to continue : Y or N ? \n ");
		scanf("\n%c", &option);
	}
	//Condition for selecting the options whether to continue or not
	while (option == 'Y' || option == 'y');

}

//Populating the array
void populate(int *p, int n)
{
	int i;
	printf("Enter your values (X) : \n");
	for (i = 0; i < n; i++)
	{
	    printf("a[%d] : \n",i);
		scanf("%d", p++);
	}
}


//Defining the sum function of the values in the array
int sum(int *p, int n)
{
	int sum = 0;
	int i;
	printf("sum of the arrays: \n");
	for (i = 0; i < n; i++)
	{
		sum += *(p++);
	}
	return sum;
}

//Defining the D function
void d(int *p, int n, int mean)
{
	printf(" D = X - mean:\n");
	int i, value[n];
	for (i = 0; i < n; i++)
	{
		*(p+i) = *(p + i) - mean;
		printf("%d", *(p + i));
		printf("\n");
	}

	//Printing for Summation of d2
	printf("D^2: \n");
	for (i = 0; i < n; i++)
	{
		*(p + i) = (*(p + i)) * (*(p + i));
		printf("%d\n", *(p + i));
	}
}

//Sum of the variance values
int Variance(int *p, int n)
{
	int i;
	int summation;
	for (i = 0; i < n; i++)
	{
		summation += *(p++);
	}
	return summation;
}
