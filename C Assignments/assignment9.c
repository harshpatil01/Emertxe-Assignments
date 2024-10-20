/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to find the mediam of two unsorted arrays
  *Input: gcc assignment8.c
 *Output:
  Enter the number of elements in the array 1 
 5
Enter the number of elements in the array 2 
 5
Entering elements of array 1 
 Enter 0 number of array 1: 3
Enter 1 number of array 1: 2
Enter 2 number of array 1: 8
Enter 3 number of array 1: 5
Enter 4 number of array 1: 4
Entering elements of array 2 
 Enter 0 number of array 2 : 12
Enter 1 number of array 2 : 3
Enter 2 number of array 2 : 7
Enter 3 number of array 2 : 8
Enter 4 number of array 2 : 5
After sorting the array 1 will be 
 2 
 3 
 4 
 5 
 8 
 After sorting the array 2 will be 
 3 
 5 
 7 
 8 
 12 
 The median of entered numbers of array 1 is 4.000000 
The median of entered numbers of array 2 is 7.000000 
The median of both the arrays is : 5.500000 
Do you want to continue : Y or N ? 
 n







 */ 

#include<stdio.h>
#define p 10
#define lim 10000
int main()
{
    int i,j,n1,n2,temp;
    signed int numberarray1[lim] ,numberarray2[lim];
    float median,median1,median2;
    char option;
do
{
//Asking user to enter the number of elements in the array
printf("Enter the number of elements in the array 1 \n ");
scanf("%d",&n1);



printf("Enter the number of elements in the array 2 \n ");
scanf("%d",&n2);

if ( (n1<0) || (n1>p) )
{
    printf("Please enter a number in the valid range");
}

if ( (n2<0) || (n2>p) )
 {   
     printf("Please enter a number in the valid range");
 }

printf("Entering elements of array 1 \n ");

 for (i=0;i<n1;i++)
{
    //Asking the user to enter the elements of the array 1
    printf("Enter %d number of array 1: ",i);
    scanf("%d",&numberarray1[i]);
}

printf("Entering elements of array 2 \n ");

for (i=0;i<n2;i++)
{
     //Asking the user to enter the elements of the array 2
     printf("Enter %d number of array 2 : ",i);
     scanf("%d",&numberarray2[i]);
 }


for (i=0;i<n1;i++)
{
    for(j=i;j<n1;j++)
    {
	//Logic for sorting the numbers in the ascneding order
	if(numberarray1[j]<numberarray1[i])
	{
	    temp=numberarray1[i];
	    numberarray1[i]=numberarray1[j];
	    numberarray1[j]=temp;
	}
    }
}


for (i=0;i<n2;i++)
 {
    for(j=i;j<n2;j++)
     {
         //Logic for sorting the numbers in the ascneding order
          if(numberarray2[j]<numberarray2[i])
          {
              temp=numberarray2[i];
              numberarray2[i]=numberarray2[j];
             numberarray2[j]=temp;
          }
     }
  }

printf("After sorting the array 1 will be \n ");
for(i=0;i<n1;i++)
{
printf("%d \n ",numberarray1[i]);
}


printf("After sorting the array 2 will be \n ");
for(i=0;i<n2;i++)
{
 printf("%d \n ",numberarray2[i]);
}




//Calculation of the median of array 1
//Calculation of median when the n is odd 
if ( (n1%2)!=0 )
{
    median1=numberarray1[n1/2];
}
else
{
    median1=((numberarray1[n1/2] + numberarray1[(n1/2)-1])/2);
}

//Printing the median of the entered numbers which are stored in an array1
printf("The median of entered numbers of array 1 is %f \n",median1);



//Calculation of the median of array 2
//Calculation of median when the n is odd 
 if ( (n2%2)!=0 )
 {
     median2=numberarray2[n2/2];
 }
else
 {
     median2=((numberarray2[n2/2] + numberarray2[(n2/2)-1])/2);
 }
 
 //Printing the median of the entered numbers which are stored in an array 2

 printf("The median of entered numbers of array 2 is %f \n",median2);


median=(median1+median2)/2;
printf("The median of both the arrays is : %f \n" ,median);

//Asking the user if he wants to continue or not
printf("Do you want to continue : Y or N ? \n ");
getchar();
scanf("%c",&option);

if( option == 'y' || option == 'Y' )
{
    continue;
}
else
{
    break;
}

}
while(1);
return 0;
}
