#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>

int reverse_str(char *str, int len);

int main()
{
//Declaring variables
int i;
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
	 //creates shared memory segment with key 2345, having size 1024 bytes. IPC_CREAT is used to create the shared segment if it does not exist. 0666 are the permisions 
shmid=shmget((key_t)2345, 1024, 0666);
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
//Printing the data from the Shared memory
printf("Reading from the shared memory......\n");
printf("Data read from shared memory is : %s\n",(char *)shared_memory);
//Dettach from the memory
shmdt(shared_memory);
reverse_str(buff, strlen(buff));
//Attaching to the shared memory after the reverse function
shared_memory=shmat(shmid,NULL,0); 
printf("Writing the data to the  shared memory after the operation .......\n");
}


int reverse_str(char *str, int len)
{
	
	
	//Declaring variables
	int i;
	char string[10];
	char *str1 = string;
	
	for(i = 0; i <= len-1; i++)
	{
		str1[i] = str[len - 1 - i];
	}

	for(i = 0; i <= len-1; i++)
	{
		str[i] = str1[i];
	}
	str[i] = '\0';
}