

#include <stdio.h>

int spc(int c) { return c == ' ' || c == '\n' || c == EOF; }
int nonzero(int c) { return '1' <= c && c <= '9'; }

enum state {FORA, DENTRO, LEFT_ZEROS};

int main() {
    enum state st = FORA;
    int current, first = 1;
    while ((current = getchar()) != EOF) {
        switch (st) {
        case FORA:
            if (!spc(current)) {
                if (first) {
                    first = 0;
                } else {
                    putchar(' ');
                }
                if (nonzero(current)) {
                    putchar(current);
                    st = DENTRO;
                } else {
                    st = LEFT_ZEROS;
                }
            }
            break;
        case DENTRO:
            if (!spc(current)) {
                putchar(current);
            } else {
                st = FORA;
            }
            break;
        case LEFT_ZEROS:
            if (nonzero(current)) {
                putchar(current);
                st = DENTRO;
            }
            else if (spc(current)) {
                putchar('0');
                st = FORA;
            }  
            break;
        }
    }
    printf("\n");
    return 0;
}
