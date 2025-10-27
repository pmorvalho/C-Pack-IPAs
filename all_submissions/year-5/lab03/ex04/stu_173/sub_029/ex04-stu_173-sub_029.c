

#include <stdio.h>

#define DENTRO 0
#define FORA 1

int main() {
    int c, n = -1, estado = FORA;
    
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            if (estado == FORA)
                estado = DENTRO;
            if (n < 0)
                n = c - '0';
            else
                n = n * 10 + (c - '0'); 
        } else {
            if (estado == DENTRO) {
                estado = FORA;
                printf("%d", n);
                n = -1;
            }
            putchar(c);
        }
    }

    if (n >= 0)
        printf("%d", n);
    putchar('\n');
    return 0;
}