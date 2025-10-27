

#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define TRUE 1
#define FALSE 0

int main() {
    int c, state = FORA, n = 0, printed = FALSE;
    while ((c = getchar()) != EOF) {
        if (printed)
            putchar(' ');
            printed = FALSE;
        if (c != ' ' && c != '\n') {
            if (state == FORA)
                state = DENTRO;
            n *= 10;
            
            n += c - 48;
            
        }
        else if (state == DENTRO) {
            printf("%d", n);
            printed = TRUE;
            state = FORA;
            n = 0;
        }
    }
    putchar('\n');
    return 0;
}
