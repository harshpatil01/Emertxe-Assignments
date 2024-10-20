/*Name : Harsh Patil
 *Date : 01-07-2021
 *Description : WAP to concatenate two files
  *Input: gcc file_concatenate.c
  	  ./a.out
 */


#include <stdio.h>
#include <stdlib.h>

//Declaring the filecopy function
void filecopy(FILE *fp1, FILE *fp2);

//Passing the arguments (number of command line arguments and arry of strings(character pointers)
int main(int argc, char *argv[])
{
	
	//Declare the variable
    char ch;
	//Declaring File pointers
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    
    //Checking the first argument entered in the command line
    if (argc == 1)
    {
        //Printing stdin content into the  stdout
        filecopy(stdin, stdout);
    }

    //Checking the second argument entered which is the name of the file
    else if (argc == 2)
    {
        //Opening the first file in read mode
        fp1 = fopen(argv[1], "r");
        
        //Error handling for the file 
        if (fp1 == NULL)
        {
			//Printing an error message to stderr
            perror("argv[1]");
            return 0;
        }
        //Print the contents of the first file onto the standard output
        filecopy(fp1, stdout);
        //Closing first file
		fclose(fp1);
	}
	
	//Checking the arguments till the third argument which contains the first and second file
    else if (argc == 3)
    {
        //Opening the first file in read mode
        fp1 = fopen(argv[1], "r");

        //Error Handling for the first file
        if (fp1 == NULL)
        {
            perror("argv[1]");
            return 0;
        }
        
        //Opening the second file in read mode
        fp2 = fopen(argv[2], "r");
        
        //Error Handling for the second file
        if (fp2 == NULL)
        {
            perror("argv[2]");
            return 0;
        }
        
        //Print file1 and file2 contents to stdout using filecopy function 
        filecopy(fp1, stdout);
        filecopy(fp2, stdout);
        
        //Closing file1 and file2
        fclose(fp1);
        fclose(fp2);     
    }

	//Checking the arguments till the fourth argument which contains the first,second file and the destination file where the conatenated data needs to be saved
    else if (argc == 4)
    {
        //Opening the first file in read mode
        fp1 = fopen(argv[1], "r");
        //Error Handling for the first file
        if (fp1 == NULL)
        {
            perror("argv[1]");
            return 0;
        }
        
        //Opening the second file in read mode
        fp2 = fopen(argv[2], "r");
        //Error Handling for the second file
        if (fp2 == NULL)
        {
            perror("argv[2]");
            return 0;
        }
        
        //Open third file in the append mode, it adds the existing data to the file passed as the destination file in the cmd line argument
        fp3 = fopen(argv[3], "a");

        //Error Handling for file
        if (NULL == fp3)
        {
            perror("argv[3]");
            //Closing  the file 1 and file 2
            fclose(fp1);
            fclose(fp2);
            
            return 0;
        }
        
        //Copies file1 and file2 content to file3 by calling function to do filecopy
        filecopy(fp1, fp3);
        filecopy(fp2, fp3);
        
        //Close all the files
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
    }
    return 0;
    
}

//Defining the function to copy the contents of file 1 an file 2
void filecopy(FILE *fp1, FILE *fp2)
{
	//Declaring variable
    char c;
	//Fetching input that is a single character from the file at a time and storinng it in c variable
    c = fgetc(fp1);
	//Traverse till EOF is received
    while (c != EOF)
    {
		//Fetching input that is a single character from the file at a time and storinng it in c variable
        c = fgetc(fp1);
		//Copying every single character from c to File Pointer fp2
        fputc(c, fp2);
    }
}