#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define ESC 2

int main() {
    int c;
    int estado = FORA;

    while((c =getchar()) != EOF) {
        switch(estado) {

            case FORA:
                if(c == '"')
                    estado=DENTRO;
                break;

            case DENTRO:
                if(c == '"') {
                    estado=FORA;
                    putchar('\n');
                }
                else if(c== '\\')
                    estado = ESC;
                else 
                    putchar(c);
                break;
            case ESC:
                putchar(c);
                estado = DENTRO;
                break;

        }
    }
    return 0;
}