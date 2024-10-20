//Output :
/*

harsh@harsh-VirtualBox:~/C Assignments$ gcc assignment18.c
harsh@harsh-VirtualBox:~/C Assignments$ ./a.out
Enter the method:
1. Scan from the keyboard.
  2. Take command line args
 3. Take environment variable args.
Choice: 1
Enter the total number of integers 
: 3
Enter the integer [0]:1
Enter the integer [1]:2
Enter the integer [2]:3
The average of entered numbers : 2.000000 
Do you want to continue Y or N ? 
:n
 

harsh@harsh-VirtualBox:~/C Assignments$ ./a.out 1 2 3
Enter the method:
1. Scan from the keyboard.
  2. Take command line args
 3. Take environment variable args.
Choice: 2
The average of entered numbers : 2.000000 
Do you want to continue Y or N ? 
:n
   

harsh@harsh-VirtualBox:~/C Assignments$ export array="1 2 3"
harsh@harsh-VirtualBox:~/C Assignments$ gcc assignment18.c
harsh@harsh-VirtualBox:~/C Assignments$ ./a.out
Enter the method:
1. Scan from the keyboard.
  2. Take command line args
 3. Take environment variable args.
Choice: 3
From shell export a variable which contain numbers. export array= 1 2 3 4 
array= 1 2 3 
The average of entered numbers: 2.000000 
Do you want to continue Y or N ? 
:n
   */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXVAL 100000000
#define MINVAL -100000000
int atoi(const char *str);
int digit(int ch);
int main(int argc, char **argv)
{
    int n, number[10000], choice, i;
    char option;
	int count;
    float average, sum;
    char *arr;
    char str[2] = " ";
    char *token;
    do
    {
        average = 0;
        sum = 0;
		count =0;
        
        printf("Enter the method:\n");
        printf("1. Scan from the keyboard.\n  2. Take command line args\n 3. Take environment variable args.\n");
        printf("Choice: ");
        scanf("%d", &choice);
               
        switch (choice)
        {
            case 1:
                //Reading the total number of integers 
                printf("Enter the total number of integers \n: ");
                scanf("%d", &n);
                
				//Error Check for limit
				if ((n < 0) || (n > 20))
				{	
					printf("Error: n is Invalid Number\n");
				} 
	   
                //Read n numbers from the user
                for (i = 0; i < n; i++)
                {
                    printf("Enter the integer [%d]:", i);
                    scanf("%d", &number[i]);
					//Error Check for limit
					if ((number[i] <= MINVAL) || (number[i] > MAXVAL))					{
						printf("Error: value is Invalid Number \n");
	
					} 
	   
                }
               
                //Calculate average of entered numbers and printing it on the screen
                
                for (i = 0; i < n; i++)
				{
                    sum += number[i];
                }
                average = sum / n;
                printf("The average of entered numbers : %f \n", average);
                
                break;
                
            case 2:
                if (argc < 2)
				{
					printf("Invalid entry: ./assignment18 <no.>");
					exit(1);
				}
				else
				{
					//Calculate average of entered numbers and printing it on the screen
				for (i = 0; i < argc; i++)
				{
					//Error Check for limit
				if (((atoi(argv[i])) <= MINVAL) || ((atoi(argv[i])) > MAXVAL))
				{
					printf("Error: value is Invalid Number \n");
				
				} 	
					sum += atoi(argv[i]);
				}
        
				}
    
				average = sum / (argc - 1);
				printf("The average of entered numbers : %f \n", average);
    
                break;
                
            case 3:
                printf("From shell export a variable which contain numbers. export array= 1 2 3 4 \n");    
				//Fetching the data from environment variable that was set
				arr = getenv("array");
    
				printf ("array= %s \n", arr);
  
				//Fetching the first token
				token = strtok(arr, str);
    
				// Traversing through the other tokens 
				while( token != NULL )
				{
				count++;
				//Convert the string to integer 
				number[count] = atoi(token);
				//Sum of the numbers 
				sum += number[count];
				token = strtok(NULL, str);
				}
//Calculate the average of the entered numbers and printing it on the screen
				average = sum / count;
				printf("The average of entered numbers: %f \n", average);
			
 
                break;
                
            default:
                printf("Invalid choice \n");
                break;
        }
        
        //Prompt for Continue option
        printf("Do you want to continue Y or N ? \n:");
	getchar();
        scanf("%c", &option);
    
        if ( option == 'Y' || option == 'y' )
        {
            continue;
        }
        else
        {
            break;
        }
    } while (1);
   	return 0;
}

//Defining atoi definition
int atoi(const char *str)
{
	//Declaring the variables
	int flag = 0;
	int num = 0;

	//Checking if the first value is negative sign
	if (*(str + 0) == '-')
	{
		flag = 1;
		str++;
	}

	//Converting the string into an integer value
	while (*str)
	{
		if (digit(*str))
		{
			num = num * 10 + (*str - '0');
		}
		else
		{
			return 0;
		}
		str++;
	}

	//If entered nember is negative, multiply with -1
	if (flag)
	{
		num = num * (-1);
	}
	return num;
}

//Defining the digit function
int digit(int ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return 1;
	}	
	return 0;
}







