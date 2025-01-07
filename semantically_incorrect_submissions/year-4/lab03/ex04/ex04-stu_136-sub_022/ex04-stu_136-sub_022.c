

#include <stdio.h>

#define DENTRO 1
#define FORA 0

int main() {

    int estado = FORA;
    char c;

    c = getchar();

    while (c != EOF) {

        if ((estado == DENTRO && (c >= '0' && c <= '9')) ||
            (estado == FORA && (c == ' ' || c == '\n'))) {
            putchar(c);
        }

        else if (estado == DENTRO) {
            estado = FORA;
            putchar(c);
        }

        else if (estado == FORA && (c >= '1' && c <= '9')) {
            estado = DENTRO;
            putchar(c);
        }
        else {
            
            while (c == '0') {
                c = getchar();
            }

            if (c == ' ' || c == '\n') {
                putchar('0');
                putchar(c);
            }
            else {
                continue;
            }
        }

        c = getchar();
    }
    
    return 0;
}
