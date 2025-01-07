
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
        
        if (estado == DENTRO){
            
            if (barra == ESPECIAL) {
                putchar(c);
                barra = N_ESPECIAL;
            }
            else {

                if (c == '"') {
                    putchar('\n');
                    estado = FORA;
                }
                else if (c == '\\') {
                    barra = ESPECIAL;
                }
                else {
                    putchar(c);
                }
            }

        }
        else {
            
            if (c == '"') {
                estado = DENTRO;
            }
        
        }

        c = getchar();

    }

    return 0;
}