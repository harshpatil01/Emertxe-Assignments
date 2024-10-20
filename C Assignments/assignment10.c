/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to find  which day of the year
 *Input: gcc assignment10.c
 *Output:
 Enter the value of count
120
1.Sunday
2.Monday
3.Tuesday
4.Wednesday
5.Thursday
6.Friday
7.Saturday
4
The 120 th day is a Friday
Do you want to continue : Y or N ?
N

Enter the value of count
1
1.Sunday 
2.Monday 
3.Tuesday 
4.Wednesday 
5.Thursday 
6.Friday 
7.Saturday 
1
The 1 th day is a Sunday
Do you want to continue : Y or N ? 
n




*/ 

#include<stdio.h>
int main()
{
//Declaring Integer and character variables
int option,count,calc;
char o;
do
{
//Asking the user to enter the count value
printf("Enter the value of count\n");
scanf("%d",&count);
//Asking the user to enter the first day 
printf("1.Sunday \n2.Monday \n3.Tuesday \n4.Wednesday \n5.Thursday \n6.Friday \n7.Saturday \n");
scanf("%d",&option);
//Checking if the option entered is not within the range
if ( option >0 && option <8 )
{
    if ( count>0 && count<366 )
    {
//Calculation of the day as per the user input of count and the first day
calc=((count+(option)) % 7 );
//Declaration of the switch case
switch(calc-1)
{

    case 1 :
	printf("The %d day is a Sunday\n",count);
	break;
    case 2 :
	printf("The %d  day is a Monday\n",count);
	break;
    case 3 :
	printf("The %d  day is a Tuesday\n",count);
	break;
    case 4 :
	printf("The %d  day is a Wednesday\n",count);
	break;
    case 5 :
	printf("The %d  day is a Thursday\n",count);
	break;
    case 6 :
	printf("The %d  day is a Friday\n",count);
	break;
    case 7 :
	printf("The %d  day is a Saturday\n",count);
	break;
    default:
        printf("Invalid Option\n");
}
}
}
//Asking the user if they want to continue or not 
printf("Do you want to continue : Y or N ? \n");
getchar();
scanf("%c",&o);

if( o == 'Y' || o == 'y')
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
