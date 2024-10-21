#include "main.h"

int getreeheight(TreeLink *root)
{
	int lheight;
	int rheight;

	//Traversing the nodes
	if (root == NULL)
	{
		return 0;
	}
	//Computing the depth of each sub tree
	lheight = getreeheight(root->left);
	rheight = getreeheight(root->right);
	
	//Using the larger one
	if (lheight > rheight) 
	{
		return(lheight+1);
	}
	else
	{
		return(rheight+1);
	}
	
}
