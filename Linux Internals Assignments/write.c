#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
//Declaring variables
int i,len;
//Pointer of void type
void *shared_memory;
//Declaring buff array 
char buff[100];
//Declaring variables
int shmid;
//Create a shared memory segment
	//int shmget(key_t key,size_t size,int shmflag)
	//key:Seed Input
	//size:Size of the shared memory
	//shmflag:Permissions (similar to  file)
	//Return:Shared memory ID / Failure
	 //creates shared memory segment with key 2345, having size 1024 bytes. IPC_CREAT is used to create the shared segment if it does not exist. 0666 are the permisions on the shared segment
shmid=shmget((key_t)2345, 1024, 0666|IPC_CREAT);
//Printing the key of the shared memory
printf("Key of shared memory is %d\n",shmid);
//Attach to a particular shared memory
	//void *shmat(int shmid, void *shmaddr,int shmflag)
	//shmid:Shared memory ID to get attached
	//shmaddr:Exact address(if we know we can enter it or leav it 0)
	//shmflag:Leave it as 0
	//Return :Shared memory address/Failure
	//shm is a character pointer which stores the input given by the user
shared_memory=shmat(shmid,NULL,0); 
//Printing the address where the memory segment is attached with this process
printf("Process attached at %p\n",shared_memory); 
//Asking the user to enter the string or the required data to the shared memory
printf("Enter some data to write to shared memory\n");
//Reading the input from the user and storing it in buff
// 0 -> stdin
read(0,buff,100); 
//Confirming with the user the data written by the user
printf("You wrote : %s\n",(char *)shared_memory);
//Data written to shared memory
strcpy(shared_memory,buff); 
//Store the length of the string entered by the user 
len = strlen((char *)shared_memory);
for(i = 0; i < len; i++ )
		{
			
			if(islower((char *)shared_memory))
			{
				(char *)shared_memory = ((char *)shared_memory - 32);
			}
			(char *)shared_memory++;
		}
printf("Writing to shared memory ......\n");

printf("Reading from shared memory : %s \n",(char *)shared_memory);

}