#include "main.h"

int expressionevaluation(int valueA, int valueB, char symbol )
{
	//Declaring variables
	int a, b;
	
	//Checking if its a number between 0 and 9
	if(  valueA >= '0' && valueA <= '9' )
	{
		//Changing the ASCII equivalent to int
		a = (valueA - '0');
	}
	else
	{
		//Keep the same value
		a = valueA;
	}	
	
	//Checking if its a number between 0 and 9
	if( valueB >= '0' && valueB <= '9' )
	{
		//Changing the ASCII equivalent to int
		b = (valueB - '0');
	}
	else
	{
		//Keep the same value
		b = valueB;
	}

	switch(symbol)
	{
		case '+':
			return (a + b);
			break;
		case '-':
			return (a - b);
			break;
		case '*':
			return (a * b);
			break;
		case '/':
			return (a / b);
			break;
		case '%':
			return (a % b);
			break;
		default:
			break;
	}	
}		
