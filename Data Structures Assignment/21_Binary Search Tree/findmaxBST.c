#include "main.h"

int findmaxBST(TreeLink * root)
{
	
	//If there are no elements in a tree
	if (root == NULL)
	{
		return NOELEMENT;
	}

	//If the tree is non-empty 

	//Take local reference to traverse along the tree nodes 
	TreeLink *temp;
	temp = (root);
	
	//Go to the right most element
	while(temp -> right != NULL)
	{
		temp = temp -> right;	
	}
	return temp -> data;
	
}