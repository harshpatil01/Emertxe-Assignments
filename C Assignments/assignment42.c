#include <stdio.h>

int checkEndianness() {
    int num = 1;
    char *ptr = (char *)&num;

    // If the value at the address pointed by ptr is 1, it is a little-endian system
    return (*ptr == 1) ? 1 : 0;
}

int main() {
    int num;

    do {
        printf("Enter any number: ");
        scanf("%d", &num);

        if (checkEndianness()) {
            printf("Little Endian system\n");
        } else {
            printf("Big Endian system\n");
        }

        printf("Do you want to continue (y/Y)? ");
        char continueChoice;
        scanf(" %c", &continueChoice);

        if (continueChoice != 'y' && continueChoice != 'Y') {
            break;
        }

    } while (1);

    return 0;
}
