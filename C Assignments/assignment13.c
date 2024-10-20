/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to implement own c type library functions
  *Input: gcc assignment13.c
 *Output:
Enter a character 
a
-------Menu--------- 
1.isalnum 
 2.isalpha 
 3.isascii 
 4.isblank 
 Enter the option 
 1
 Checking if its an isalnum function 
  It is an apha numeric 
 Do you want to continue : Y or N ? N 
 */ 



#include<stdio.h>
int main()
{
    //Declaring the variables
    int option;
    int res;
    char ch;
    char o;
    //do while loop
do
{
    //Menu Option
printf("Enter a character \n");
scanf("%c",&ch);
printf("-------Menu--------- \n");
printf("1.isalnum \n ");
printf("2.isalpha \n ");
printf("3.isascii \n ");
printf("4.isblank \n ");
printf("Enter the option \n ");
scanf("%d",&option);

//Defining the function of isalnum
int isalnum (int ch)
  {
 if ( ch >=0 && ch <= 9 || ch >='a' && ch <= 'z' || ch >= 'A' || ch <= 'Z' )
  {
      return 1;
  }
  else
  {
      return 0;
  }
 }
 
//Defining the function of isalpha
int isalpha (int ch)
{
    if (( ch>='a' && ch<='z' ) || (ch>='A' && ch<='Z'))
    {
	return 1;
    }
    else
    {
	return 0;
    }
}


//Defining the function of isascii
int isascii( int ch )
{
 if ( ch>=0 && ch<=127 )
 {
     return 1;
 }
 else
 {
     return 0;
 }
}



//Defining the function of isblank
int isblank(int ch)
{
if ( ch == ' ' || ch == '\t' )
{
    return 1;
}
else
{
    return 0;
}
}


//Defining the switch - case option
switch(option)
{
    //Case 1
    case 1 :
             printf(" Checking if its an isalnum function \n ");
     //Calling the function	     
	     res=isalnum(ch);
	     //Validating if the returned result is equal to one
	     if (res == 1)
	     {
		 printf(" It is an apha numeric \n " );
	     }
	     else
	     {
		 printf(" It  is not an alpha  numeric \n ");
	     }

	break;
	//case 2
    case 2 : 
	printf("Checking if its an isalpha function \n");
	//Calling the function
	res=isalpha(ch);
	//Validating if the returned result is equal to one
	if (res == 1 )
	{
	    printf(" It is an alphabet \n ");
	}
	else
	{
	    printf(" It is not an alphabet \n ");
	}


	break;
	//case 3
    case 3 :
	printf(" Checking if its an isascii function\n");
	//Calling the function
	res=isascii(ch);
	//Validating if the returned result is equal to one
	if (res == 1)
	{
	    printf(" It is an ascii character \n ");
	}
	else
	{
	    printf(" It is not an ascii character \n ");
	}

	break;
	//case 4
    case 4:
	printf(" isblank function \n ");
	//Calling the function
	res=isblank(ch);
	//Validating if the returned result is equal to one
	if (res == 1)
	{
	    printf(" It is a blank  character \n ");
	}
	else
	{
	    printf("It is not a blank character \n ");
	}

	break;
	//default
    default :
	//Print the statements
	printf("Invalid Option has been entered \n ");
}
//Validating if the user wants to continue or not
printf("Do you want to continue : Y or N ? ");
getchar();
scanf("%c",&o);

if ( o == 'Y' || o == 'y' )
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
