#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 1
#define FAILURE 0
#define NOT_FOUND -1

typedef struct {
    int size;
    int *table;
} hash_t;

void hash_create(hash_t *arr, int size) {
    arr->size = size;
    arr->table = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        arr->table[i] = -1;
    }
}

int hash_insert(hash_t *arr, int data) {
    int index = data % arr->size;

    // Linear probing to handle collisions
    while (arr->table[index] != -1) {
        index = (index + 1) % arr->size;
    }

    arr->table[index] = data;
    return SUCCESS;
}

int hash_search(hash_t *arr, int data) {
    int index = data % arr->size;

    // Linear probing to handle collisions
    while (arr->table[index] != data && arr->table[index] != -1) {
        index = (index + 1) % arr->size;
    }

    if (arr->table[index] == data) {
        return index; // Return the index where data is found
    } else {
        return NOT_FOUND; // Data not found
    }
}

int hash_delete_element(hash_t *arr, int data) {
    int index = hash_search(arr, data);

    if (index != NOT_FOUND) {
        arr->table[index] = -1;
        return SUCCESS;
    } else {
        return FAILURE;
    }
}

void hash_delete_table(hash_t *arr) {
    free(arr->table);
    arr->size = 0;
    arr->table = NULL;
}

void hash_print(hash_t *arr) {
    for (int i = 0; i < arr->size; i++) {
        printf("%d → %d\n", i, arr->table[i]);
    }
}

int main() {
    hash_t my_hash;
    int size;

    // Get hash table size from user
    printf("Enter the size of the hash table: ");
    scanf("%d", &size);

    // Create hash table
    hash_create(&my_hash, size);

    int choice, data;

    do {
        // Display menu
        printf("\nHash Table Menu:\n");
        printf("1. Insert element\n");
        printf("2. Search element\n");
        printf("3. Delete element\n");
        printf("4. Print hash table\n");
        printf("5. Delete entire hash table\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Insert element
                printf("Enter the data to insert: ");
                scanf("%d", &data);
                if (hash_insert(&my_hash, data) == SUCCESS) {
                    printf("%d inserted successfully.\n", data);
                } else {
                    printf("Failed to insert %d.\n", data);
                }
                break;

            case 2:
                // Search element
                printf("Enter the data to search: ");
                scanf("%d", &data);
                int result = hash_search(&my_hash, data);
                if (result != NOT_FOUND) {
                    printf("%d found at index %d.\n", data, result);
                } else {
                    printf("%d not found in the hash table.\n", data);
                }
                break;

            case 3:
                // Delete element
                printf("Enter the data to delete: ");
                scanf("%d", &data);
                if (hash_delete_element(&my_hash, data) == SUCCESS) {
                    printf("%d deleted successfully.\n", data);
                } else {
                    printf("Failed to delete %d. Element not found.\n", data);
                }
                break;

            case 4:
                // Print hash table
                printf("Hash table contents:\n");
                hash_print(&my_hash);
                break;

            case 5:
                // Delete entire hash table
                hash_delete_table(&my_hash);
                printf("Hash table deleted successfully.\n");
                break;

            case 6:
                // Exit
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}
