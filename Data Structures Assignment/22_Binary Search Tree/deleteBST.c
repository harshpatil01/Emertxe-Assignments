#include "main.h"

TreeLink *deleteBST(TreeLink * root, data_t data)
{

	//Taking the local reference to the tree
	TreeLink *temp;

	//Case 1 : If the tree is empty 
	if (root == NULL)
	{
		return root;
	}

	// If the key to be deleted is less than the root's key, then it lies in left subtree
    	if (data < root->data)
		{
			//Calling the function
        	root->left = deleteBST(root->left, data);
		}
 	
    	//If the key to be deleted is greater than the root's key, then it lies in right subtree
    	else if (data > root->data)
		{
			//Calling the function
        	root->right = deleteBST(root->right, data);
		}

		//If key is same as root's key, then that is the same node to be deleted
    	else
    	{
		//Checking for the leaf node
		if (root->left == NULL && root->right == NULL)
        	{
            		temp = NULL;
					//Free the root and free the memory
            		free(root);
            		return temp;
        	}
        	//Node with only one child or no child
        	if (root->left == NULL && root->right != NULL)
        	{
					//Store the address before freeing the memory
            		temp = root->right;
					//Free the root and free the memory
            		free(root);
            		return temp;
        	}
        	else if (root->right == NULL && root->left != NULL)
        	{
					//Store the address before freeing the memory
            		temp = root->left;
					//Free the root and free the memory
            		free(root);
           		return temp;
       		}
 		else
		{
			//Case 2:Node with two children: Get the inorder successor (smallest in the right subtree)
			 			
				// Copy the inorder successor's content to this node
        		temp = findminindexBST(root->right);
			
				root->data = temp->data; 			
			
        		// Delete the inorder successor
       			root->right = deleteBST(root->right, temp->data);
		}
    	}

	return root;
}