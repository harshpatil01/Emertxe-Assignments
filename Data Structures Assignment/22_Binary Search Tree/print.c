#include "main.h"

void print(TreeLink * root)
{
	
	//Print the data while inorder traversing
	if(root)
	{
		//Move to the left sub tree
		print(root -> left);
		printf("%d ", root -> data);
		//Move to the right sub tree
		print(root -> right);
	}
}
