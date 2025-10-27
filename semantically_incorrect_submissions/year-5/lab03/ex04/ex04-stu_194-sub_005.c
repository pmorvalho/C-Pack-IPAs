

#include <stdio.h>

int main() {
    int in_numbers = 0;
    int c;

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c == ' ') {
            if (!in_numbers) {
                putchar('0');
            }

            putchar(' ');

            in_numbers = 0;
        } else if (c != '0' || in_numbers) {
            putchar(c);
            in_numbers = 1;
        }
    }

    printf("\n");

    return 0;
}