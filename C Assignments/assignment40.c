#include <stdio.h>
#include <string.h>

void reverseIterative(char *str) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; ++i, --j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void reverseRecursive(char *str, int start, int end) {
    if (start >= end) {
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseRecursive(str, start + 1, end - 1);
}

int main() {
    char str[100];
    int choice;

    do {
        printf("1. Iterative method\n");
        printf("2. Recursive method\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("Enter a string: ");
        scanf("%s", str);

        switch (choice) {
            case 1:
                reverseIterative(str);
                printf("Reverse string is: %s\n", str);
                break;
            case 2:
                reverseRecursive(str, 0, strlen(str) - 1);
                printf("Reverse string is: %s\n", str);
                break;
            default:
                printf("Invalid choice.\n");
        }

        printf("Do you want to continue (Y/y)? ");
        char continueChoice;
        scanf(" %c", &continueChoice);

        if (continueChoice != 'y' && continueChoice != 'Y') {
            break;
        }

    } while (1);

    return 0;
}
