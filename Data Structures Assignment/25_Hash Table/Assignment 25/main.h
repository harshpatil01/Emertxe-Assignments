#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 0
#define FAILURE -1
#define NOMEMORY -2
#define DUPLICATE -3
#define INITIAL_SIZE 100
#define VALUELENGTH 10
#define NOELEMENT -4

typedef struct node
{
	int key;
	char value[VALUELENGTH];	
	struct node *link;
}Link;

struct table
{
	Link *table[INITIAL_SIZE];
};

typedef struct table *hashtable;


hashtable create(void);
int hash_function(char *value);
int insert(hashtable hash_table, int key, char *value);
int search(hashtable hash_table, char *value);
void deletetable(hashtable hash_table,char *value);
void destroytable(hashtable hash_table);
int print_hashtable(hashtable hash_table);
int delete_element(Link **head, char *value);

