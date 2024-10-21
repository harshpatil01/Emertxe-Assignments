#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define NOELEMENT -2
#define DUPLICATE -3

typedef int data_t;

typedef struct treenode
{
	struct treenode *left;
	data_t data;
	struct treenode *right;
}TreeLink;


int createBST(TreeLink ** root, data_t data);
int searchBST(TreeLink * root, data_t data);
int findminBST(TreeLink * root);
int findmaxBST(TreeLink * root);
void print(TreeLink * root);
