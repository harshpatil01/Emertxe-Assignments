/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description :
  *Input: gcc assignment22.c and ctrl + D
  *Output: 
Hello World
Hello 
World

Lines = 3, Words = 4, Characters = 25

 */ 



#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	//Declaring  the variables
	int flag = 0, lines = 0, words = 0, characters = 0;
	char c, previouscharacter = ' ';
	//do while loop
	do
	{
		//Reading a character from the keyboard
		c = getc(stdin);

		//Increment the character count
		characters++;

		//If newline increment the line count
		if (c == '\n')
		{
			lines++;
		}


		//If there is  newline or space or tab then  increment the word count
		if ((previouscharacter != ' ' &&  previouscharacter != '\n' && previouscharacter != '\t') && (c == ' ' || c == '\n'|| c == '\t'))
		{

			words++;

		}

		//If character is equal to EOF  break the loop
		if (c == EOF)
		{
			//Decrement one character count
			characters--;
			break;
		}
		previouscharacter = c;

	} while (1);

	if (previouscharacter != ' ' &&  previouscharacter != '\n' && previouscharacter != '\t')
	{
		words++;

	}


	//Printing the character count, word count and line count
	printf("\n");
	printf("Lines = %d, Words = %d, Characters = %d\n", lines, words, characters);

	return 0;

}
