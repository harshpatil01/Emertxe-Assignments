#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int flag;

void handler(int arg)
{
    flag = 1;
}

int main(int argc, char *argv[])
{
    //Declaration of variables
    int choice, delay, sec = 0;
	//Structure tm which is present in the time.h header file of c 
 /*struct tm 
 {
   int tm_sec;         /* seconds,  range 0 to 59          
   int tm_min;         /* minutes, range 0 to 59           
   int tm_hour;        /* hours, range 0 to 23             
   int tm_mday;        /* day of the month, range 1 to 31  
   int tm_mon;         /* month, range 0 to 11             
   int tm_year;        /* The number of years since 1900   
   int tm_wday;        /* day of the week, range 0 to 6    
   int tm_yday;        /* day in the year, range 0 to 365  
   int tm_isdst;       /* daylight saving time    
	}
*/   
    struct tm time_i, *time_ptr;
    time_t time_current, givn_time;

    //Checking the arguments
    if (argc < 2 || argc > 3)
    {
	printf("Error: Invalid Arguments have been passed \n");
	printf("Pass: ./a.out <hour:minutes:seconds> <days:months:years>\n");
	exit(1);
    }

    //To convert minutes, hours, days, months, years in seconds
	// time_t time(time_t *seconds) returns the time since the Epoch (00:00:00 UTC, January 1, 1970), measured in seconds
    time_current = time(NULL);
	//Printing the current time since epoch
    printf("Current Time : %ld\n", time_current);

    //If only the time is provided through the arguments
    if (argc == 2)
    {
	//To copy present day's date, month, year into structure
	//struct tm *localtime(const time_t *timer)
	//timer − This is the pointer to a time_t value representing a calendar time.
	//The C library function struct tm *localtime(const time_t *timer) uses the time pointed by timer to fill a tm structure with the values that represent the corresponding local time.
	time_ptr = localtime(&time_current);

	//Initializing the memory for the structure tm time_i variable 
	memset(&time_i, 0,sizeof(struct tm));

	//strftime() is a function in C which is used to format date and time. It comes under the header file time.h, which also contains a structure named struct tm which is used to hold the time and date
	//size_t strftime(char *s, size_t max, const char *format, const struct tm *tm); 
	//To get time( hour, minutes, sec) into structure
	strptime(argv[1], "%T", &time_i);
	
	//Storing the current day of the month stored in the time_ptr of the structure tm into the tm_mday of time_i variable of the structure tm 
	time_i.tm_mday = time_ptr -> tm_mday;
	//Storing the current month of the year stored in the  time_ptr of the structure tm into the tm_mday of time_i variable of the structure tm 
	time_i.tm_mon = time_ptr -> tm_mon;
	//Storing the current year stored in the time_ptr of the structure tm into the tm_mday of time_i variable of the structure tm 
	time_i.tm_year = time_ptr -> tm_year;
    }

	//If there are more than 2 arguments have been passed
    //If both date and time is passed
    if (argc == 3)
    {
	//Initializing the structure
	//Initializing the memory for the structure tm time_i variable
	memset(&time_i, 0,sizeof(struct tm));
	//size_t strftime(char *s, size_t max, const char *format, const struct tm *tm); 
	//To get time( hour, minutes, sec) into structure
	strptime(argv[1], "%T", &time_i);
	//To get time( hour, minutes, sec) into structure
	//%d = Day of the month (01-31) 
	//%m = Month as a decimal number (01-12) 
	//%Y = year
	strptime(argv[2], "%d:%m:%Y", &time_i);
    }
	//The C library function time_t mktime(struct tm *timeptr) converts the structure pointed to by timeptr into a time_t value according to the local time zone
	//time_t mktime(struct tm *timeptr)
    given_time = mktime(&time_i);
    printf("Given time : %ld\n", given_time);
	//Fetching the seconds
    if  ((seconds = given_time - time_current) < 0)
    {
	printf("Error! Invalid time\n");
	exit(2);
    }

    printf("\nAlarm in %d seconds\n\n", seconds);

	//To catch SIGALRM
	//void (*signal(int sig, void (*func)(int)))(int)
	//sig : This is the signal number to which a handling function is set.
	//func : This is a pointer to  the signal handler function
	//SIGALRM is when the alarm is raised
    signal(SIGALRM, handler);
	//The alarm has been set for the seconds passed as the argument
    alarm(seconds);
    while (1)
    {
	if (flag)
	{
	    printf("Time is up !!!!\n");
	    printf("Choose the option\n1. Snooze \n2. Quit\n");
	    scanf("%d", &choice);
	    if (choice == 1)
	    {
		printf("Enter Snooze time : \n ");
		scanf("%d", &delay);
		alarm(delay);
		flag = 0;
	    }
	    else if (choice == 2)
	    {
		exit(1);
	    }
	}
    }
}