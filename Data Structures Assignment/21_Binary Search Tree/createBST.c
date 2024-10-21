#include "main.h"

int createBST(TreeLink ** root, data_t data)
{
	//Creating a new tree node
	TreeLink *new = malloc(sizeof(TreeLink));

	//Checking if memory is allocated
	if (new == NULL )
	{
		return FAILURE;
	}

	//update new tree data and links
	new -> data = data;
	new -> left = NULL;
	new -> right = NULL;

	//if tree is empty
	if ( NULL == (*root))
	{
		//First node is treated as a root
		(*root) = new; 
		return SUCCESS;
	}

	//If its non-empty 

	//Taking a local reference to traverse along the tree nodes and a parent node to keep track of parent node
	TreeLink *temp, *parent;
	temp = (*root);
	int flag;

	//Updating at the appropriate place
	while(temp)
	{
		//Fetching the parent reference
		parent = temp;
		
		if ((temp -> data) > (new -> data))
		{
			temp = temp -> left;
			flag = 0;
		}
		else if ((temp -> data) < (new -> data))
		{
			temp = temp -> right;
			flag = 1;
		}
		else
		{
			//Duplicates in BST
			return DUPLICATE;
		}		
	}
	
	//Updating the node at the appropriate place
	if(flag)
	{
		parent -> right = new;
	}
	else
	{
		parent -> left = new;
	}
	return SUCCESS;
}