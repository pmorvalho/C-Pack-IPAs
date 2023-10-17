
#include <stdio.h>

#define true 1
#define false 0

void handle_char(int c, int is_zero);

int main() {

    int n;
    int zero = true;
    n = getchar();

    while (n != EOF) {
        handle_char(n, zero);
        n = getchar();
    }
    return 0;

}

void handle_char(int c, int is_zero) {

    switch (c) {
        case '0':
            if (is_zero == true) {
                break;
            } else {
                putchar(c);
                is_zero = false;
                break;
            }
        case ' ':
            putchar(c);
            is_zero = true;
            break;
        case '\n':
            putchar(c);
            is_zero = true;
            break;
        default:
            putchar(c);
            is_zero = false;
            break;
    }

}