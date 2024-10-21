#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxheapify(int *ptr, int i, int size) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && ptr[left] > ptr[largest])
        largest = left;

    if (right < size && ptr[right] > ptr[largest])
        largest = right;

    if (largest != i) {
        swap(&ptr[i], &ptr[largest]);
        maxheapify(ptr, largest, size);
    }
}

void buildmaxheap(int *ptr, int size) {
    for (int i = size / 2 - 1; i >= 0; i--)
        maxheapify(ptr, i, size);
}

void heap_sort(int *ptr, int size) {
    buildmaxheap(ptr, size);

    for (int i = size - 1; i > 0; i--) {
        swap(&ptr[0], &ptr[i]);
        maxheapify(ptr, 0, i);
    }
}

int main() {
    int size;

    // Prompt user to Enter the size of the Array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Declare an integer array and read the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    // Call Heap sort function
    heap_sort(arr, size);

    // Display the sorted elements of the array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
