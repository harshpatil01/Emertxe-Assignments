/*Name : Harsh Patil
 *Date : 27-08-2021
 *Description : WAP to define a macro swap(t,x,y) that interchanges two argument of type t
  *Input: gcc assignment27.c
 *Output:

1. char 
 2. int 
 3. float 
 4. double
 Enter the option 
 1
Enter the first character : 
 a
Enter the second character : 
 b
Before swapping c1: a	 c2: b
After swapping c1: b	 c2: a

Do you want to continue : Y or N ? 
 y
1. char 
 2. int 
 3. float 
 4. double
 Enter the option 
 2
Enter the first integer : 
 1
Enter the second integer : 
 2
Before swapping i1: 1	i2: 2
After swapping i1: 2	i2: 1

Do you want to continue : Y or N ? 
 y
1. char 
 2. int 
 3. float 
 4. double
 Enter the option 
 3  
Enter the first float number : 
 2.3
Enter the second float number : 
 3.2
Before swapping f1: 2.300000	f2: 3.200000
After swapping f1: 3.200000	f2: 2.300000

Do you want to continue : Y or N ? 
 y
1. char 
 2. int 
 3. float 
 4. double
 Enter the option 
 4         
Enter the double character : 
 2.56786567
Enter the second character : 
 6.674567889
Before swapping d1: 2.567866	d2: 6.674568
After swapping d1: 6.674568	d2: 2.567866

Do you want to continue : Y or N ? 
 n

*/ 



#include<stdio.h>
//Defining the MACRO
#define SWAP(type,a,b)   { type temp = a;	     \
										a = b;		\
										b = temp;  \
}

int main()
{
int c;
char c1,c2;
int i1,i2;
double d1,d2;
float f1,f2;
char option;

do
{

printf("1. char \n 2. int \n 3. float \n 4. double\n ");


printf("Enter the option \n ");
scanf("%d",&c);

    switch(c)
    {
	case 1 :
	    //CHAR
	    //Printing the statements
	    printf("Enter the first character : \n ");
	    getchar();
	    scanf("%c",&c1);
	    printf("Enter the second character : \n ");
	    getchar();
	    scanf("%c",&c2);
       	printf("Before swapping c1: %c\t c2: %c\n", c1, c2);
	//Calling the swap function
	SWAP(char,c1, c2);
	
	//Display the result post swapping
	printf("After swapping c1: %c\t c2: %c\n", c1, c2);
	
	printf("\n");
	break;

	case 2 :
	//Integer

	printf("Enter the first integer : \n ");
              scanf("%d",&i1);
              printf("Enter the second integer : \n ");
             scanf("%d",&i2);

	printf("Before swapping i1: %d\ti2: %d\n", i1, i2);
	//Calling the swap function
	SWAP(int,i1, i2);

	//Display the result post swapping
	printf("After swapping i1: %d\ti2: %d\n", i1, i2);

	printf("\n");
	break;

	case 3 :
	//Float

	printf("Enter the first float number : \n ");
              scanf("%f",&f1);
              printf("Enter the second float number : \n ");
             scanf("%f",&f2);

	printf("Before swapping f1: %f\tf2: %f\n", f1, f2);
	//Calling the swap function
	SWAP(float ,f1,f2);

	//Display the result post swapping
	printf("After swapping f1: %f\tf2: %f\n", f1, f2);

	printf("\n");
	break;

	case 4 :
	//Double 

             printf("Enter the double character : \n ");
             scanf("%lf",&d1);
             printf("Enter the second character : \n ");
             scanf("%lf",&d2);

	printf("Before swapping d1: %lf\td2: %lf\n", d1, d2);
	//Calling the swap function
	SWAP(double,d1, d2);

	//Display the result post swapping
	printf("After swapping d1: %lf\td2: %lf\n", d1, d2);

	printf("\n");
	break;

	default : 
	printf("Invalid Option \n ");
	break;

    }

    //Continue Prompt Option

    printf("Do you want to continue : Y or N ? \n ");
    getchar();
    scanf("%c",&option);
    if( option == 'y' || option == 'Y')
    {
	continue;
    }
    else
    {
	break;
    }

}while(1);
}

