

#include <stdio.h>

#define FORA 0
#define DENTRO 1 
#define ZERO_ESQ -1


void formata(){
    int estado = FORA;
    int c, anterior;
    anterior = getchar();
    while((c = getchar()) != EOF) {
        
        if (c == ' ' || c == '\n' || c == '\t') {
            if (estado == ZERO_ESQ) {
                putchar(anterior);
            }
            if (estado != FORA) {
                putchar(' ');
            }
            estado = FORA;
        }
        else {
            if (c > '0' && c <= '9') {
                putchar(c);
                estado = DENTRO;
                }
            else if (estado == FORA) {
                if (c == '0') {
                    estado = ZERO_ESQ;
                }
            }
            else if (estado == DENTRO) {
                if (('0' <= c) && (c <= '9')) {
                    putchar(c);
                }
            }
            }
        anterior = c;
    }
}



int main() {

    formata();

    return 0;
}
