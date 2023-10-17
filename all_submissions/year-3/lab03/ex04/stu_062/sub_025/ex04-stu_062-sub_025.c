
#include <stdio.h>

#define true 1
#define false 0

void handle_char(int c, int *not_zero);

int main() {

    int n;
    int not_zero = false;
    n = getchar();
    while (n != EOF) {
        handle_char(n, &not_zero);
        n = getchar();
    }
    return 0;

}

void handle_char(int c, int *not_zero) {

    switch (c) {
        case '\n':
            if (*not_zero) {
                *not_zero = false;
            } else {
                putchar('0');
            }
            putchar(c);
            break;
        case '0':
            if (*not_zero) 
                putchar(c);
            break;
        default:
            *not_zero = true;
            putchar(c);
    }

}