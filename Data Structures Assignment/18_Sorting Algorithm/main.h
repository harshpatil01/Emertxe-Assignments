#include <stdio.h>
#include <stdlib.h>




#define SUCCESS 0
#define FAILURE -1
#define size 50
#define NOELEMENT -2


void swap(int *p, int *q);
void print_array(int *array, int n);
int bubble_sort(int *array, int n);
int insertion_sort(int *array, int n);
int selection_sort(int *array, int n);
