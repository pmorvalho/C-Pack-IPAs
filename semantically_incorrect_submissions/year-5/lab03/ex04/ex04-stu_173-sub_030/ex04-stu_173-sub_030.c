

#include <stdio.h>

#define DENTRO 0
#define FORA 1

int main() {
    int c, n = -1, contador = 0, estado = FORA;
    
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            if (estado == FORA)
                estado = DENTRO;
            if (n < 0)
                n = c - '0';
            else
                n = n * 10 + (c - '0'); 
        } else if (estado == DENTRO) {
            estado = FORA;
            if (contador > 0)
                putchar(' ');
            printf("%d", n);
            n = -1;
            contador++;
        } else {
            estado = FORA;
        }
    }

    printf(" %d\n", n);
    return 0;
}