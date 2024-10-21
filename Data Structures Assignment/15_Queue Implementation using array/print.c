#include "main.h"

int print(Q_array *Q)
{
	//Checking if the queue is empty or not
	if (Q->front == -1)
	{
		return QUEUE_EMPTY;
	}
	//Assigning the Q->front value to the temporary variable
	data_t front = (Q->front);
	

	//Displaying the elements of the queue 
	while (Q->rear >= front)
	{
		printf("%d->", Q->data[front]);
		front++;
	}
	printf("\n");
	return SUCCESS;
}
