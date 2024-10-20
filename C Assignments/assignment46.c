#include <stdio.h>
#include <stdarg.h>

// Custom implementation of scanf
int my_scanf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;

    while (*format) {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'd':
                    count += scanf("%d", va_arg(args, int *));
                    break;
                case 'c':
                    count += scanf(" %c", va_arg(args, char *));
                    break;
                case 's':
                    count += scanf("%s", va_arg(args, char *));
                    break;
                case 'f':
                    count += scanf("%f", va_arg(args, float *));
                    break;
                case 'lf':
                    count += scanf("%lf", va_arg(args, double *));
                    break;
                default:
                    // Unsupported format
                    break;
            }
        } else {
            // Ignore non-format characters
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
        float fnum;
        double dnum;

        printf("Enter a number: ");
        my_scanf("%d", &num);
        printf("You entered %d\n", num);

        printf("Enter a string: ");
        my_scanf("%s", str);
        printf("You entered %s\n", str);

        printf("Enter a character : ");
        my_scanf("%c", &ch);
        printf("You entered %c\n", ch);

        printf("Enter float number : ");
        my_scanf("%f", &fnum);
        printf("You entered %.2f\n", fnum);

        printf("Enter double number : ");
        my_scanf("%lf", &dnum);
        printf("You entered %.2lf\n", dnum);

        printf("Do you want to continue (y/Y)? ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
