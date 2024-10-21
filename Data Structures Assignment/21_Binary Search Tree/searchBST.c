#include "main.h"


int searchBST(TreeLink * root, data_t data)
{
	//if tree is empty
	if (root == NULL)
	{
		return NOELEMENT;
	}

	
	//If the tree is non-empty 

	//Take local reference to traverse along the tree nodes 
	TreeLink *temp;
	temp = (root);
	//Traverse till the end of the BST
	while((temp != NULL))
    	{
		//Traverse till the data is not equal to data entered by the user
		if (temp -> data != data)
		{
			//If leaf node has been reached with no element match return NOELEMENT
			if ( (temp -> left == NULL) && (temp -> right == NULL))
			{
				return NOELEMENT;
			}
			if(data < temp -> data)
			{
				//Searching the data in left side of the tree if the data is less than the data entered by the user
				temp = temp -> left;
			}
			else
			{
				//Searching the data in right side of the tree if the data is more than the data entered by the user
				temp = temp -> right;
			}
		}
		//If the data is found then return SUCCESS
		else if (temp -> data == data)
		{
			return SUCCESS;
		}
		//Else return NOELEMENT
		else
		{
			return NOELEMENT;
		}
	}
	return FAILURE;
}

