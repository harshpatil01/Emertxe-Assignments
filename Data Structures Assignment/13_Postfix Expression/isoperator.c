#include "main.h"

int isoperator(char symbol)
{
	switch(symbol)
	{
		//Checking if the symbol is an operator
		case '*':
		case '+':
		case '-':
		case '{':
		case '}':
		case '(':
		case ')':
		case '/':
		case '%':
			return 1;
			 break;
		default:
			return 0;
		
	}
}