
#include <stdio.h>

#define DENTRO 1
#define FORA 0
#define ESPECIAL 1
#define N_ESPECIAL 0


int main() {

    int estado = FORA, barra = N_ESPECIAL;
    char c;

    c = getchar();

    while (c != EOF) {

        if (estado == DENTRO && barra == N_ESPECIAL && c == '"') {
            estado = FORA;
            putchar('\n');
        }
        else if (estado == FORA && c == '"') {
            estado = DENTRO;
        }
        else if (estado == DENTRO && barra == ESPECIAL) {
            putchar(c);
            barra = N_ESPECIAL;
        }
        else if (estado == DENTRO) {
            putchar(c);
        }
        else if (barra == ESPECIAL) {
            barra = N_ESPECIAL;
        }
        
        c = getchar();
    }

    return 0;
}