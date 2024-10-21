#include "main.h"

TreeLink *findminindexBST(TreeLink * root)
{
	
	//If no elements are there in a tree
	if (root == NULL)
	{
		return NULL;
	}

	//If its a non-empty tree 

	//Taking a local reference to traverse along the tree nodes 
	TreeLink *temp;
	temp = (root);
	
	//Go to the left most element and traverse till it reaches the NULL
	while(temp->left != NULL)
	{
		temp = temp->left;	
	}
	return temp;
	
}