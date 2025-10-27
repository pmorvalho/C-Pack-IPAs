

#include <stdio.h>

int main() {
    int in_numbers = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            if (!in_numbers) {
                putchar('0');
            }

            putchar(c);
            in_numbers = 0;
        } else if (c != '0' || in_numbers) {
            putchar(c);
            in_numbers = 1;
        }
    }
    

    return 0;
}