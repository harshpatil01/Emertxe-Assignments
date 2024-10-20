/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to print basic data types
 *Input: gcc assignment5.c
 *Output:
Size of int = 4 bytes
Size of char = 1 bytes
Size of float = 4 bytes
Size of double = 8 bytes
Size of void = 1 bytes
Size of Signed int = 4 bytes
Size of Unsigned int = 4 bytes
Size of Signed short int = 2 bytes
Size of Signed long int = 8 bytes
Size of Unsigned short int = 2 bytes
Size of Unsigned long  int = 8 bytes
Size of Signed long long int = 8 bytes
Size of Unsigned long long int = 8 bytes
Size of Signed char = 1 bytes
Size of Unsigned char = 1 bytes
Size of Signed short = 2 bytes
Size of Unsigned short = 2 bytes
Size of Signed long long = 8 bytes
Size of Unsigned long long = 8 bytes
 */ 

#include<stdio.h>
int main()
{
int num;
/*Printing Basic Data Types*/
printf("Size of int = %zu bytes\n", sizeof(int));
printf("Size of char = %zu bytes\n", sizeof(char));
printf("Size of float = %zu bytes\n", sizeof(float));
printf("Size of double = %zu bytes\n", sizeof(double));
printf("Size of void = %zu bytes\n", sizeof(void));

/*Printing int Data Types*/
printf("Size of Signed int = %zu bytes\n", sizeof(signed int));
printf("Size of Unsigned int = %zu bytes\n", sizeof(unsigned int));
printf("Size of Signed short int = %zu bytes\n", sizeof(signed short int));
printf("Size of Signed long int = %zu bytes\n", sizeof(signed long int));
printf("Size of Unsigned short int = %zu bytes\n", sizeof(unsigned short int));
printf("Size of Unsigned long  int = %zu bytes\n", sizeof(unsigned long int));
printf("Size of Signed long long int = %zu bytes\n", sizeof(signed long long int));
printf("Size of Unsigned long long int = %zu bytes\n", sizeof(unsigned long long int));

/*Printing char Data Types*/
printf("Size of Signed char = %zu bytes\n", sizeof(signed char));
printf("Size of Unsigned char = %zu bytes\n", sizeof(unsigned char));


/*Printing short Data Types*/
printf("Size of Signed short = %zu bytes\n", sizeof(signed short));
printf("Size of Unsigned short = %zu bytes\n", sizeof(unsigned short));

/*Printing long long Data Types*/
printf("Size of Signed long long = %zu bytes\n", sizeof(signed long long));
printf("Size of Unsigned long long = %zu bytes\n", sizeof(unsigned long long));


return 0;

}

