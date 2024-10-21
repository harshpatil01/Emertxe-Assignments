#include "main.h"
#include<string.h>


int infixtopostfix(char infixexp[STACKSIZE], char postfixexp[STACKSIZE])
{
	int infixexplen, i, j = 0;
	char data;

	//Initialize the stack and the top
	Stack operatorstackarray;
	operatorstackarray.top = -1;
	
	//Fetching the length of the infixexp
	infixexplen = strlen(infixexp);
	
	
	//Pushing the values into the stack and pop the element into the postfix array to get the postfix exp 
	for(i = 0; i < infixexplen; i++)
	{
		//If the operator is '(' then push the element into the operatorstackarray
		if(infixexp[i] == '(')
		{
			//Calling the push function
			push(&operatorstackarray, infixexp[i]);
		}
		//If its an operand then push the element from infixexp into  the postfix exp array
		else if(! isoperator(infixexp[i]))
		{	
		//Storing the operand into the postfixexp array
			postfixexp[j] = infixexp[i];
			//Incrementing j
			j++;
		}
	//If the operator is ')' then push the element into the operatorstackarray
		else if (infixexp[i] == ')')
		{
			//If there are no brackets like '('
			while (peek(operatorstackarray) != '(')
			{
				//Fetching the elements from the operatorstackarray and saving it into postfixexp array and increment j until encountering '('
				pop(&operatorstackarray, &data);
				//Storing the element into the postfixexp array
				postfixexp[j] = data;
				j++;
			}
			//Popping the operator ')' from the operatorstackarray
			pop(&operatorstackarray, &data);				
		}
		//Operators other than brackets
		else
		{
			//Checking the precedence
			//Checking the precedence of the topmost element of the operatorstackarray and the current element of the infixexp array
			while ( checkprecedence(peek(operatorstackarray)) >= checkprecedence(infixexp[i]) )
			{
				//If the precedenceof the topmost element of the operatorstackarray is more than or equal to that of the infixexp
				//Pop the element from operatorstackarray
				pop(&operatorstackarray, &data);
				//Store the element in the postfixexp array
				postfixexp[j] = data;
				//Incrementing j 
				j++;
			}
			//once the stack is cleared of that , push the new operator
			push(&operatorstackarray, infixexp[i]);
		}		

	}	

	//After the operator check, we will check till the stack becomes empty, 
	//Poping the values from the stack array and saving it in the postfix array and incrementing the index	
	while (operatorstackarray.top != -1)
	{
		//Pop out the data 
		pop(&operatorstackarray, &data);
		//Store the data in the postfix array
		postfixexp[j] = data;
		//Incrementing the j variable
		j++;
	}

	//Putting a null character at the end of the expression stored in the postfix array 
	//To indicate the end of the expression
	postfixexp[j] = '\0';

	return SUCCESS;
}