#include "main.h"


int infixtoprefix(char infixexp[STACKSIZE], char prefixexp[STACKSIZE])
{
	//Declaring variables
	int infixexplen, i, j = 0;
	char data;

	//Initialize the stack and the top
	Stack operatorstackarray;
	operatorstackarray.top = -1;

	//Reverse the infixexp entered by the user
	reversestring(infixexp);
		
	//Fetching the legth of the infixexp entered by the user 
	infixexplen = strlen(infixexp);
	
	
	
	//Pushing the values into the stack and pop the element into the prefix array to get the prefix exp 
	for(i = 0; i < infixexplen; i++)
	{
	
		//If the element is not an operator and its an operand		
		if(! isoperator(infixexp[i]))
		{	
		//Store the element in the prefixexp array
			prefixexp[j] = infixexp[i];
			//Increment j variable
			j++;
		}
		//If the element is an operator and not an operand
		else 
		{
			//If the element is ')' then pushing the element in the operatorstackarray
			if(infixexp[i] == ')')
			{
				push(&operatorstackarray, infixexp[i]);
			}
			//If the element is '(' then pushing the element in the operatorstackarray
			else if (infixexp[i] == '(')
			{
				
				//If there are no brackets like '('
				while (peek(operatorstackarray) != ')')
				{
					//Fetching the elements from the operatorstackarray and saving it into prefixexp array and increment j until encountering '('
					pop(&operatorstackarray, &data);
					//Storing the element into the prefixexp array
					prefixexp[j] = data;
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
				if ( checkprecedence(peek(operatorstackarray)) <= checkprecedence(infixexp[i]) )
				{
					//If the precedenceof the topmost element of the operatorstackarray is less than or equal to  that of the infixexp
					//Pop the element from operatorstackarray
					push(&operatorstackarray, infixexp[i]);
				}
				else
				{
					//Checking the precedence
					//pop out the operators and save in prefixexp till it becomes less than
					while ( checkprecedence(peek(operatorstackarray)) >= checkprecedence(infixexp[i]) )					{
						//Pop out the element from the operatorstackarray 
						pop(&operatorstackarray, &data);
						//Storing the data in the prefixexp array
						prefixexp[j] = data;
						//Incrementing j variable
						j++;
					}
					//After the operatorstackarray is cleared  of the above elements push the new element into the operatorstackarray
					push(&operatorstackarray, infixexp[i]);
				}
			}	
		}
		

	}	

	//After the operator check, we will check till the stack becomes empty, 
	//Poping the values from the stack array and saving it in the prefix array and incrementing the index	
	while (operatorstackarray.top != -1)
	{
		//Pop out the data 
		pop(&operatorstackarray, &data);
		//Store the data in the postfix array
		prefixexp[j] = data;
		//Incrementing the j variable
		j++;
	}

	//Putting a null character at the end of the expression stored in the postfix array 
	//To indicate the end of the expression
	prefixexp[j] = '\0';

	//Reverse the prefixexp to get the actual prefixexp
	reversestring(prefixexp);	
	return SUCCESS;
}
