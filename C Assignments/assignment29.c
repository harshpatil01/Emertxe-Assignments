/*Output :
  harsh@harsh-VirtualBox:~$ ./a.out
Enter a float number:
23.89
Sign Bits
0
Exponent Value
10000011
Mantissa Bit
01111110001111010111000
Demoted value: 23
Do you want to continue : Y or N ?
y
Enter a float number:
-3.57
Sign Bits
1
Exponent Value
10000000
Mantissa Bit
11001000111101011100001
Demoted value: 3
Do you want to continue : Y or N ?
y
Enter a float number:
10.868
Sign Bits
0
Exponent Value
10000010
Mantissa Bit
01011011110001101010100
Demoted value: 10
Do you want to continue : Y or N ?
y
Enter a float number:
37.788
Sign Bits
0
Exponent Value
10000100
Mantissa Bit
00101110010011011101001
Demoted value: 37
Do you want to continue : Y or N ?
n
*/



#include<stdio.h>
#include<stdlib.h>

//Defining the structure
typedef struct
{
	unsigned int mantissa:23;
	unsigned int exp:8;
	unsigned int sign:1;
}demoted_t;

//Declaring the bit printing function
void print_bits(unsigned int, int);

int main()
{

	//Declaring the variables
	float f;
	int n, d_value;
	char option;
	
	do
	{
	//Asking the user to enter the float number
	printf("Enter a float number: \n");
	scanf("%f", &f);
	
	//Defining the structure pointer
	demoted_t *p = (demoted_t *)&f;
	
	//Calling the bit printing function
	printf("Sign Bits \n");
	print_bits(p->sign, 1);
	printf("Exponent Value\n");
	print_bits(p->exp, 8);
	printf("Mantissa Bit\n");
	print_bits(p->mantissa, 23);
	
	//Demoting float to int
	if (f > 1.0 || f < -1.0)
	{
		n = p->exp - 127;
		d_value = (p->mantissa >> (23 - n)) | (1 << n);
	}
	else
	{
		d_value = 0;
	}

	//Display the result
    printf("Demoted value: %d\n", d_value);
    printf("Do you want to continue : Y or N ? \n");
    getchar();
    scanf("%c",&option);

    if (option == 'Y' || option == 'y')
    {
	continue;
    }
    else
    {
	break;
    }

    }while(1);

}

//Defining the bit printing funtion
void print_bits(unsigned int num, int n)
{
	unsigned mask = 1 << (n - 1);
	for ( ; mask; mask >>= 1)
	{
		if(num & mask)
		{
			printf("1") ;
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}
