#include "main.h"
#include<string.h>


int postfixeval(char postfixexp[STACKSIZE])
{
	int postfixexplen, i, j = 0;
	char data;
	
	char intvalueA, intvalueB, intresult;

	//Initialize the stack and the top
	Stack evaluationstackarray;
	evaluationstackarray.top = -1;

	//Fetching the length of the postfixexp
	postfixexplen = strlen(postfixexp);
	
	//Pushing the values into stack and pop the elements from postfix exp to get the postfixeval
	for(i = 0; i < postfixexplen; i++)
	{
		//If it is not an operator and its an operand , push postfixexp element into  the evaluationstackarray	
		if(! isoperator(postfixexp[i]))
		{	
			push(&evaluationstackarray, postfixexp[i]);
		}
		//Else if the element in the postfixexp array is not an operator	 
		if(isoperator(postfixexp[i]))
		{
			//Pop the element from evaluationstackarray and store it into the value B variable
			pop(&evaluationstackarray, &data);
			intvalueB = data;
			
			//Pop the element from evaluationstackarray and store it into the value A variable
			pop(&evaluationstackarray, &data);
			intvalueA = data;	

			//Calling the expressionevaluation function and storing the result into the result 
			//Arguments passed are the intvalueA,intvalueB and postfixexp array element which is an operator
			intresult = expressionevaluation(intvalueA, intvalueB, postfixexp[i]);
			
			//Changing this int to ASCII equivalent
			intresult += '0';					
			
			//Pushing the resulting value into the evaluationstackarray
			push(&evaluationstackarray, intresult);
				
		}
		
	}	

	//Pop the element from evaluationstackarray which is the final result and value
	pop(&evaluationstackarray, &data);
	return (data - '0');
}
