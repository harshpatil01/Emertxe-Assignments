/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to implement calc_mean for all the data types
  *Input: gcc assignment44.c
 	   ./a.out 5
 *Output:
 Select an option:
1.short 
2.int
3.float
4.double
2
Enter th 5 values of the array : 
10
20
30
40
50
Mean of the array: 30.000000
Do you wish to continue Y or N ? 
 n





 */ 



#include<stdio.h>
#include<stdlib.h>

//Declarationof functions
float s_mean(void *, int);
float i_mean(void *, int);
float f_mean(void *, int);
double d_mean(void *, int);

int main(int argc , char *argv[])
{
	
	//Declaring the variables
	int select, i;
	int num;
	float p;
	float  i_p;
	float f_p;
	float d_p;
	short *array;
	int *i_array;
	float *f_array;
	double *d_array;
	   


	char option;

	char* a=argv[1];
	num = atoi(a);

	do
	{
		//Printing the menu
		printf("Select an option:\n1.short \n2.int\n3.float\n4.double\n");
		scanf("%d", &select);

		switch(select)
		{
			case 1:
		//Allocating the array memory
				array = malloc(num * sizeof(short));
				
					//Asking the user to enter the values of the array
					printf("Enter th %d values of the array : \n",num);					
					for (i = 0; i < num; i++)
					{
					
						scanf("%hd", &array[i]);
					}
					//Calling the mean function
					p = s_mean(array, num);
					//Display the result
					printf("Mean of the array: %f\n", p);
					break;

			case 2:
					//Allocating the array memory
					i_array = malloc(num * sizeof(int));
				
					//Asking user to enter the values of the array
				printf("Enter th %d values of the array : \n",num);
					for (i = 0; i < num; i++)
					{
						scanf("%d", &i_array[i]);
					}
					//Calling the mean function
					i_p = i_mean(i_array, num);
					//Display the result
					printf("Mean of the array: %f\n", i_p);
					break;

			case 3:
					//Allocating the array memory
					f_array = malloc(num * sizeof(float));
					//Asking the user to enter the values of array
					printf("Enter th %d values of the a    rray : \n",num);
					for (i = 0; i < num; i++)
					{
						scanf("%f", &f_array[i]);
					}
					//Calling the mean function
					f_p = f_mean(f_array, num);
					//Display the result
					printf("Mean of the array: %f\n", f_p);
					break;

			case 4:
					//Allocating the array memory
					d_array = malloc(num * sizeof(double));
					//Asking the user to enter the values of the array
			printf("Enter th %d values of the a    rray : \n",num);
					for (i = 0; i < num ; i++)
					{
						scanf("%lf", &d_array[i]);
					}
					//Calling the mean function
					d_p = d_mean(d_array, num);
					//Display the result
					printf("Mean of the array: %lf\n", d_p);
					break;

			default:
					printf("Inavlid entry \n");
					return 0;
		}

		//Prompt to continue or not
		printf("Do you wish to continue Y or N ? \n ");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');
}

//Defining the short mean function
float s_mean(void *a, int num)
{
	int i;
	short sum = 0;
	float mean;

	for (i = 0; i < num ; i++)
	{
		sum += *((short *)a + i);
	}

	mean = (float)sum / num;
	return mean;
}
//Defining the int mean function
float i_mean(void *a, int num)
{
	int i, sum = 0;
	float mean;

	for (i = 0; i < num ; i++)
	{
		sum += *((int *)a + i);
	}

	mean = (float)sum / num;
	return mean;
}
//Defining the float mean function
float f_mean(void *a, int num )
{
	int i;
	float mean, sum = 0;

	for (i = 0; i < num ; i++)
	{
		sum += *((float *)a + i);
	}

	mean = sum / num ;
	return mean;
}
//Defining the double mean function
double d_mean(void *a, int num )
{
	int i;
	double mean, sum = 0;

	for (i = 0; i < num ; i++)
	{
		sum += *((double *)a + i);
	}

	mean = sum / num ;
	return mean;
}
