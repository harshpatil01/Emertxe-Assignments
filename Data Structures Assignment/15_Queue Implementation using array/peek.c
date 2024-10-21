#include "main.h"

int peek(Q_array *Q, data_t *data)
{
	//Check for stack FULL or NOT
	if (Q->rear == SIZE - 1)
	{
		return QUEUE_FULL;
	}
	//Fetching the data if its the topmost element
	*data = Q->data[Q->rear];
	return SUCCESS;
}