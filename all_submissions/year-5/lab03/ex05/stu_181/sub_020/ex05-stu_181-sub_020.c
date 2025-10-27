

#include <stdio.h>

#define DENTRO 1
#define FORA 0

int main() {
    int c, state = FORA, special = FORA;
    while ((c = getchar()) != EOF) {
        if (special) {
            printf("%c", c);
            special = FORA;
        }
        else if (c == '"') {
            if (state == FORA) {
                state = DENTRO;
            }
            else {
                state = FORA;
                putchar('\n');
            }
        }
        else if (c == '\\') {
            special = DENTRO;
        }
        else if (state == DENTRO) {
            printf("%c", c);
        }
    }
    return 0;
}
