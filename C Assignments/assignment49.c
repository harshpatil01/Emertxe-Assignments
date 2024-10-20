/*Name : Harsh Patil
 *Date : 1-09-2021
 *Description : WAP to print all possible combinations
  *Input: gcc assignment49.c
 *Output:
  Enter the characters: abc
abc
acb
bac
bca
cba
cab
Do you want to continue : Y or N ? 
n

Enter the characters: abb
Please Enter the distinct characters 

./a.out
Enter the characters: abbcda
Please Enter the distinct characters 

Enter the characters: abcd
abcd
abdc
acbd
acdb
adcb
adbc
bacd
badc
bcad
bcda
bdca
bdac
cbad
cbda
cabd
cadb
cdab
cdba
dbca
dbac
dcba
dcab
dacb
dabc
Do you want to continue : Y or N ? 
n




 */ 


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Declaring the functions
void combination(char *str, int start, int last);
void swap(char *c1, char *c2);

int main()
{
    do
    {
	//Declare the variable
	int len;
	char option;
	int j;
	//Declaring the array
	char str[len];

	//Enter the charcters 
	printf("Enter the characters: ");
	scanf("%s", str);
	len=strlen(str);
	for ( j=0;j<len-1;j++)
	{
	    if ( str[j] == str[j+1])
	    {
		printf("Please Enter the distinct characters \n ");
		return 0;
	    }
	}
	//Calling the combination function
	combination(str, 0, len - 1);
    


	printf("Do you want to continue : Y or N ? \n");
	getchar();
	scanf("%c",&option);
	
	if ( option == 'y' || option == 'Y' )
	{
	    continue;
	}
	else
	{
	    break;
	}

    }while(1);
}
//Defining the combination function
void combination(char *str, int start, int last)
{
	//Declaring the variable
	int i;

	//Displaying the string when the location become equal
	if (start == last)
	{
		printf("%s\n", str);
	}
	else
	{
		for (i = start; i <= last; i++)
		{
			swap ((str + start), (str + i));
			//Calling the function recursively
			combination(str, start + 1, last);
			swap ((str + start), (str + i));

		}
	}
}
//Defining the swap function
void swap(char *c1, char *c2)
{
	char temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}
