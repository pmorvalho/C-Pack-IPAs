
#include <stdio.h>

#define NUMBER 1
#define NO_NUMBER 0

int main() {
    int c, state = NO_NUMBER;

    while ((c = getchar()) != EOF) {
        if (c > '0' && c <= '9') {
            putchar(c);
            state = NUMBER;
        }

        if (c == '0' && state == NUMBER) {
            putchar(c);
        }

        if (c == ' ' && state == NO_NUMBER) {
            printf("0 ");
        }

        if (c == ' ' && state == NUMBER) {
            putchar(' ');
            state = NO_NUMBER;
        }
    }

    printf("\n");
    return 0;
}