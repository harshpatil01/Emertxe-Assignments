#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define ARRAYSIZE 25
#define NOELEMENT -2

int binarysearchiterative(int *arr, int left, int right, int data);

int binarysearchrecursive(int *arr, int left, int right, int data);

void print_array(int *array, int n);
