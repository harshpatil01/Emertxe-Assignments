#include "main.h"

int findminBST(TreeLink * root)
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
	
	//Go to the left most element
	while(temp -> left != NULL)
	{
		temp = temp -> left;	
	}
	return temp -> data;
	
}