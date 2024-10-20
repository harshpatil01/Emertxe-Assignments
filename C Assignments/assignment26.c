/*Name : Harsh Patil
 *Date : 27-08-2021
 *Description : To define a macro sizeof(x)  where x is a variable without using sizeof operator
  *Input: gcc assignment26.c
 *Output:
Sizeof(int): 4
Sizeof(double): 8
Sizeof(float): 4
Sizeof(unsigned int): 4
Sizeof(char): 1
Sizeof(long int): 8




 */ 



#include<stdio.h>

//Defining the MACRO
#define SIZEOF(x) (void *)(&x + 1) - (void *)(&x)

int main()
{
	//Declaring the variales that are of the required data type
	int a;
	double d;
	float f;
	unsigned int b;
	char e;
	long int g;

	//Displaying the result
	printf("Sizeof(int): %zu\n", SIZEOF(a));
	printf("Sizeof(double): %zu\n", SIZEOF(d));
	printf("Sizeof(float): %zu\n", SIZEOF(f));
	printf("Sizeof(unsigned int): %zu\n", SIZEOF(b));
	printf("Sizeof(char): %zu\n", SIZEOF(e));
	printf("Sizeof(long int): %zu\n", SIZEOF(g));
	return 0;
}
