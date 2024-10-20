#include <stdio.h>
#include <stdlib.h>

int getword(char *word) {
    char c;
    int length = 0;

    // Skip leading spaces
    while ((c = getchar()) == ' ');

    // Read characters until a space is encountered
    while (c != ' ' && c != '\n') {
        *word++ = c;
        length++;
        c = getchar();
    }

    // Null-terminate the string
    *word = '\0';

    return length;
}

int atoi(const char *s) {
    int result = 0;
    int sign = 1;

    // Handle sign
    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    // Convert to integer
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
}

int itoa(int n, char *s) {
    int length = 0;

    // Handle negative numbers
    if (n < 0) {
        *s++ = '-';
        n = -n;
        length++;
    }

    // Convert to string in reverse order
    char buffer[20]; // Assuming a maximum of 20 digits for an integer
    int i = 0;
    do {
        buffer[i++] = n % 10 + '0';
        n /= 10;
    } while (n > 0);

    // Copy reversed string to output and calculate length
    while (i > 0) {
        *s++ = buffer[--i];
        length++;
    }

    // Null-terminate the string
    *s = '\0';

    return length;
}

int main() {
    char word[50];
    char numericString[50];
    int choice, num;

    do {
        printf("1. getword\n");
        printf("2. atoi\n");
        printf("3. itoa\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a word: ");
                getchar(); // Consume the newline character left by previous input
                int length = getword(word);
                printf("You entered %s and the length is %d\n", word, length);
                break;
            case 2:
                printf("Enter a numeric string: ");
                getchar(); // Consume the newline character left by previous input
                scanf("%s", numericString);
                int numResult = atoi(numericString);
                printf("String to integer is %d\n", numResult);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                char stringResult[50];
                int stringLength = itoa(num, stringResult);
                printf("Integer to string is %s\n", stringResult);
                break;
            default:
                printf("Invalid choice.\n");
        }

        printf("\nDo you want to continue (y/Y)? ");
        char continueChoice;
        scanf(" %c", &continueChoice);

        if (continueChoice != 'y' && continueChoice != 'Y') {
            break;
        }

    } while (1);

    return 0;
}
