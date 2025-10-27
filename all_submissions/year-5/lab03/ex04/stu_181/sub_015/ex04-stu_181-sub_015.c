

#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    int c, state = FORA, n = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\n') {
            if (state == FORA)
                state = DENTRO;
            n *= 10;
            
            n += c - 48;
            
        }
        else if (state == DENTRO) {
            printf("%d ", n);
            state = FORA;
            n = 0;
        }
    }
    return 0;
}
