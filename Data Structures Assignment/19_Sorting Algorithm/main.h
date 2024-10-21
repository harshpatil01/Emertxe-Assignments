#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define ARRAYSIZE 25
#define NOELEMENT -2


void quickSort(int array[], int low, int high);
int split(int array[], int low, int high);
void swap(int *a, int *b);
void print_array(int array[], int n);
