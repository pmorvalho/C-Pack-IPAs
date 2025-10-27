

#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
    int c;
    int estado = FORA, escape_sequence = FORA;

    while ((c = getchar()) != EOF) {
        if (c == '\\') {
            if (escape_sequence == FORA)
                escape_sequence = DENTRO;
            else {
                escape_sequence = FORA;
                putchar(c);
            }
        }
        else if (escape_sequence == DENTRO) {
            putchar(c);
            escape_sequence = FORA;
        } 
        else if (c == '"') {
            if (estado == FORA) {
                estado = DENTRO;
            } else {
                estado = FORA;
                putchar('\n');
            }
        } 
        else {
            if (estado == DENTRO)
                putchar(c);
        }
    }
    return 0;
}