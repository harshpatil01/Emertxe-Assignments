#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 0
#define FAILURE -1
#define STACKEMPTY -2
#define STACKFULL -3
#define STACKSIZE 100

typedef char data_t;

typedef struct
{
	int top;
	data_t Sarray[STACKSIZE];
}Stack;

int push(Stack *, data_t);
int pop(Stack *, data_t *);
int peek(Stack S);
int checkprecedence(char symbol);
int expressionevaluation(int valueA, int valueB, char symbol );
int isoperator(char symbol);
int infixtopostfix(char infixexp[STACKSIZE], char postfixexp[STACKSIZE]);
int postfixeval(char postfixexp[STACKSIZE]);
int print(Stack *s);
