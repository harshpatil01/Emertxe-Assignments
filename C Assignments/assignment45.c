#include <stdio.h>
#include <stdarg.h>

// Custom implementation of printf
int my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;

    while (*format) {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'd':
                    count += printf("%d", va_arg(args, int));
                    break;
                case 'c':
                    count += putchar(va_arg(args, int));
                    break;
                case 's':
                    count += printf("%s", va_arg(args, char *));
                    break;
                default:
                    // Unsupported format, just print the character
                    count += putchar(*format);
                    break;
            }
        } else {
            count += putchar(*format);
        }

        format++;
    }

    va_end(args);

    return count;
}

int main() {
    char choice;

    do {
        int num;
        char ch;
        char str[100];

        printf("Enter a number, char, string: ");
        scanf("%d %c %s", &num, &ch, str);

        int count = my_printf("Output: %d %c %s\n", num, ch, str);
        printf("Number of characters printed: %d\n", count);

        printf("Do you want to continue (y/Y)? ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
