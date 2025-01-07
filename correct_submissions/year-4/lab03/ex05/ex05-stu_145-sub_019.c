

#include <stdio.h>

int aspas(int c) { return c == '\"'; }
int barra(int c) { return c == '\\'; }

enum state {FORA, DENTRO, BARRA};

int main() {
    enum state st = FORA;
    int current;
    while ((current = getchar()) != EOF) {
        switch (st) {
        case FORA:
            if (aspas(current)) {
                st = DENTRO;
            }
            break;
        case DENTRO:
            if (barra(current)) {
                st = BARRA;
            } else if(aspas(current)) {
                printf("\n");
                st = FORA;
            } else {
                putchar(current);
            }
            break;
        case BARRA:
            putchar(current);
            st = DENTRO;
            break;
        }
    }
    return 0;
}
