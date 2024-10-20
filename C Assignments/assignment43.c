/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to implement binary search for all basic datatypes
1. Int
2. Char
3. Float
4. Double
Choice: 1
Enter 4 elements of type int
1. 1
2. 2
3. 7
4. 4
After sorting: 1 2 4 7
Enter the key element to search: 1
Output :
Search Element 1 is at position 0 of array.
 */ 



#include <stdio.h>
#include <stdlib.h>

// Function to perform binary search on an array of any data type using void pointers
int binarySearch(void *arr, int length, int size, void *key, int (*compare)(const void *, const void *)) {
    int left = 0, right = length - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        void *midElement = (char *)arr + mid * size;

        if (compare(midElement, key) == 0) {
            return mid; // Element found, return position
        } else if (compare(midElement, key) < 0) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Element not found
}

// Function to compare two integers (for qsort and binary search)
int compareInt(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to compare two characters (for qsort and binary search)
int compareChar(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

// Function to compare two floats (for qsort and binary search)
int compareFloat(const void *a, const void *b) {
    return (*(float *)a - *(float *)b);
}

// Function to compare two doubles (for qsort and binary search)
int compareDouble(const void *a, const void *b) {
    return (*(double *)a - *(double *)b);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <length_of_array>\n", argv[0]);
        return 1;
    }

    int length = atoi(argv[1]);

    int choice;
    printf("1. Int\n2. Char\n3. Float\n4. Double\nChoice: ");
    scanf("%d", &choice);

    void *arr;
    int size;
    int (*compare)(const void *, const void *);

    switch (choice) {
        case 1:
            size = sizeof(int);
            compare = compareInt;
            break;
        case 2:
            size = sizeof(char);
            compare = compareChar;
            break;
        case 3:
            size = sizeof(float);
            compare = compareFloat;
            break;
        case 4:
            size = sizeof(double);
            compare = compareDouble;
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    arr = malloc(length * size);

    printf("Enter %d elements of type ", length);
    switch (choice) {
        case 1:
            printf("int\n");
            break;
        case 2:
            printf("char\n");
            break;
        case 3:
            printf("float\n");
            break;
        case 4:
            printf("double\n");
            break;
    }

    for (int i = 0; i < length; ++i) {
        switch (choice) {
            case 1:
                scanf("%d", (int *)((char *)arr + i * size));
                break;
            case 2:
                scanf(" %c", (char *)((char *)arr + i * size));
                break;
            case 3:
                scanf("%f", (float *)((char *)arr + i * size));
                break;
            case 4:
                scanf("%lf", (double *)((char *)arr + i * size));
                break;
        }
    }

    // Sort the array
    qsort(arr, length, size, compare);

    // Display the sorted array
    printf("After sorting: ");
    for (int i = 0; i < length; ++i) {
        switch (choice) {
            case 1:
                printf("%d ", *(int *)((char *)arr + i * size));
                break;
            case 2:
                printf("%c ", *(char *)((char *)arr + i * size));
                break;
            case 3:
                printf("%.2f ", *(float *)((char *)arr + i * size));
                break;
            case 4:
                printf("%.2lf ", *(double *)((char *)arr + i * size));
                break;
        }
    }
    printf("\n");

    // Perform binary search
    printf("Enter the key element to search: ");
    void *key = malloc(size);
    switch (choice) {
        case 1:
            scanf("%d", (int *)key);
            break;
        case 2:
            scanf(" %c", (char *)key);
            break;
        case 3:
            scanf("%f", (float *)key);
            break;
        case 4:
            scanf("%lf", (double *)key);
            break;
    }

    int position = binarySearch(arr, length, size, key, compare);

    // Display the search result
    printf("Output:\n");
    if (position != -1) {
        printf("Search Element ");
        switch (choice) {
            case 1:
                printf("%d", *(int *)((char *)arr + position * size));
                break;
            case 2:
                printf("%c", *(char *)((char *)arr + position * size));


