#include "main.h"

int gettotalnodes(TreeLink *root)
{
	//Traversing the nodes
	if (root == NULL)
	{
		return 0;
	}
	
	return(gettotalnodes(root->left)+1+gettotalnodes(root->right));
	
}