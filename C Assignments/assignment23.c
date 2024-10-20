/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to replace of one or more blanks with single blank
  *Input: gcc assignment23.c
 *Output: 

Input :  Hello           World
     Output after deleting spaces : Hello World




 */ 

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Declare the variables
    char c, previous_character;

    //Read a character till EOF is recieved
    while ((c = getchar()) != '\n')
    {
        //Check if the character is space
        if (c == ' ')
        {
            //Check if previous character was not space, then print the character
            if (previous_character != ' ')
            {
                putchar(c);
            }
        }
         //If the character is not space then print
        else
        {
            putchar(c);
	
        }
        //Update the previouscharacter with curent c
        previous_character = c;
    }
    return 0;
}
