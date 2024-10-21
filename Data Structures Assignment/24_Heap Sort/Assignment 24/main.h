#define MAXSIZE 10 

struct TreeNode
{
  int data; //store an element in the tree node
};



void max_heapify(struct TreeNode* node, int index, int size);
void buildheap(struct TreeNode* node);
void print_out(struct TreeNode* node);
void heapsort(struct TreeNode* node);
void swap(struct TreeNode *temp1, struct TreeNode *temp2);
int left(int index);
int right(int index);
