

#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define TRUE 1
#define FALSE 0

int main() {
    long int n = 0;
    int c, separator, state = FORA, printed = FALSE;
    while ((c = getchar()) != EOF) {
        if (printed) {
            printf("%c", separator);
            printed = FALSE;
        }
        if (c != ' ' && c != '\n') {
            if (state == FORA) { 
                state = DENTRO;
            }
            n *= 10;
            n += c - 48;
        }
        else if (state == DENTRO) {
            printf("%ld", n);
            separator = c;
            printed = TRUE;
            state = FORA;
            n = 0;
        }
    }
    putchar('\n');
    return 0;
}
