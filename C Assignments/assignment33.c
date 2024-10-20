#include <stdio.h>
#include <stdlib.h>

struct MemoryElement {
    int type; // 1: int, 2: char, 3: float, 4: double
    union {
        int intValue;
        char charValue;
        float floatValue;
        double doubleValue;
    } data;
};

void displayMenu() {
    printf("Menu:\n");
    printf("1. Add element\n");
    printf("2. Remove element\n");
    printf("3. Display elements\n");
    printf("4. Exit\n");
    printf("Choice: ");
}

void addElement(struct MemoryElement *memory, int *count) {
    int choice;
    printf("Enter the type to insert:\n");
    printf("1. int\n");
    printf("2. char\n");
    printf("3. float\n");
    printf("4. double\n");
    printf("Choice: ");
    scanf("%d", &choice);

    if (*count >= 8) {
        printf("Memory is full. Cannot add more elements.\n");
        return;
    }

    memory[*count].type = choice;

    switch (choice) {
        case 1:
            printf("Enter the int value: ");
            scanf("%d", &memory[*count].data.intValue);
            break;
        case 2:
            printf("Enter the char value: ");
            scanf(" %c", &memory[*count].data.charValue);
            break;
        case 3:
            printf("Enter the float value: ");
            scanf("%f", &memory[*count].data.floatValue);
            break;
        case 4:
            printf("Enter the double value: ");
            scanf("%lf", &memory[*count].data.doubleValue);
            break;
        default:
            printf("Invalid choice.\n");
            return;
    }

    (*count)++;
}

void removeElement(struct MemoryElement *memory, int *count) {
    if (*count <= 0) {
        printf("Memory is empty. Cannot remove elements.\n");
        return;
    }

    int index;
    printf("Enter the index to be deleted: ");
    scanf("%d", &index);

    if (index < 0 || index >= *count) {
        printf("Invalid index.\n");
        return;
    }

    printf("Index %d successfully deleted.\n", index);

    for (int i = index; i < *count - 1; ++i) {
        memory[i] = memory[i + 1];
    }

    (*count)--;
}

void displayElements(struct MemoryElement *memory, int count) {
    printf("-------------------------\n");
    for (int i = 0; i < count; ++i) {
        printf("%d -> ", i);

        switch (memory[i].type) {
            case 1:
                printf("%d (int)\n", memory[i].data.intValue);
                break;
            case 2:
                printf("%c (char)\n", memory[i].data.charValue);
                break;
            case 3:
                printf("%f (float)\n", memory[i].data.floatValue);
                break;
            case 4:
                printf("%lf (double)\n", memory[i].data.doubleValue);
                break;
            default:
                printf("Unknown type\n");
                break;
        }
    }
    printf("-------------------------\n");
}

int main() {
    struct MemoryElement *memory = (struct MemoryElement *)malloc(8 * sizeof(struct MemoryElement));
    int count = 0;

    int choice;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addElement(memory, &count);
                break;
            case 2:
                removeElement(memory, &count);
                break;
            case 3:
                displayElements(memory, count);
                break;
            case 4:
                break;
            default:
                printf("Invalid choice. Please choose again.\n");
        }
    } while (choice != 4);

    free(memory);

    return 0;
}
