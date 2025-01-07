#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define ZERO 2

int is_whitespace(char current) {
    return current == ' ' || current == '\n' || current == '\t';
}

int main() {

    int current;
    int current_state = FORA;

    while ((current = getchar()) != EOF) {
        if (current_state == FORA) {
            if (current >= '1' && current <= '9') {
                putchar(current);
                current_state = DENTRO;
            } else if (current == '0') {
                current_state = ZERO;
            } else {
                putchar(current);
            }

        } else if (current_state == DENTRO) {
            putchar(current);
            if (is_whitespace(current)) {
                current_state = FORA;
            }

        } else if (current_state == ZERO) {
            if (is_whitespace(current)) {
                putchar('0');
                putchar(current);
                current_state = FORA;
            } else if (current >= '1' && current <= '9') {
                putchar(current);
                current_state = DENTRO;
            }
        }
    }

    return 0;
}
