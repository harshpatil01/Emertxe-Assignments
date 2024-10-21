#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define ARRAYSIZE 100
#define NOELEMENT -2



void print(int a[], int n);
void merge(int a[],int lowerbound,int mid,int upperbound);
int mergesort(int a[],int lowerbound ,int upperbound);
