#include "main.h"



int prefixeval(char prefixexp[STACKSIZE])
{
	//Declare Variables
	int prefixexplen, i, j = 0;
	char data, char_result[STACKSIZE];
	
	int intvalueA, intvalueB, intresult;
	
	//Initialize the stack and the top
	Stack evaluationstackarray;
	evaluationstackarray.top = -1;

	//reverse the prefix exp
	reversestring(prefixexp);
	
	//get the length of the postfixexp
	prefixexplen = strlen(prefixexp);
	
	//Pushing the values into stack and pop the elements from prefix exp to get the prefixeval
	for(i = 0; i < prefixexplen; i++)
	{
		//If it is not an operator and its an operand , push prefixexp element into  the evaluationstackarray	
		if(! isoperator(prefixexp[i]))
		{	
			push(&evaluationstackarray, prefixexp[i]);
		}
		//Else if the element in the prefixexp array is not an operator
		else 
		{
			//Pop the element from evaluationstackarray and store it into the value A variable
			intvalueA = peek(evaluationstackarray);
			pop(&evaluationstackarray, &data);
			
			//Pop the element from evaluationstackarray and store it into the value B variable
			intvalueB = peek(evaluationstackarray);
			pop(&evaluationstackarray, &data);

			//Calling the expressionevaluation function and storing the result into the result 
			//Arguments passed are the intvalueA,intvalueB and prefixexp array element which is an operator
			intresult = expressionevaluation(intvalueA, intvalueB, prefixexp[i]);
			
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
